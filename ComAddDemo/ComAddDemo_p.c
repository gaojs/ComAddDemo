

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for ComAddDemo.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "ComAddDemo_i.h"

#define TYPE_FORMAT_STRING_SIZE   1189                              
#define PROC_FORMAT_STRING_SIZE   115                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _ComAddDemo_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ComAddDemo_MIDL_TYPE_FORMAT_STRING;

typedef struct _ComAddDemo_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ComAddDemo_MIDL_PROC_FORMAT_STRING;

typedef struct _ComAddDemo_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ComAddDemo_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const ComAddDemo_MIDL_TYPE_FORMAT_STRING ComAddDemo__MIDL_TypeFormatString;
extern const ComAddDemo_MIDL_PROC_FORMAT_STRING ComAddDemo__MIDL_ProcFormatString;
extern const ComAddDemo_MIDL_EXPR_FORMAT_STRING ComAddDemo__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IISimAddObj_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IISimAddObj_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, new range semantics, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const ComAddDemo_MIDL_PROC_FORMAT_STRING ComAddDemo__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Add */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10 */	NdrFcShort( 0x10 ),	/* 16 */
/* 12 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 16 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter num1 */

/* 24 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter num2 */

/* 30 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sum */

/* 36 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 42 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 44 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Test */

