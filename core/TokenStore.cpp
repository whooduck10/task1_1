#include "TokenStore.h"

// TODO
TokenStore& TokenStore::instance()
{
  
  static TokenStore instance;  
    return instance;
}
void TokenStore::store(const std::string &token, Role role)
{
  instance().tokenRoleMap.insert(std::make_pair(token, role));
}

Role TokenStore::getRole(const std::string &token)
{
  auto it = instance().tokenRoleMap.find(token);
  if (it == instance().tokenRoleMap.end())
  {
    return Role::UNKNOWN;
  }
  return instance().tokenRoleMap[token];
}

bool TokenStore::contains(const std::string &token)
{
  return instance().tokenRoleMap.find(token) != instance().tokenRoleMap.end();
}