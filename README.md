# TcpClientServerApp

This repo contains the asynchronous protocol-based
[TCP](https://en.wikipedia.org/wiki/Transmission_Control_Protocol) client and
server applications using C++ and
[Boost::Asio](https://www.boost.org/doc/libs/1_76_0/doc/html/boost_asio.html).

In this repo I seek to connect the app with another of my library
## Dependencies

- C++11 or above
- [Boost::Asio](https://www.boost.org/doc/libs/1_76_0/doc/html/boost_asio.html)
- [CMake](https://cmake.org/)

## Build

```shell
git clone git@github.com:leanne-volmex/nw_proj_lib.git
cd TcpAppClientServer
cmake -Bbuild -S. && cmake --build build
```

The client and server binaries will be generated:

- `./server/server`
- `./client/client`

## Run

`cd build` 

Run `server` on one terminal:

```shell
./server/server
```

Run `client` on another terminal:

```shell
./client/client
```


