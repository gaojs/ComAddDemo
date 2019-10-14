

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ComAddDemo_i_h__
#define __ComAddDemo_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IISimAddObj_FWD_DEFINED__
#define __IISimAddObj_FWD_DEFINED__
typedef interface IISimAddObj IISimAddObj;

#endif 	/* __IISimAddObj_FWD_DEFINED__ */


#ifndef __ISimAddObj_FWD_DEFINED__
#define __ISimAddObj_FWD_DEFINED__

#ifdef __cplusplus
typedef class ISimAddObj ISimAddObj;
#else
typedef struct ISimAddObj ISimAddObj;
#endif /* __cplusplus */

#endif 	/* __ISimAddObj_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IISimAddObj_INTERFACE_DEFINED__
#define __IISimAddObj_INTERFACE_DEFINED__

/* interface IISimAddObj */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IISimAddObj;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9C3D29CF-6F29-4D8D-A3E5-8F45357B5472")
    IISimAddObj : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ LONG num1,
            LONG num2,
            /* [retval][out] */ LONG *sum) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Test( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE TestVar( 
            /* [in] */ VARIANT va) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IISimAddObjVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IISimAddObj * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IISimAddObj * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IISimAddObj * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IISimAddObj * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IISimAddObj * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IISimAddObj * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IISimAddObj * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IISimAddObj * This,
            /* [in] */ LONG num1,
            LONG num2,
            /* [retval][out] */ LONG *sum);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Test )( 
            IISimAddObj * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *TestVar )( 
            IISimAddObj * This,
            /* [in] */ VARIANT va);
        
        END_INTERFACE
    } IISimAddObjVtbl;

    interface IISimAddObj
    {
        CONST_VTBL struct IISimAddObjVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IISimAddObj_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IISimAddObj_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IISimAddObj_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IISimAddObj_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IISimAddObj_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IISimAddObj_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IISimAddObj_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IISimAddObj_Add(This,num1,num2,sum)	\
    ( (This)->lpVtbl -> Add(This,num1,num2,sum) ) 

#define IISimAddObj_Test(This)	\
    ( (This)->lpVtbl -> Test(This) ) 

#define IISimAddObj_TestVar(This,va)	\
    ( (This)->lpVtbl -> TestVar(This,va) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IISimAddObj_INTERFACE_DEFINED__ */



#ifndef __ComAddDemoLib_LIBRARY_DEFINED__
#define __ComAddDemoLib_LIBRARY_DEFINED__

/* library ComAddDemoLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_ComAddDemoLib;

EXTERN_C const CLSID CLSID_ISimAddObj;

#ifdef __cplusplus

class DECLSPEC_UUID("10FBE3A8-ECAF-49FD-A6CC-90BBE66F9EFA")
ISimAddObj;
#endif
#endif /* __ComAddDemoLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

unsigned long             __RPC_USER  VARIANT_UserSize64(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal64(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree64(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


