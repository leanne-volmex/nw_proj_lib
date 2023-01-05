#include "/home/leanne/wpre/mylib/src/mylib.h"

#include "common.hpp"
#include "server.hpp"

int main()
{
    print_server();
    server server{SERVER_IP, SERVER_PORT, SERVER_THREADS};
    server.start();
    return EXIT_SUCCESS;
}
