

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for RatDVDReader.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_RatDVDReaderLib,0x69A065D3,0xC03D,0x4fa2,0x9C,0x43,0xCB,0x38,0xD2,0x07,0x85,0x67);


MIDL_DEFINE_GUID(IID, IID_IImageServicePlugin,0xAB0A7BF2,0x94C0,0x4daa,0x82,0x56,0x2B,0xB6,0xC3,0x64,0x80,0x50);


MIDL_DEFINE_GUID(IID, IID_ILibraryBuilderPlugin,0x32496CEA,0x3B51,0x4f2f,0x9C,0xE7,0x73,0xD6,0xAC,0x94,0x2C,0x34);


MIDL_DEFINE_GUID(CLSID, CLSID_RatDVDReader,0x61700EEC,0xD5D3,0x4793,0xBD,0x1F,0x51,0x48,0x96,0xD6,0x7F,0x44);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



