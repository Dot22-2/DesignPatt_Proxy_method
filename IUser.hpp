#pragma once
#include <string>

class IUser {
public:
    virtual ~IUser() = default;
    virtual std::string getInfo() const = 0;
};
