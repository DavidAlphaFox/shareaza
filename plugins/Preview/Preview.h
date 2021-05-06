

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for Preview.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __Preview_h__
#define __Preview_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __PreviewPlugin_FWD_DEFINED__
#define __PreviewPlugin_FWD_DEFINED__

#ifdef __cplusplus
typedef class PreviewPlugin PreviewPlugin;
#else
typedef struct PreviewPlugin PreviewPlugin;
#endif /* __cplusplus */

#endif 	/* __PreviewPlugin_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "Shareaza.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __PreviewLib_LIBRARY_DEFINED__
#define __PreviewLib_LIBRARY_DEFINED__

/* library PreviewLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_PreviewLib;

EXTERN_C const CLSID CLSID_PreviewPlugin;

#ifdef __cplusplus

class DECLSPEC_UUID("0F74BA53-C842-4CB5-B388-DD5663F62479")
PreviewPlugin;
#endif
#endif /* __PreviewLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


