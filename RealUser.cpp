#include "RealUser.hpp"

RealUser::RealUser(const std::string& n) : name(n) {}

std::string RealUser::getInfo() const {
    return "[RealUser] Name: " + name;
}
