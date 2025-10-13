#include "ProxyUser.hpp"
#include <iostream>
#include <vector>

int main() {
    std::vector<IUser*> users;
    users.push_back(new ProxyUser("Dmytro"));
    users.push_back(new ProxyUser("Olena"));

    for (const auto& user : users) {
        std::cout << user->getInfo() << "\n";
        delete user;
    }

    return 0;
}
