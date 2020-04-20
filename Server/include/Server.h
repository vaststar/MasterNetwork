#ifndef Server_h__
#define Server_h__

#include <memory>
#include "ServerExport.h"
class NETWORK_LIB_API Server
{
public:
    Server(unsigned int port);
    Server(const Server &) = delete;
    Server(Server &&) = delete;
    Server& operator=(const Server &) = delete;
    Server& operator=(Server &&) = delete;
public:
    void startServer();
private:
    class ServerPrivate;
    std::shared_ptr<ServerPrivate> _p;
};
#endif//Server