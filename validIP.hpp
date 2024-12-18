// IPv4s Inválidos
// Loopback(Representa a Própria Máquina)
// 127.0.0.0/8 (127.0.0.0 - 127.255.255.255)

// Endereços de IPv4 Privados
// 10.0.0.0/8 (10.0.0.0 - 10.255.255.255)
// 172.16.0.0/12 (172.16.0.0 - 172.31.255.255)
// 192.168.0.0/16 (192.168.0.0 - 192.168.255.255)

// Local-Link (APIPA)
// 169.254.0.0/16 (169.254.0.0 - 169.254.255.255)

// Simplesmente Inválido (Representa a Rede em Si)
// Qualquer IPv4 que Termine em "0"

// Endereço Broadcast
// Qualquer IPv4 que Termine em "255"
// 255.255.255.255

// Endereço Multicast
// 224.0.0.0/4 (224.0.0.0 - 239.255.255.255)

// Endereço Experimental
// 240.0.0.0/4 (240.0.0.0 - 255.255.255.254)

// Enereço Nulo
// 0.0.0.0

// Endereços Para Documentação
// 192.168.2.0/24 (192.168.2.0 - 192.168.2.255)
// 198.51.100.0/24 (198.51.100.0 - 198.51.100.255)
// 203.0.113.0/24 (203.0.113.0 - 203.0.113.255)

// Endereço de NAT
// 100.64.0.0/10 (100.64.0.0 - 100.127.255.255)

#ifndef VALIDIP_HPP
#define VALIDIP_HPP

#include <string>
#include <vector>
#include <sstream>

bool is_valid_ipv4(std::string ipv4) {
    int ipv4_1;
    int ipv4_2;
    int ipv4_3;
    int ipv4_4;
    std::vector<std::string> ipv4_segments;
    std::istringstream stream(ipv4);
    std::string segment;

    while (std::getline(stream, segment, '.')) {
        ipv4_segments.push_back(segment);
    }

    ipv4_1 = std::stoi(ipv4_segments[0]);
    ipv4_2 = std::stoi(ipv4_segments[1]);
    ipv4_3 = std::stoi(ipv4_segments[2]);
    ipv4_4 = std::stoi(ipv4_segments[3]);

 
    if (ipv4_1 == 127 || ipv4_1 == 10) {
        return false;

    } else if (ipv4_1 >= 224 && ipv4_1 <= 239) {
        return false;

    } else if (ipv4_1 >= 240 && ipv4_1 <= 255) {
        return false;

    } else if (ipv4_1 == 172 && ipv4_2 >= 16 && ipv4_2 <= 31) {
        return false;

    } else if (ipv4_1 == 192 && ipv4_2 == 168) {
        return false;

    } else if (ipv4_1 == 169 && ipv4_2 == 254) {
        return false;

    } else if (ipv4_1 == 198 && ipv4_2 == 51 && ipv4_3 == 100) {
        return false;

    } else if (ipv4_1 == 203 && ipv4_2 == 0 && ipv4_3 == 113) {
        return false;

    } else if (ipv4_1 == 100 && ipv4_2 >= 64 && ipv4_2 <= 127) {
        return false;

    } else if (ipv4_1 == 0 && ipv4_2 == 0 && ipv4_3 == 0 && ipv4_4 == 0) {
        return false;

    } else if (ipv4_4 == 0 || ipv4_4 == 255) {
        return false;
    }

    return true;
}

#endif