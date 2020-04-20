#ifndef __ServerExport_h__
#define __ServerExport_h__

#ifdef MASTERSERVER_DLL
#ifdef MASTERSERVER_LIB
#define NETWORK_LIB_API _declspec(dllexport)
#else
#define NETWORK_LIB_API _declspec(dllimport)
#endif
#else 
#define NETWORK_LIB_API 
#endif

#endif//__ServerExport_h__