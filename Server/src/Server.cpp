#include "Server.h"
#include "BaseServer.h"
#if defined(__linux__)
#include "UnixServer.h"
#else
#endif

class Server::ServerPrivate
{
public:
    ServerPrivate(unsigned int port)
    {
#if defined(__linux__)
        _server = std::make_shared<UnixServer>(port);
#else
#endif
    }
    void startServer()
    {
        if(_server)
        {
            _server->startServer();
        }
    }
private:
    std::shared_ptr<BaseServer> _server;
};

Server::Server(unsigned int port)
    :_p(std::make_shared<ServerPrivate>(port))
{

}

void Server::startServer()
{
    _p->startServer();
}