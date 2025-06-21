#include "AuthMiddleware.h"

bool AuthMiddleware::authorize(const Request &req)
{
    // if (req.path == "/login")
    // {
    if (
        (TokenStore::instance().getRole(req.token) == Role::ADMIN)
        ||(TokenStore::instance().getRole(req.token) == Role::GUEST)
        ||(TokenStore::instance().getRole(req.token) == Role::USER))
        return true;
    else if (req.path == "/login" ){
        return true ; 
    }
    return false;
}
