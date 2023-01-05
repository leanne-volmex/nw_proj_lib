# TcpClientServerApp

This repo contains the asynchronous protocol-based
[TCP](https://en.wikipedia.org/wiki/Transmission_Control_Protocol) client and
server applications using C++ and
[Boost::Asio](https://www.boost.org/doc/libs/1_81_0/doc/html/boost_asio.html).

In this repo I seek to connect the app with another of my library
## Dependencies

- C++11 or above
- [Boost::Asio](https://www.boost.org/doc/libs/1_81_0/doc/html/boost_asio.html)
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

## Fundamentals

[Network Protocols](https://www.youtube.com/watch?v=E5bSumTAHZE&t=259s)

HTTP (Hypertext Transfer Protocol) is a networking protocol used for exchanging web content (e.g. HTML pages, images, videos) over the internet. It is a stateless protocol, meaning that each request is independent of previous requests. HTTP uses a simple request/response model, where a client sends a request to a server and the server sends a response back to the client.

HTTPS (Hypertext Transfer Protocol Secure) is a variation of HTTP that uses TLS (Transport Layer Security) to secure the data transmission between a client and a server. TLS encrypts the data being transmitted, making it difficult for third parties to intercept and read the data.

TCP (Transmission Control Protocol) is a networking protocol used for transmitting data over a network. It is a connection-oriented protocol, meaning that it establishes a connection between two devices before transmitting data. TCP ensures that data is delivered reliably and in the correct order by using sequence numbers and acknowledgement messages.

Some networking protocols that are relevant to building a trading exchange:

1.  FIX (Financial Information eXchange Protocol): used for sending financial data and trading orders between financial institutions and exchanges
2.  ITCH (Information Technology CHannel Protocol): used by exchanges to disseminate real-time market data to market participants
3.  OUCH (Order Entry and Execution Protocol): used by brokerage firms to send and receive orders to/from exchanges and other counterparties
4.  OMX (Open MEx Protocol): used by exchanges for market data dissemination and order entry/execution
5.  CME MDP (Market Data Platform): used by the CME Group (a global exchange) for market data dissemination and order entry/execution
6.  NEX Market Data Protocol: used by NEX (a global exchange) for market data dissemination and order entry/execution
7.  TCP/IP (Transmission Control Protocol/Internet Protocol): used for transmitting data over a network (e.g. between exchange servers and clients)
8.  TLS (Transport Layer Security): used for securing data transmission over a network (e.g. to protect trading orders and market data)


