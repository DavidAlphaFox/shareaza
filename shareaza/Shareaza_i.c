

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for Shareaza.idl:
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

MIDL_DEFINE_GUID(IID, LIBID_Shareaza,0xE3481FE3,0xE062,0x4E1C,0xA2,0x3A,0x62,0xA6,0xD1,0x3C,0xBF,0xB8);


MIDL_DEFINE_GUID(IID, IID_IApplication,0x8EBD0B6F,0x7BC4,0x44d1,0xBE,0xC1,0x03,0xE2,0x2D,0xC2,0xA5,0x87);


MIDL_DEFINE_GUID(IID, IID_ISXMLNode,0xA0F89545,0xDAD8,0x4441,0x9D,0xF4,0xBC,0xB1,0x06,0xB1,0x22,0x34);


MIDL_DEFINE_GUID(IID, IID_ISXMLElement,0x5198A470,0xF9EE,0x49eb,0x94,0x8C,0xF8,0x17,0x66,0x10,0xA8,0xB2);


MIDL_DEFINE_GUID(IID, IID_ISXMLElements,0x10BF271C,0x85A3,0x4ad4,0x89,0x30,0xCC,0x0E,0x3C,0xEE,0xAD,0xA4);


MIDL_DEFINE_GUID(IID, IID_ISXMLAttribute,0x6D4598A7,0x26A1,0x4990,0xBA,0x60,0xDE,0x0E,0x21,0x2A,0xF9,0x3C);


MIDL_DEFINE_GUID(IID, IID_ISXMLAttributes,0x8E03E1BF,0xCCC0,0x4616,0x9C,0x0D,0x82,0x04,0xA8,0x3B,0xAE,0xB4);


MIDL_DEFINE_GUID(IID, IID_IGeneralPlugin,0xD1B5D3A4,0xB890,0x470a,0xA3,0xFF,0x97,0x00,0xF3,0xC2,0xA0,0x63);


MIDL_DEFINE_GUID(IID, IID_ICommandPlugin,0xCB25DAED,0xD745,0x45db,0x99,0x4E,0x32,0x63,0x9D,0x28,0x88,0xA9);


MIDL_DEFINE_GUID(IID, IID_IExecutePlugin,0x8E878640,0x37B5,0x44a3,0xA3,0x7C,0xFC,0x3B,0xF1,0xCC,0xF6,0xB6);


MIDL_DEFINE_GUID(IID, IID_IChatPlugin,0x8065EF37,0xF0EA,0x4898,0xBB,0xBD,0xD3,0x77,0x98,0xDE,0x83,0xCB);


MIDL_DEFINE_GUID(IID, IID_ISToolbar,0xE02F505E,0x9649,0x4eb1,0xAB,0x3F,0x56,0xFF,0xDF,0xF5,0xB9,0x2C);


MIDL_DEFINE_GUID(IID, IID_IPluginWindow,0xADDB77AE,0x3483,0x4a15,0xB3,0x91,0xAE,0x31,0x56,0x3B,0xD7,0xE3);


MIDL_DEFINE_GUID(IID, IID_IPluginWindowOwner,0xC6631461,0x2654,0x4572,0xBB,0x3C,0x54,0xF5,0x2F,0x0F,0xF1,0xB9);


MIDL_DEFINE_GUID(IID, IID_ILibraryBuilderPlugin,0x32496CEA,0x3B51,0x4f2f,0x9C,0xE7,0x73,0xD6,0xAC,0x94,0x2C,0x34);


MIDL_DEFINE_GUID(IID, IID_IImageServicePlugin,0xAB0A7BF2,0x94C0,0x4daa,0x82,0x56,0x2B,0xB6,0xC3,0x64,0x80,0x50);


MIDL_DEFINE_GUID(IID, IID_IDownloadPreviewSite,0x52A97CBD,0x2B99,0x45e8,0xB6,0xF9,0x41,0xE9,0xCD,0x58,0x39,0x60);


MIDL_DEFINE_GUID(IID, IID_IDownloadPreviewPlugin,0x1182FCD9,0x9F14,0x4e4a,0xBD,0x05,0x43,0x24,0x22,0xB5,0xBF,0xAF);


MIDL_DEFINE_GUID(IID, IID_IDownloadPreviewPlugin2,0x7682913F,0x2AE7,0x44d6,0x85,0x2A,0x1A,0xB1,0xB9,0x13,0x81,0x8C);


MIDL_DEFINE_GUID(IID, IID_IAudioVisPlugin,0xE788D125,0x4D41,0x4a35,0xA4,0x36,0xD1,0xA1,0xFD,0x0C,0x8E,0xC9);


