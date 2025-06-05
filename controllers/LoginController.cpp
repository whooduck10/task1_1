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
        TokenStore::instance().store(req.token, Role::ADMIN);
        return {200, "Login success!!!"};
    }
    else if (username == "user" && password == "123456")
    {
        // TODO
        //UserController::handle(username, password);
        TokenStore::instance().store(req.token, Role::USER);
        return {200, "Login success!!!"};
    }
    return {403, "Fail login!!!"};
}