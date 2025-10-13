#pragma once
#include "IUser.hpp"

class RealUser : public IUser {
private:
    std::string name;

public:
    RealUser(const std::string& n);
    std::string getInfo() const override;
};
