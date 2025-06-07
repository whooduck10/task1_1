#include "Router.h"
#include "controllers/LoginController.h"
#include "controllers/AdminController.h"
#include "controllers/UserController.h"

Controller *Router::getController(const Request &req)
{

    if (req.path == "/login" && req.method == "POST")
    {
        std::cout<< "Here 0" << endl;
        return new LoginController();
    }

    // TODO
    if(req.path == "/user" && req.method == "GET"){
        std::cout<< "Here 1" << endl;
        return new UserController();
    }
    if(req.path == "/admin" && req.method == "GET"){
        std::cout<< "Here 2" << endl;
        return new AdminController();
    }
    return nullptr;
}
