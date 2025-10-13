#include "ProxyUser.hpp"

ProxyUser::ProxyUser(const std::string& n) : name(n), real(nullptr) {}

ProxyUser::~ProxyUser() {
    delete real;
}

std::string ProxyUser::getInfo() const {
    if (!real)
        real = new RealUser(name); // ледача ініціалізація
    return "[Proxy] Delegating -> " + real->getInfo();
}
