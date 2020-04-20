#ifndef __ServerExport_h__
#define __ServerExport_h__

#ifdef MASTERNETWORK_DLL
#ifdef MASTERNETWORK_LIB
#define NETWORK_LIB_API _declspec(dllexport)
#else
#define NETWORK_LIB_API _declspec(dllimport)
#endif
#else 
#define NETWORK_LIB_API 
#endif

#endif//__ServerExport_h__