/* 48 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 50 */	NdrFcLong( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
/* 56 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x8 ),	/* 8 */
/* 62 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 64 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 72 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 74 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TestVar */

/* 78 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 80 */	NdrFcLong( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x9 ),	/* 9 */
/* 86 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x8 ),	/* 8 */
/* 92 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 94 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x1 ),	/* 1 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter va */

/* 102 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 104 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 106 */	NdrFcShort( 0x49a ),	/* Type Offset=1178 */

	/* Return value */

/* 108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 110 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ComAddDemo_MIDL_TYPE_FORMAT_STRING ComAddDemo__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  4 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x12, 0x0,	/* FC_UP */
/*  8 */	NdrFcShort( 0x47e ),	/* Offset= 1150 (1158) */
/* 10 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 12 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 14 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 16 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 18 */	0x0 , 
			0x0,		/* 0 */
/* 20 */	NdrFcLong( 0x0 ),	/* 0 */
/* 24 */	NdrFcLong( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x2 ),	/* Offset= 2 (30) */
/* 30 */	NdrFcShort( 0x10 ),	/* 16 */
/* 32 */	NdrFcShort( 0x2f ),	/* 47 */
/* 34 */	NdrFcLong( 0x14 ),	/* 20 */
/* 38 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 40 */	NdrFcLong( 0x3 ),	/* 3 */
/* 44 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 46 */	NdrFcLong( 0x11 ),	/* 17 */
/* 50 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 52 */	NdrFcLong( 0x2 ),	/* 2 */
/* 56 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 58 */	NdrFcLong( 0x4 ),	/* 4 */
/* 62 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 64 */	NdrFcLong( 0x5 ),	/* 5 */
/* 68 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 70 */	NdrFcLong( 0xb ),	/* 11 */
/* 74 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 76 */	NdrFcLong( 0xa ),	/* 10 */
/* 80 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 82 */	NdrFcLong( 0x6 ),	/* 6 */
/* 86 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (318) */
/* 88 */	NdrFcLong( 0x7 ),	/* 7 */
/* 92 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 94 */	NdrFcLong( 0x8 ),	/* 8 */
/* 98 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (324) */
/* 100 */	NdrFcLong( 0xd ),	/* 13 */
/* 104 */	NdrFcShort( 0x100 ),	/* Offset= 256 (360) */
/* 106 */	NdrFcLong( 0x9 ),	/* 9 */
/* 110 */	NdrFcShort( 0x10c ),	/* Offset= 268 (378) */
/* 112 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 116 */	NdrFcShort( 0x118 ),	/* Offset= 280 (396) */
/* 118 */	NdrFcLong( 0x24 ),	/* 36 */
/* 122 */	NdrFcShort( 0x3c2 ),	/* Offset= 962 (1084) */
/* 124 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 128 */	NdrFcShort( 0x3bc ),	/* Offset= 956 (1084) */
/* 130 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 134 */	NdrFcShort( 0x3ba ),	/* Offset= 954 (1088) */
/* 136 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 140 */	NdrFcShort( 0x3b8 ),	/* Offset= 952 (1092) */
/* 142 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 146 */	NdrFcShort( 0x3b6 ),	/* Offset= 950 (1096) */
/* 148 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 152 */	NdrFcShort( 0x3b4 ),	/* Offset= 948 (1100) */
/* 154 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 158 */	NdrFcShort( 0x3b2 ),	/* Offset= 946 (1104) */
/* 160 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 164 */	NdrFcShort( 0x3b0 ),	/* Offset= 944 (1108) */
/* 166 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 170 */	NdrFcShort( 0x39a ),	/* Offset= 922 (1092) */
/* 172 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 176 */	NdrFcShort( 0x398 ),	/* Offset= 920 (1096) */
/* 178 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 182 */	NdrFcShort( 0x3a2 ),	/* Offset= 930 (1112) */
/* 184 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 188 */	NdrFcShort( 0x398 ),	/* Offset= 920 (1108) */
/* 190 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 194 */	NdrFcShort( 0x39a ),	/* Offset= 922 (1116) */
/* 196 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 200 */	NdrFcShort( 0x398 ),	/* Offset= 920 (1120) */
/* 202 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 206 */	NdrFcShort( 0x396 ),	/* Offset= 918 (1124) */
/* 208 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 212 */	NdrFcShort( 0x394 ),	/* Offset= 916 (1128) */
/* 214 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 218 */	NdrFcShort( 0x392 ),	/* Offset= 914 (1132) */
/* 220 */	NdrFcLong( 0x10 ),	/* 16 */
/* 224 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 226 */	NdrFcLong( 0x12 ),	/* 18 */
/* 230 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 232 */	NdrFcLong( 0x13 ),	/* 19 */
/* 236 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 238 */	NdrFcLong( 0x15 ),	/* 21 */
/* 242 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 244 */	NdrFcLong( 0x16 ),	/* 22 */
/* 248 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 250 */	NdrFcLong( 0x17 ),	/* 23 */
/* 254 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 256 */	NdrFcLong( 0xe ),	/* 14 */
/* 260 */	NdrFcShort( 0x370 ),	/* Offset= 880 (1140) */
/* 262 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 266 */	NdrFcShort( 0x374 ),	/* Offset= 884 (1150) */
/* 268 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 272 */	NdrFcShort( 0x372 ),	/* Offset= 882 (1154) */
/* 274 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 278 */	NdrFcShort( 0x32e ),	/* Offset= 814 (1092) */
/* 280 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 284 */	NdrFcShort( 0x32c ),	/* Offset= 812 (1096) */
/* 286 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 290 */	NdrFcShort( 0x32a ),	/* Offset= 810 (1100) */
/* 292 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 296 */	NdrFcShort( 0x320 ),	/* Offset= 800 (1096) */
/* 298 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 302 */	NdrFcShort( 0x31a ),	/* Offset= 794 (1096) */
/* 304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0x0 ),	/* Offset= 0 (308) */
/* 310 */	NdrFcLong( 0x1 ),	/* 1 */
/* 314 */	NdrFcShort( 0x0 ),	/* Offset= 0 (314) */
/* 316 */	NdrFcShort( 0xffff ),	/* Offset= -1 (315) */
/* 318 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 320 */	NdrFcShort( 0x8 ),	/* 8 */
/* 322 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 324 */	
			0x12, 0x0,	/* FC_UP */
/* 326 */	NdrFcShort( 0x18 ),	/* Offset= 24 (350) */
/* 328 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 330 */	NdrFcShort( 0x2 ),	/* 2 */
/* 332 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 334 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 336 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 338 */	0x0 , 
			0x0,		/* 0 */
/* 340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 348 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 350 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 352 */	NdrFcShort( 0x8 ),	/* 8 */
/* 354 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (328) */
/* 356 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 358 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 360 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 370 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 372 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 374 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 376 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 378 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 380 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 388 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 390 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 392 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 394 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 396 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 398 */	NdrFcShort( 0x2 ),	/* Offset= 2 (400) */
/* 400 */	
			0x12, 0x0,	/* FC_UP */
/* 402 */	NdrFcShort( 0x298 ),	/* Offset= 664 (1066) */
/* 404 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 406 */	NdrFcShort( 0x18 ),	/* 24 */
/* 408 */	NdrFcShort( 0xa ),	/* 10 */
/* 410 */	NdrFcLong( 0x8 ),	/* 8 */
/* 414 */	NdrFcShort( 0x64 ),	/* Offset= 100 (514) */
/* 416 */	NdrFcLong( 0xd ),	/* 13 */
/* 420 */	NdrFcShort( 0x9c ),	/* Offset= 156 (576) */
/* 422 */	NdrFcLong( 0x9 ),	/* 9 */
/* 426 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (634) */
/* 428 */	NdrFcLong( 0xc ),	/* 12 */
/* 432 */	NdrFcShort( 0x104 ),	/* Offset= 260 (692) */
/* 434 */	NdrFcLong( 0x24 ),	/* 36 */
/* 438 */	NdrFcShort( 0x174 ),	/* Offset= 372 (810) */
/* 440 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 444 */	NdrFcShort( 0x190 ),	/* Offset= 400 (844) */
/* 446 */	NdrFcLong( 0x10 ),	/* 16 */
/* 450 */	NdrFcShort( 0x1b4 ),	/* Offset= 436 (886) */
/* 452 */	NdrFcLong( 0x2 ),	/* 2 */
/* 456 */	NdrFcShort( 0x1d8 ),	/* Offset= 472 (928) */
/* 458 */	NdrFcLong( 0x3 ),	/* 3 */
/* 462 */	NdrFcShort( 0x1fc ),	/* Offset= 508 (970) */
/* 464 */	NdrFcLong( 0x14 ),	/* 20 */
/* 468 */	NdrFcShort( 0x220 ),	/* Offset= 544 (1012) */
/* 470 */	NdrFcShort( 0xffff ),	/* Offset= -1 (469) */
/* 472 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 474 */	NdrFcShort( 0x4 ),	/* 4 */
/* 476 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 482 */	0x0 , 
			0x0,		/* 0 */
/* 484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 492 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 494 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 496 */	NdrFcShort( 0x4 ),	/* 4 */
/* 498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 500 */	NdrFcShort( 0x1 ),	/* 1 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 506 */	0x12, 0x0,	/* FC_UP */
/* 508 */	NdrFcShort( 0xff62 ),	/* Offset= -158 (350) */
/* 510 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 512 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 514 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 516 */	NdrFcShort( 0x8 ),	/* 8 */
/* 518 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 520 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 522 */	NdrFcShort( 0x4 ),	/* 4 */
/* 524 */	NdrFcShort( 0x4 ),	/* 4 */
/* 526 */	0x11, 0x0,	/* FC_RP */
/* 528 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (472) */
/* 530 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 532 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 534 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 538 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 542 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 544 */	0x0 , 
			0x0,		/* 0 */
/* 546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 554 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 558 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 560 */	0x0 , 
			0x0,		/* 0 */
/* 562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 570 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 572 */	NdrFcShort( 0xff2c ),	/* Offset= -212 (360) */
/* 574 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 576 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 578 */	NdrFcShort( 0x8 ),	/* 8 */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x6 ),	/* Offset= 6 (588) */
/* 584 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 586 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 588 */	
			0x11, 0x0,	/* FC_RP */
