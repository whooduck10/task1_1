#include "LoginController.h"

Response LoginController::handle(const Request &req)
{
    auto json = req.body;
    std::string username = json["username"];
    std::string password = json["password"];

    if (username == "admin" && password == "123456")
    {
        // TODO
        //AdminController::handle(username, password);
        TokenStore::instance().store(TokenGenerator::generate(), Role::ADMIN);
        
        return {200, req.token};
    }
    else if (username == "user" && password == "123456")
    {
        // TODO
        //UserController::handle(username, password);
        TokenStore::instance().store(TokenGenerator::generate(), Role::USER);
        return {200, req.token};
    } else if (username == "guest" && password == "123456")
    {
        // TODO
        //GuestController::handle(username, password);
        TokenStore::instance().store(TokenGenerator::generate(), Role::GUEST);
        return {200, req.token};
    }
    return {403, "Fail login!!!"};
}