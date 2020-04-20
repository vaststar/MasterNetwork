#include "UnixServer.h"

class UnixServer::UnixServerPrivate
{
public:
    UnixServerPrivate(unsigned int port)
    {

    }
private:

};

UnixServer::UnixServer(unsigned int port)
    :_p(std::make_shared<UnixServerPrivate>(port))
{

}

UnixServer::~UnixServer()
{

}