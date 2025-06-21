#include "Router.h"
#include "controllers/LoginController.h"
#include "controllers/AdminController.h"
#include "controllers/UserController.h"
#include "controllers/GuestController.h"

Controller *Router::getController(const Request &req)
{

    if (req.path == "/login" && req.method == "POST")
    {
       // std::cout<< "Here 0" << endl;
        return new LoginController();
    }
    if (req.path == "/guest" && req.method == "GET" && (TokenStore::instance().getRole(req.token) == Role::GUEST 
    || TokenStore::instance().getRole(req.token) == Role::ADMIN)){
       // std::cout<< "Here 0.5" << endl;
        return new GuestController(); // Assuming register uses the same controller for now
    }
    // TODO
    if(req.path == "/user" && req.method == "GET" && (TokenStore::instance().getRole(req.token) == Role::USER || TokenStore::instance().getRole(req.token) == Role::ADMIN)){
       //std::cout<< "Here 1" << endl;
        return new UserController();
    }
    if(req.path == "/admin" && req.method == "GET" && TokenStore::instance().getRole(req.token) == Role::ADMIN){
       // std::cout<< "Here 2" << endl;
        return new AdminController();
    }
    return nullptr;
}
