#include <iostream>   
#include "StringUtils.h"
#include <vector>

int main(){
  //StringUtils::trim("   Hello, World!   ");
  std ::string str = "   Hello, World!   ";
  std ::string str2= "Hello, World!   ";
  std::vector<std::string> vstore  =  StringUtils::split(str2, ',');
  //StringUtils::parseJSON("{\"key\":\"value\"}");
  std :: cout << "Trimmed: '" << StringUtils::trim("   Hello, World!   ") << "'" << std::endl;
  std::cout << "Split: ";
  for (const auto &s : vstore) {
      std::cout << " " << s << ", ";
  }
  std::string json = "{\"key1\":\"value1\", \"key2\":\"value2\"}";
  auto jsonMap = StringUtils::parseJSON(json);
  std::cout << "\nParsed JSON:\n";
  for (const auto &pair : jsonMap) {
      std::cout << pair.first << " : " << pair.second << std::endl;
  }
  return 0; 
}

