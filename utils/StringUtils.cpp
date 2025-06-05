#include "StringUtils.h"

std::string StringUtils::trim(const std::string &s)
{
    // TODO
    std::string result = s;
    result.erase(result.begin(), 
                std::find_if(
                    result.begin(), result.end(), 
                [](unsigned char ch) 
                {return !std::isspace(ch);}
            )
    );
    result.erase(std::find_if(result.rbegin(), result.rend(), [](unsigned char ch) {
        return !std::isspace(ch);
    }).base(), result.end());
    return result;
}

std::vector<std::string> StringUtils::split(const std::string &s, char delimiter)
{
    // TODO
    std::vector<std::string> tokens;
    std::string token_iterator;
    std::istringstream tokenStream(s);
    while (std::getline(tokenStream, token_iterator, delimiter)) {
        tokens.push_back(token_iterator);
    }
    return tokens;


}

std::map<std::string, std::string> StringUtils::parseJSON(const std::string &json)
{
    // TODO

    std::map<std::string, std::string> jsonMap;
    std::istringstream stream(json);
    std::string line;   
    while (std::getline(stream,line,',')){
        std::string key, value ; 
        std::istringstream lineStream(line);
        if(std::getline(lineStream,key, ':')&&std::getline(lineStream,value)){
            key = StringUtils::trim(key);
            value = StringUtils::trim(value);
            while(key.front()=='{' || key.front()=='"'){
                key = key.substr(1, key.size()-1);
            }
            while(key.back()=='"' || key.back()=='}'){
                key = key.substr(0, key.size()-1);
            }
            while(value.front()=='{' || value.front()=='"'){
                value = value.substr(1, value.size()-1);
            }
            while(value.back()=='"' || value.back()=='}'){
                value = value.substr(0, value.size()-1);
            }
            jsonMap.insert(std::make_pair(key, value));
        }
    }
    return jsonMap;

}
