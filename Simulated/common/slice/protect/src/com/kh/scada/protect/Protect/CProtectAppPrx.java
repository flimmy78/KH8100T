// **********************************************************************
//
// Copyright (c) 2003-2017 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.6.4
//
// <auto-generated>
//
// Generated from file `protect.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

package com.kh.scada.protect.Protect;

public interface CProtectAppPrx extends Ice.ObjectPrx
{
    public void processProtectSetting(ProtectValueInfo psInfo);

    public void processProtectSetting(ProtectValueInfo psInfo, java.util.Map<String, String> __ctx);

    public Ice.AsyncResult begin_processProtectSetting(ProtectValueInfo psInfo);

    public Ice.AsyncResult begin_processProtectSetting(ProtectValueInfo psInfo, java.util.Map<String, String> __ctx);

    public Ice.AsyncResult begin_processProtectSetting(ProtectValueInfo psInfo, Ice.Callback __cb);

    public Ice.AsyncResult begin_processProtectSetting(ProtectValueInfo psInfo, java.util.Map<String, String> __ctx, Ice.Callback __cb);

    public Ice.AsyncResult begin_processProtectSetting(ProtectValueInfo psInfo, Callback_CProtectApp_processProtectSetting __cb);

    public Ice.AsyncResult begin_processProtectSetting(ProtectValueInfo psInfo, java.util.Map<String, String> __ctx, Callback_CProtectApp_processProtectSetting __cb);

    public Ice.AsyncResult begin_processProtectSetting(ProtectValueInfo psInfo, 
                                                       IceInternal.Functional_VoidCallback __responseCb, 
                                                       IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb);

    public Ice.AsyncResult begin_processProtectSetting(ProtectValueInfo psInfo, 
                                                       IceInternal.Functional_VoidCallback __responseCb, 
                                                       IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb, 
                                                       IceInternal.Functional_BoolCallback __sentCb);

    public Ice.AsyncResult begin_processProtectSetting(ProtectValueInfo psInfo, 
                                                       java.util.Map<String, String> __ctx, 
                                                       IceInternal.Functional_VoidCallback __responseCb, 
                                                       IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb);

    public Ice.AsyncResult begin_processProtectSetting(ProtectValueInfo psInfo, 
                                                       java.util.Map<String, String> __ctx, 
                                                       IceInternal.Functional_VoidCallback __responseCb, 
                                                       IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb, 
                                                       IceInternal.Functional_BoolCallback __sentCb);

    public void end_processProtectSetting(Ice.AsyncResult __result);
}
