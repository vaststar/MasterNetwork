#ifndef __UNIXSERVER__H__
#define __UNIXSERVER__H__

#include <memory>

class UnixServer
{
public:
    explicit UnixServer(unsigned int port);
    UnixServer(const UnixServer &) = delete;
    UnixServer(UnixServer &&) = delete;
    UnixServer& operator=(const UnixServer &) = delete;
    UnixServer& operator=(UnixServer &&) = delete;
    ~UnixServer();
private:
    class UnixServerPrivate;
    std::shared_ptr<UnixServerPrivate> _p;
};
#endif//__UNIXSERVER__H__