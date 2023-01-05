#include "/home/leanne/wpre/mylib/src/mylib.h"

#include "common.hpp"
#include "client.hpp"

int main()
{
    print_client();
    client client{SERVER_IP, SERVER_PORT};
    client.start();
    return EXIT_SUCCESS;
}
