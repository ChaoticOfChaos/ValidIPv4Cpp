# Função Simples Para Verificar se um IPv4 é Válido

###
Aqui Vou Listar os Motivos de Cada Filtro:
##


Loopback (127.0.0.0 - 127.255.255.255)
###
São os Endereços Reservados Para Representar o Próprio Dispositivo


##
Endereços Privados (10.0.0.0 - 10.255.255.255 | 172.16.0.0 - 172.31.255.255 | 192.168.0.0 - 192.168.255.255)
###
São Endereços Que Representam os Dispositivos Somentre Dentro da Mesma Rede


##
Endereços APIPA (169.254.0.0 - 169.254.255.255)
###
São Endereços Usados Por Dispositivos Que Não Conseguiram um IPv4 de Maneira Automática Pelo DHCP


##
Endereço da Rede (Qualquer IPv4 que Termine em 0)
###
São Endereços Para Representar a Rede Em Si, e Não um Dispositivo Como Normalmente


##
Endereço Broadcasts (255.255.255.255 ou Qualquer um Que Termine em 255)
###
São Endereços Usados Para Passar Informações a Todos na Mesma Sub-Rede


##
Endereço de Multicast (224.0.0.0 - 239.255.255.255)
###
São Endereços Reservados Para Roteamento


##
Endereços Experimentais (240.0.0.0 - 255.255.255.254)
###
Utilizados Para Experimentos. Atualmente Não Implementado na Internet Pública


##
Endereço Nulo (0.0.0.0)
###
Simplesmente um Endereço Que Não Existe


##
Endereços de Teste (192.168.2.0 - 192.168.2.255 | 198.51.100.0 - 198.51.100.255 | 203.0.113.0 - 203.0.113.255)
###
Endereços Usados Para Testes e Exemplos de Documentações


##
Endereço de NAT (100.64.0.0 - 100.127.255.255)
###
Usado por Redes que Usam CGN (Carrier-Grade NAT). Geralmente Usada Por Provedores de Internet
