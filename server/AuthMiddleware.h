#pragma once
#include "core/Request.h"
#include "core/TokenStore.h"

class AuthMiddleware
{
public:
    static bool authorize(const Request &req);
    static bool APIKeyAuthentication(const Request &req);
};