/* 590 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (534) */
/* 592 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 596 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 602 */	0x0 , 
			0x0,		/* 0 */
/* 604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 612 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 616 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 618 */	0x0 , 
			0x0,		/* 0 */
/* 620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 624 */	NdrFcLong( 0x0 ),	/* 0 */
/* 628 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 630 */	NdrFcShort( 0xff04 ),	/* Offset= -252 (378) */
/* 632 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 634 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 636 */	NdrFcShort( 0x8 ),	/* 8 */
/* 638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 640 */	NdrFcShort( 0x6 ),	/* Offset= 6 (646) */
/* 642 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 644 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 646 */	
			0x11, 0x0,	/* FC_RP */
/* 648 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (592) */
/* 650 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 652 */	NdrFcShort( 0x4 ),	/* 4 */
/* 654 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 658 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 660 */	0x0 , 
			0x0,		/* 0 */
/* 662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 670 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 672 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 674 */	NdrFcShort( 0x4 ),	/* 4 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 678 */	NdrFcShort( 0x1 ),	/* 1 */
/* 680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 684 */	0x12, 0x0,	/* FC_UP */
/* 686 */	NdrFcShort( 0x1d8 ),	/* Offset= 472 (1158) */
/* 688 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 690 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 692 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 694 */	NdrFcShort( 0x8 ),	/* 8 */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	NdrFcShort( 0x6 ),	/* Offset= 6 (704) */
/* 700 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 702 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 704 */	
			0x11, 0x0,	/* FC_RP */
