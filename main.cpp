#include <iostream>
#include <string>

#include "validIP.hpp"

int main() {
    std::string loopBack = "127.0.0.1";
    std::string dnsGoogle = "8.8.8.8";

    std::cout << "loopBack is a Valid IPv4? : " << is_valid_ipv4(loopBack) << std::endl;
    std::cout << "dnsGoogle is a Valid IPv4? : " << is_valid_ipv4(dnsGoogle) << std::endl;

    return 0;
}