MIDL_DEFINE_GUID(IID, IID_IMediaPlayer,0x59978299,0xC8AC,0x4818,0x83,0xF4,0xC3,0x82,0xBB,0x61,0x1D,0x5C);


MIDL_DEFINE_GUID(IID, IID_IWrappedPluginControl,0x71045028,0xF95C,0x4c03,0xAB,0x09,0x6D,0x90,0x6D,0xBF,0xC7,0x31);


MIDL_DEFINE_GUID(IID, IID_IUserInterface,0xFCDE733E,0xDDA0,0x4849,0xAD,0x83,0xD0,0x2B,0x0F,0x4D,0x1D,0xA3);


MIDL_DEFINE_GUID(IID, IID_ILibrary,0x1735A63C,0x099B,0x414c,0x9B,0x22,0x81,0x7C,0x2F,0xC5,0xEC,0x34);


MIDL_DEFINE_GUID(IID, IID_ISettings,0xFDDC655E,0x6CA6,0x4575,0xA1,0x67,0x1F,0xD4,0x8A,0xAC,0x54,0xEF);


MIDL_DEFINE_GUID(IID, IID_ISMenu,0xD8C3C592,0x5AF4,0x44cf,0x8A,0xA8,0x59,0x03,0x8F,0xE3,0x88,0x12);


MIDL_DEFINE_GUID(IID, IID_ISToolbarItem,0x3A82A3A3,0x5560,0x4ece,0xB3,0x8A,0xD5,0x6E,0x1E,0x74,0x64,0x2A);


MIDL_DEFINE_GUID(IID, IID_IGenericView,0xEBAD02A1,0xE1B0,0x4961,0x94,0x15,0x83,0x26,0x7B,0x2A,0x50,0x10);


MIDL_DEFINE_GUID(IID, IID_IShareazaFile,0xB43A9B10,0x3F72,0x4a96,0xBD,0x40,0xC3,0xB6,0x43,0xFD,0xF2,0xF3);


MIDL_DEFINE_GUID(IID, IID_ILibraryFile,0xB663F7DE,0xE1C6,0x4fe6,0x92,0xBD,0xD0,0x54,0x9B,0x76,0x01,0xE3);


MIDL_DEFINE_GUID(IID, IID_ILibraryFiles,0x49346C06,0xDC33,0x4975,0x97,0x8E,0xE8,0x07,0xF7,0xE4,0x1E,0xF9);


MIDL_DEFINE_GUID(IID, IID_ILibraryFolder,0x8A6BC680,0x3451,0x4a78,0x8A,0x01,0xB7,0xDF,0xC1,0xD9,0xA1,0x48);


MIDL_DEFINE_GUID(IID, IID_ILibraryFolders,0x43DF8D22,0x6F85,0x4d0a,0xB0,0x72,0x1C,0x8B,0xF8,0xA5,0x70,0x73);


MIDL_DEFINE_GUID(IID, IID_ILibraryPlugin,0x8065EF37,0xF0EA,0x4898,0xBB,0xBD,0xD3,0x77,0x98,0xDE,0x83,0xCC);


MIDL_DEFINE_GUID(IID, IID_ICollectionHtmlView,0xCF66956E,0x901F,0x44D0,0xB5,0xC6,0xFC,0x6A,0x43,0x6A,0x03,0x0D);


MIDL_DEFINE_GUID(CLSID, CLSID_ShareazaApplication,0xE9B2EF9B,0x4A0C,0x451e,0x80,0x1F,0x25,0x78,0x61,0xB8,0x7F,0xAD);


MIDL_DEFINE_GUID(CLSID, CLSID_ShareazaXML,0x30FC662A,0xD72A,0x4f79,0xB6,0x3A,0xAC,0xD4,0xFB,0xFE,0x68,0xA3);


MIDL_DEFINE_GUID(CLSID, CLSID_ShareazaXMLCollection,0xD73ABD28,0x3A2A,0x4e36,0xAD,0x6F,0x2A,0xA8,0xF0,0x11,0xFB,0xE3);


MIDL_DEFINE_GUID(CLSID, CLSID_ShareazaDataSource,0x34791E02,0x51DC,0x4CF4,0x9E,0x34,0x01,0x81,0x66,0xD9,0x1D,0x0E);


MIDL_DEFINE_GUID(CLSID, CLSID_ShareazaIEProtocol,0x18D11ED9,0x1264,0x48A1,0x9E,0x14,0x20,0xF2,0xC6,0x33,0x24,0x2B);


MIDL_DEFINE_GUID(CLSID, CLSID_ShareazaIEProtocolRequest,0xE1A67AE5,0x7041,0x4AE1,0x94,0xF7,0xDE,0x03,0xEF,0x75,0x9E,0x27);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