/* 706 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (650) */
/* 708 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 710 */	NdrFcLong( 0x2f ),	/* 47 */
/* 714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 718 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 720 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 722 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 724 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 726 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 728 */	NdrFcShort( 0x1 ),	/* 1 */
/* 730 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 732 */	NdrFcShort( 0x4 ),	/* 4 */
/* 734 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 736 */	0x0 , 
			0x0,		/* 0 */
/* 738 */	NdrFcLong( 0x0 ),	/* 0 */
/* 742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 746 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 748 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 750 */	NdrFcShort( 0x10 ),	/* 16 */
/* 752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 754 */	NdrFcShort( 0xa ),	/* Offset= 10 (764) */
/* 756 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 758 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 760 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (708) */
/* 762 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 764 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 766 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (726) */
/* 768 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 770 */	NdrFcShort( 0x4 ),	/* 4 */
/* 772 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 776 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 778 */	0x0 , 
			0x0,		/* 0 */
/* 780 */	NdrFcLong( 0x0 ),	/* 0 */
/* 784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 788 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 790 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 792 */	NdrFcShort( 0x4 ),	/* 4 */
/* 794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 796 */	NdrFcShort( 0x1 ),	/* 1 */
/* 798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	0x12, 0x0,	/* FC_UP */
/* 804 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (748) */
/* 806 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 808 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 810 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 812 */	NdrFcShort( 0x8 ),	/* 8 */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 816 */	NdrFcShort( 0x6 ),	/* Offset= 6 (822) */
/* 818 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 820 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 822 */	
			0x11, 0x0,	/* FC_RP */
/* 824 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (768) */
/* 826 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 830 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 832 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 834 */	NdrFcShort( 0x10 ),	/* 16 */
/* 836 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 838 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 840 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (826) */
			0x5b,		/* FC_END */
/* 844 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 846 */	NdrFcShort( 0x18 ),	/* 24 */
/* 848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 850 */	NdrFcShort( 0xa ),	/* Offset= 10 (860) */
/* 852 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 854 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 856 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (832) */
/* 858 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 860 */	
			0x11, 0x0,	/* FC_RP */
/* 862 */	NdrFcShort( 0xfeb8 ),	/* Offset= -328 (534) */
/* 864 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 866 */	NdrFcShort( 0x1 ),	/* 1 */
/* 868 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 872 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 874 */	0x0 , 
			0x0,		/* 0 */
/* 876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 880 */	NdrFcLong( 0x0 ),	/* 0 */
/* 884 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 886 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 888 */	NdrFcShort( 0x8 ),	/* 8 */
/* 890 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 892 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 894 */	NdrFcShort( 0x4 ),	/* 4 */
/* 896 */	NdrFcShort( 0x4 ),	/* 4 */
/* 898 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 900 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (864) */
/* 902 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 904 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 906 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 908 */	NdrFcShort( 0x2 ),	/* 2 */
/* 910 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 914 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 916 */	0x0 , 
			0x0,		/* 0 */
/* 918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 926 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 928 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 930 */	NdrFcShort( 0x8 ),	/* 8 */
/* 932 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 934 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 936 */	NdrFcShort( 0x4 ),	/* 4 */
/* 938 */	NdrFcShort( 0x4 ),	/* 4 */
/* 940 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 942 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (906) */
/* 944 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 946 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 948 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 950 */	NdrFcShort( 0x4 ),	/* 4 */
/* 952 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 956 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 958 */	0x0 , 
			0x0,		/* 0 */
/* 960 */	NdrFcLong( 0x0 ),	/* 0 */
/* 964 */	NdrFcLong( 0x0 ),	/* 0 */
/* 968 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 970 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 972 */	NdrFcShort( 0x8 ),	/* 8 */
/* 974 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 976 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 978 */	NdrFcShort( 0x4 ),	/* 4 */
/* 980 */	NdrFcShort( 0x4 ),	/* 4 */
/* 982 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 984 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (948) */
/* 986 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 988 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 990 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 992 */	NdrFcShort( 0x8 ),	/* 8 */
/* 994 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 998 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1000 */	0x0 , 
			0x0,		/* 0 */
