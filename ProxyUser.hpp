#pragma once
#include "IUser.hpp"
#include "RealUser.hpp"

class ProxyUser : public IUser {
private:
    std::string name;
    mutable RealUser* real;

public:
    ProxyUser(const std::string& n);
    ~ProxyUser();
    std::string getInfo() const override;
};
