#ifndef __BASESERVER__H__
#define __BASESERVER__H__
class BaseServer
{
public:
    virtual ~BaseServer() = default;
public:
    virtual void startServer() = 0;
};
#endif //__BASESERVER__H__