/* 1002 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1010 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1012 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1014 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1016 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1018 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1020 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1022 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1024 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1026 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (990) */
/* 1028 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1030 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1032 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1034 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1036 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1038 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1040 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1042 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1044 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1046 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 1048 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1050 */	0x0 , 
			0x0,		/* 0 */
/* 1052 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1060 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1062 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1032) */
/* 1064 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1066 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1068 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1070 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1040) */
/* 1072 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1072) */
/* 1074 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1076 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1078 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1080 */	NdrFcShort( 0xfd5c ),	/* Offset= -676 (404) */
/* 1082 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1084 */	
			0x12, 0x0,	/* FC_UP */
/* 1086 */	NdrFcShort( 0xfeae ),	/* Offset= -338 (748) */
/* 1088 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1090 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1092 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1094 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1096 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1098 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1100 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1102 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1104 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1106 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1108 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1110 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1112 */	
			0x12, 0x0,	/* FC_UP */
/* 1114 */	NdrFcShort( 0xfce4 ),	/* Offset= -796 (318) */
/* 1116 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1118 */	NdrFcShort( 0xfce6 ),	/* Offset= -794 (324) */
/* 1120 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1122 */	NdrFcShort( 0xfd06 ),	/* Offset= -762 (360) */
/* 1124 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1126 */	NdrFcShort( 0xfd14 ),	/* Offset= -748 (378) */
/* 1128 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1130 */	NdrFcShort( 0xfd22 ),	/* Offset= -734 (396) */
/* 1132 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1134 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1136) */
/* 1136 */	
			0x12, 0x0,	/* FC_UP */
/* 1138 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1158) */
/* 1140 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1142 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1144 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1146 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1148 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1150 */	
			0x12, 0x0,	/* FC_UP */
/* 1152 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1140) */
/* 1154 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1156 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1158 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1160 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1164 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1164) */
/* 1166 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1168 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1170 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1172 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1174 */	NdrFcShort( 0xfb74 ),	/* Offset= -1164 (10) */
/* 1176 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1178 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1182 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1186 */	NdrFcShort( 0xfb64 ),	/* Offset= -1180 (6) */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IISimAddObj, ver. 0.0,
   GUID={0x9C3D29CF,0x6F29,0x4D8D,{0xA3,0xE5,0x8F,0x45,0x35,0x7B,0x54,0x72}} */

#pragma code_seg(".orpc")
static const unsigned short IISimAddObj_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    48,
    78
    };

static const MIDL_STUBLESS_PROXY_INFO IISimAddObj_ProxyInfo =
    {
    &Object_StubDesc,
    ComAddDemo__MIDL_ProcFormatString.Format,
    &IISimAddObj_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IISimAddObj_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ComAddDemo__MIDL_ProcFormatString.Format,
    &IISimAddObj_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IISimAddObjProxyVtbl = 
{
    &IISimAddObj_ProxyInfo,
    &IID_IISimAddObj,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IISimAddObj::Add */ ,
    (void *) (INT_PTR) -1 /* IISimAddObj::Test */ ,
    (void *) (INT_PTR) -1 /* IISimAddObj::TestVar */
};


static const PRPC_STUB_FUNCTION IISimAddObj_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IISimAddObjStubVtbl =
{
    &IID_IISimAddObj,
    &IISimAddObj_ServerInfo,
    10,
    &IISimAddObj_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    ComAddDemo__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _ComAddDemo_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IISimAddObjProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _ComAddDemo_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IISimAddObjStubVtbl,
    0
};

PCInterfaceName const _ComAddDemo_InterfaceNamesList[] = 
{
    "IISimAddObj",
    0
};

const IID *  const _ComAddDemo_BaseIIDList[] = 
{
    &IID_IDispatch,
    0
};


#define _ComAddDemo_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _ComAddDemo, pIID, n)

int __stdcall _ComAddDemo_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_ComAddDemo_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo ComAddDemo_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _ComAddDemo_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _ComAddDemo_StubVtblList,
    (const PCInterfaceName * ) & _ComAddDemo_InterfaceNamesList,
    (const IID ** ) & _ComAddDemo_BaseIIDList,
    & _ComAddDemo_IID_Lookup, 
    1,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

