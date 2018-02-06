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
// Generated from file `rdbdata.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

package com.gridnt.icestorm.RdbRealData;

/**
 * Provides type-specific helper functions.
 **/
public final class RdbRealDataRespondPrxHelper extends Ice.ObjectPrxHelperBase implements RdbRealDataRespondPrx
{
    private static final String __RespondCompleteData_name = "RespondCompleteData";

    public void RespondCompleteData(RespondCompleteDataSeq seq)
    {
        RespondCompleteData(seq, null, false);
    }

    public void RespondCompleteData(RespondCompleteDataSeq seq, java.util.Map<String, String> __ctx)
    {
        RespondCompleteData(seq, __ctx, true);
    }

    private void RespondCompleteData(RespondCompleteDataSeq seq, java.util.Map<String, String> __ctx, boolean __explicitCtx)
    {
        end_RespondCompleteData(begin_RespondCompleteData(seq, __ctx, __explicitCtx, true, null));
    }

    public Ice.AsyncResult begin_RespondCompleteData(RespondCompleteDataSeq seq)
    {
        return begin_RespondCompleteData(seq, null, false, false, null);
    }

    public Ice.AsyncResult begin_RespondCompleteData(RespondCompleteDataSeq seq, java.util.Map<String, String> __ctx)
    {
        return begin_RespondCompleteData(seq, __ctx, true, false, null);
    }

    public Ice.AsyncResult begin_RespondCompleteData(RespondCompleteDataSeq seq, Ice.Callback __cb)
    {
        return begin_RespondCompleteData(seq, null, false, false, __cb);
    }

    public Ice.AsyncResult begin_RespondCompleteData(RespondCompleteDataSeq seq, java.util.Map<String, String> __ctx, Ice.Callback __cb)
    {
        return begin_RespondCompleteData(seq, __ctx, true, false, __cb);
    }

    public Ice.AsyncResult begin_RespondCompleteData(RespondCompleteDataSeq seq, Callback_RdbRealDataRespond_RespondCompleteData __cb)
    {
        return begin_RespondCompleteData(seq, null, false, false, __cb);
    }

    public Ice.AsyncResult begin_RespondCompleteData(RespondCompleteDataSeq seq, java.util.Map<String, String> __ctx, Callback_RdbRealDataRespond_RespondCompleteData __cb)
    {
        return begin_RespondCompleteData(seq, __ctx, true, false, __cb);
    }

    public Ice.AsyncResult begin_RespondCompleteData(RespondCompleteDataSeq seq, 
                                                     IceInternal.Functional_VoidCallback __responseCb, 
                                                     IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb)
    {
        return begin_RespondCompleteData(seq, null, false, false, __responseCb, __exceptionCb, null);
    }

    public Ice.AsyncResult begin_RespondCompleteData(RespondCompleteDataSeq seq, 
                                                     IceInternal.Functional_VoidCallback __responseCb, 
                                                     IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb, 
                                                     IceInternal.Functional_BoolCallback __sentCb)
    {
        return begin_RespondCompleteData(seq, null, false, false, __responseCb, __exceptionCb, __sentCb);
    }

    public Ice.AsyncResult begin_RespondCompleteData(RespondCompleteDataSeq seq, 
                                                     java.util.Map<String, String> __ctx, 
                                                     IceInternal.Functional_VoidCallback __responseCb, 
                                                     IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb)
    {
        return begin_RespondCompleteData(seq, __ctx, true, false, __responseCb, __exceptionCb, null);
    }

    public Ice.AsyncResult begin_RespondCompleteData(RespondCompleteDataSeq seq, 
                                                     java.util.Map<String, String> __ctx, 
                                                     IceInternal.Functional_VoidCallback __responseCb, 
                                                     IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb, 
                                                     IceInternal.Functional_BoolCallback __sentCb)
    {
        return begin_RespondCompleteData(seq, __ctx, true, false, __responseCb, __exceptionCb, __sentCb);
    }

    private Ice.AsyncResult begin_RespondCompleteData(RespondCompleteDataSeq seq, 
                                                      java.util.Map<String, String> __ctx, 
                                                      boolean __explicitCtx, 
                                                      boolean __synchronous, 
                                                      IceInternal.Functional_VoidCallback __responseCb, 
                                                      IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb, 
                                                      IceInternal.Functional_BoolCallback __sentCb)
    {
        return begin_RespondCompleteData(seq, 
                                         __ctx, 
                                         __explicitCtx, 
                                         __synchronous, 
                                         new IceInternal.Functional_OnewayCallback(__responseCb, __exceptionCb, __sentCb));
    }

    private Ice.AsyncResult begin_RespondCompleteData(RespondCompleteDataSeq seq, 
                                                      java.util.Map<String, String> __ctx, 
                                                      boolean __explicitCtx, 
                                                      boolean __synchronous, 
                                                      IceInternal.CallbackBase __cb)
    {
        IceInternal.OutgoingAsync __result = getOutgoingAsync(__RespondCompleteData_name, __cb);
        try
        {
            __result.prepare(__RespondCompleteData_name, Ice.OperationMode.Normal, __ctx, __explicitCtx, __synchronous);
            IceInternal.BasicStream __os = __result.startWriteParams(Ice.FormatType.DefaultFormat);
            RespondCompleteDataSeq.__write(__os, seq);
            __result.endWriteParams();
            __result.invoke();
        }
        catch(Ice.Exception __ex)
        {
            __result.abort(__ex);
        }
        return __result;
    }

    public void end_RespondCompleteData(Ice.AsyncResult __iresult)
    {
        __end(__iresult, __RespondCompleteData_name);
    }

    private static final String __RespondDefaultData_name = "RespondDefaultData";

    public void RespondDefaultData(RespondDefaultDataSeq seq)
    {
        RespondDefaultData(seq, null, false);
    }

    public void RespondDefaultData(RespondDefaultDataSeq seq, java.util.Map<String, String> __ctx)
    {
        RespondDefaultData(seq, __ctx, true);
    }

    private void RespondDefaultData(RespondDefaultDataSeq seq, java.util.Map<String, String> __ctx, boolean __explicitCtx)
    {
        end_RespondDefaultData(begin_RespondDefaultData(seq, __ctx, __explicitCtx, true, null));
    }

    public Ice.AsyncResult begin_RespondDefaultData(RespondDefaultDataSeq seq)
    {
        return begin_RespondDefaultData(seq, null, false, false, null);
    }

    public Ice.AsyncResult begin_RespondDefaultData(RespondDefaultDataSeq seq, java.util.Map<String, String> __ctx)
    {
        return begin_RespondDefaultData(seq, __ctx, true, false, null);
    }

    public Ice.AsyncResult begin_RespondDefaultData(RespondDefaultDataSeq seq, Ice.Callback __cb)
    {
        return begin_RespondDefaultData(seq, null, false, false, __cb);
    }

    public Ice.AsyncResult begin_RespondDefaultData(RespondDefaultDataSeq seq, java.util.Map<String, String> __ctx, Ice.Callback __cb)
    {
        return begin_RespondDefaultData(seq, __ctx, true, false, __cb);
    }

    public Ice.AsyncResult begin_RespondDefaultData(RespondDefaultDataSeq seq, Callback_RdbRealDataRespond_RespondDefaultData __cb)
    {
        return begin_RespondDefaultData(seq, null, false, false, __cb);
    }

    public Ice.AsyncResult begin_RespondDefaultData(RespondDefaultDataSeq seq, java.util.Map<String, String> __ctx, Callback_RdbRealDataRespond_RespondDefaultData __cb)
    {
        return begin_RespondDefaultData(seq, __ctx, true, false, __cb);
    }

    public Ice.AsyncResult begin_RespondDefaultData(RespondDefaultDataSeq seq, 
                                                    IceInternal.Functional_VoidCallback __responseCb, 
                                                    IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb)
    {
        return begin_RespondDefaultData(seq, null, false, false, __responseCb, __exceptionCb, null);
    }

    public Ice.AsyncResult begin_RespondDefaultData(RespondDefaultDataSeq seq, 
                                                    IceInternal.Functional_VoidCallback __responseCb, 
                                                    IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb, 
                                                    IceInternal.Functional_BoolCallback __sentCb)
    {
        return begin_RespondDefaultData(seq, null, false, false, __responseCb, __exceptionCb, __sentCb);
    }

    public Ice.AsyncResult begin_RespondDefaultData(RespondDefaultDataSeq seq, 
                                                    java.util.Map<String, String> __ctx, 
                                                    IceInternal.Functional_VoidCallback __responseCb, 
                                                    IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb)
    {
        return begin_RespondDefaultData(seq, __ctx, true, false, __responseCb, __exceptionCb, null);
    }

    public Ice.AsyncResult begin_RespondDefaultData(RespondDefaultDataSeq seq, 
                                                    java.util.Map<String, String> __ctx, 
                                                    IceInternal.Functional_VoidCallback __responseCb, 
                                                    IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb, 
                                                    IceInternal.Functional_BoolCallback __sentCb)
    {
        return begin_RespondDefaultData(seq, __ctx, true, false, __responseCb, __exceptionCb, __sentCb);
    }

    private Ice.AsyncResult begin_RespondDefaultData(RespondDefaultDataSeq seq, 
                                                     java.util.Map<String, String> __ctx, 
                                                     boolean __explicitCtx, 
                                                     boolean __synchronous, 
                                                     IceInternal.Functional_VoidCallback __responseCb, 
                                                     IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb, 
                                                     IceInternal.Functional_BoolCallback __sentCb)
    {
        return begin_RespondDefaultData(seq, 
                                        __ctx, 
                                        __explicitCtx, 
                                        __synchronous, 
                                        new IceInternal.Functional_OnewayCallback(__responseCb, __exceptionCb, __sentCb));
    }

    private Ice.AsyncResult begin_RespondDefaultData(RespondDefaultDataSeq seq, 
                                                     java.util.Map<String, String> __ctx, 
                                                     boolean __explicitCtx, 
                                                     boolean __synchronous, 
                                                     IceInternal.CallbackBase __cb)
    {
        IceInternal.OutgoingAsync __result = getOutgoingAsync(__RespondDefaultData_name, __cb);
        try
        {
            __result.prepare(__RespondDefaultData_name, Ice.OperationMode.Normal, __ctx, __explicitCtx, __synchronous);
            IceInternal.BasicStream __os = __result.startWriteParams(Ice.FormatType.DefaultFormat);
            RespondDefaultDataSeq.__write(__os, seq);
            __result.endWriteParams();
            __result.invoke();
        }
        catch(Ice.Exception __ex)
        {
            __result.abort(__ex);
        }
        return __result;
    }

    public void end_RespondDefaultData(Ice.AsyncResult __iresult)
    {
        __end(__iresult, __RespondDefaultData_name);
    }

    private static final String __RespondSpecificData_name = "RespondSpecificData";

    public void RespondSpecificData(RespondSpecficDataSeq seq)
    {
        RespondSpecificData(seq, null, false);
    }

    public void RespondSpecificData(RespondSpecficDataSeq seq, java.util.Map<String, String> __ctx)
    {
        RespondSpecificData(seq, __ctx, true);
    }

    private void RespondSpecificData(RespondSpecficDataSeq seq, java.util.Map<String, String> __ctx, boolean __explicitCtx)
    {
        end_RespondSpecificData(begin_RespondSpecificData(seq, __ctx, __explicitCtx, true, null));
    }

    public Ice.AsyncResult begin_RespondSpecificData(RespondSpecficDataSeq seq)
    {
        return begin_RespondSpecificData(seq, null, false, false, null);
    }

    public Ice.AsyncResult begin_RespondSpecificData(RespondSpecficDataSeq seq, java.util.Map<String, String> __ctx)
    {
        return begin_RespondSpecificData(seq, __ctx, true, false, null);
    }

    public Ice.AsyncResult begin_RespondSpecificData(RespondSpecficDataSeq seq, Ice.Callback __cb)
    {
        return begin_RespondSpecificData(seq, null, false, false, __cb);
    }

    public Ice.AsyncResult begin_RespondSpecificData(RespondSpecficDataSeq seq, java.util.Map<String, String> __ctx, Ice.Callback __cb)
    {
        return begin_RespondSpecificData(seq, __ctx, true, false, __cb);
    }

    public Ice.AsyncResult begin_RespondSpecificData(RespondSpecficDataSeq seq, Callback_RdbRealDataRespond_RespondSpecificData __cb)
    {
        return begin_RespondSpecificData(seq, null, false, false, __cb);
    }

    public Ice.AsyncResult begin_RespondSpecificData(RespondSpecficDataSeq seq, java.util.Map<String, String> __ctx, Callback_RdbRealDataRespond_RespondSpecificData __cb)
    {
        return begin_RespondSpecificData(seq, __ctx, true, false, __cb);
    }

    public Ice.AsyncResult begin_RespondSpecificData(RespondSpecficDataSeq seq, 
                                                     IceInternal.Functional_VoidCallback __responseCb, 
                                                     IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb)
    {
        return begin_RespondSpecificData(seq, null, false, false, __responseCb, __exceptionCb, null);
    }

    public Ice.AsyncResult begin_RespondSpecificData(RespondSpecficDataSeq seq, 
                                                     IceInternal.Functional_VoidCallback __responseCb, 
                                                     IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb, 
                                                     IceInternal.Functional_BoolCallback __sentCb)
    {
        return begin_RespondSpecificData(seq, null, false, false, __responseCb, __exceptionCb, __sentCb);
    }

    public Ice.AsyncResult begin_RespondSpecificData(RespondSpecficDataSeq seq, 
                                                     java.util.Map<String, String> __ctx, 
                                                     IceInternal.Functional_VoidCallback __responseCb, 
                                                     IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb)
    {
        return begin_RespondSpecificData(seq, __ctx, true, false, __responseCb, __exceptionCb, null);
    }

    public Ice.AsyncResult begin_RespondSpecificData(RespondSpecficDataSeq seq, 
                                                     java.util.Map<String, String> __ctx, 
                                                     IceInternal.Functional_VoidCallback __responseCb, 
                                                     IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb, 
                                                     IceInternal.Functional_BoolCallback __sentCb)
    {
        return begin_RespondSpecificData(seq, __ctx, true, false, __responseCb, __exceptionCb, __sentCb);
    }

    private Ice.AsyncResult begin_RespondSpecificData(RespondSpecficDataSeq seq, 
                                                      java.util.Map<String, String> __ctx, 
                                                      boolean __explicitCtx, 
                                                      boolean __synchronous, 
                                                      IceInternal.Functional_VoidCallback __responseCb, 
                                                      IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb, 
                                                      IceInternal.Functional_BoolCallback __sentCb)
    {
        return begin_RespondSpecificData(seq, 
                                         __ctx, 
                                         __explicitCtx, 
                                         __synchronous, 
                                         new IceInternal.Functional_OnewayCallback(__responseCb, __exceptionCb, __sentCb));
    }

    private Ice.AsyncResult begin_RespondSpecificData(RespondSpecficDataSeq seq, 
                                                      java.util.Map<String, String> __ctx, 
                                                      boolean __explicitCtx, 
                                                      boolean __synchronous, 
                                                      IceInternal.CallbackBase __cb)
    {
        IceInternal.OutgoingAsync __result = getOutgoingAsync(__RespondSpecificData_name, __cb);
        try
        {
            __result.prepare(__RespondSpecificData_name, Ice.OperationMode.Normal, __ctx, __explicitCtx, __synchronous);
            IceInternal.BasicStream __os = __result.startWriteParams(Ice.FormatType.DefaultFormat);
            RespondSpecficDataSeq.__write(__os, seq);
            __result.endWriteParams();
            __result.invoke();
        }
        catch(Ice.Exception __ex)
        {
            __result.abort(__ex);
        }
        return __result;
    }

    public void end_RespondSpecificData(Ice.AsyncResult __iresult)
    {
        __end(__iresult, __RespondSpecificData_name);
    }

    private static final String __SendTopoDataRespond_name = "SendTopoDataRespond";

    public void SendTopoDataRespond(ReceiveTopoDataSeq seq)
    {
        SendTopoDataRespond(seq, null, false);
    }

    public void SendTopoDataRespond(ReceiveTopoDataSeq seq, java.util.Map<String, String> __ctx)
    {
        SendTopoDataRespond(seq, __ctx, true);
    }

    private void SendTopoDataRespond(ReceiveTopoDataSeq seq, java.util.Map<String, String> __ctx, boolean __explicitCtx)
    {
        end_SendTopoDataRespond(begin_SendTopoDataRespond(seq, __ctx, __explicitCtx, true, null));
    }

    public Ice.AsyncResult begin_SendTopoDataRespond(ReceiveTopoDataSeq seq)
    {
        return begin_SendTopoDataRespond(seq, null, false, false, null);
    }

    public Ice.AsyncResult begin_SendTopoDataRespond(ReceiveTopoDataSeq seq, java.util.Map<String, String> __ctx)
    {
        return begin_SendTopoDataRespond(seq, __ctx, true, false, null);
    }

    public Ice.AsyncResult begin_SendTopoDataRespond(ReceiveTopoDataSeq seq, Ice.Callback __cb)
    {
        return begin_SendTopoDataRespond(seq, null, false, false, __cb);
    }

    public Ice.AsyncResult begin_SendTopoDataRespond(ReceiveTopoDataSeq seq, java.util.Map<String, String> __ctx, Ice.Callback __cb)
    {
        return begin_SendTopoDataRespond(seq, __ctx, true, false, __cb);
    }

    public Ice.AsyncResult begin_SendTopoDataRespond(ReceiveTopoDataSeq seq, Callback_RdbRealDataRespond_SendTopoDataRespond __cb)
    {
        return begin_SendTopoDataRespond(seq, null, false, false, __cb);
    }

    public Ice.AsyncResult begin_SendTopoDataRespond(ReceiveTopoDataSeq seq, java.util.Map<String, String> __ctx, Callback_RdbRealDataRespond_SendTopoDataRespond __cb)
    {
        return begin_SendTopoDataRespond(seq, __ctx, true, false, __cb);
    }

    public Ice.AsyncResult begin_SendTopoDataRespond(ReceiveTopoDataSeq seq, 
                                                     IceInternal.Functional_VoidCallback __responseCb, 
                                                     IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb)
    {
        return begin_SendTopoDataRespond(seq, null, false, false, __responseCb, __exceptionCb, null);
    }

    public Ice.AsyncResult begin_SendTopoDataRespond(ReceiveTopoDataSeq seq, 
                                                     IceInternal.Functional_VoidCallback __responseCb, 
                                                     IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb, 
                                                     IceInternal.Functional_BoolCallback __sentCb)
    {
        return begin_SendTopoDataRespond(seq, null, false, false, __responseCb, __exceptionCb, __sentCb);
    }

    public Ice.AsyncResult begin_SendTopoDataRespond(ReceiveTopoDataSeq seq, 
                                                     java.util.Map<String, String> __ctx, 
                                                     IceInternal.Functional_VoidCallback __responseCb, 
                                                     IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb)
    {
        return begin_SendTopoDataRespond(seq, __ctx, true, false, __responseCb, __exceptionCb, null);
    }

    public Ice.AsyncResult begin_SendTopoDataRespond(ReceiveTopoDataSeq seq, 
                                                     java.util.Map<String, String> __ctx, 
                                                     IceInternal.Functional_VoidCallback __responseCb, 
                                                     IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb, 
                                                     IceInternal.Functional_BoolCallback __sentCb)
    {
        return begin_SendTopoDataRespond(seq, __ctx, true, false, __responseCb, __exceptionCb, __sentCb);
    }

    private Ice.AsyncResult begin_SendTopoDataRespond(ReceiveTopoDataSeq seq, 
                                                      java.util.Map<String, String> __ctx, 
                                                      boolean __explicitCtx, 
                                                      boolean __synchronous, 
                                                      IceInternal.Functional_VoidCallback __responseCb, 
                                                      IceInternal.Functional_GenericCallback1<Ice.Exception> __exceptionCb, 
                                                      IceInternal.Functional_BoolCallback __sentCb)
    {
        return begin_SendTopoDataRespond(seq, 
                                         __ctx, 
                                         __explicitCtx, 
                                         __synchronous, 
                                         new IceInternal.Functional_OnewayCallback(__responseCb, __exceptionCb, __sentCb));
    }

    private Ice.AsyncResult begin_SendTopoDataRespond(ReceiveTopoDataSeq seq, 
                                                      java.util.Map<String, String> __ctx, 
                                                      boolean __explicitCtx, 
                                                      boolean __synchronous, 
                                                      IceInternal.CallbackBase __cb)
    {
        IceInternal.OutgoingAsync __result = getOutgoingAsync(__SendTopoDataRespond_name, __cb);
        try
        {
            __result.prepare(__SendTopoDataRespond_name, Ice.OperationMode.Normal, __ctx, __explicitCtx, __synchronous);
            IceInternal.BasicStream __os = __result.startWriteParams(Ice.FormatType.DefaultFormat);
            ReceiveTopoDataSeq.__write(__os, seq);
            __result.endWriteParams();
            __result.invoke();
        }
        catch(Ice.Exception __ex)
        {
            __result.abort(__ex);
        }
        return __result;
    }

    public void end_SendTopoDataRespond(Ice.AsyncResult __iresult)
    {
        __end(__iresult, __SendTopoDataRespond_name);
    }

    /**
     * Contacts the remote server to verify that the object implements this type.
     * Raises a local exception if a communication error occurs.
     * @param __obj The untyped proxy.
     * @return A proxy for this type, or null if the object does not support this type.
     **/
    public static RdbRealDataRespondPrx checkedCast(Ice.ObjectPrx __obj)
    {
        return checkedCastImpl(__obj, ice_staticId(), RdbRealDataRespondPrx.class, RdbRealDataRespondPrxHelper.class);
    }

    /**
     * Contacts the remote server to verify that the object implements this type.
     * Raises a local exception if a communication error occurs.
     * @param __obj The untyped proxy.
     * @param __ctx The Context map to send with the invocation.
     * @return A proxy for this type, or null if the object does not support this type.
     **/
    public static RdbRealDataRespondPrx checkedCast(Ice.ObjectPrx __obj, java.util.Map<String, String> __ctx)
    {
        return checkedCastImpl(__obj, __ctx, ice_staticId(), RdbRealDataRespondPrx.class, RdbRealDataRespondPrxHelper.class);
    }

    /**
     * Contacts the remote server to verify that a facet of the object implements this type.
     * Raises a local exception if a communication error occurs.
     * @param __obj The untyped proxy.
     * @param __facet The name of the desired facet.
     * @return A proxy for this type, or null if the object does not support this type.
     **/
    public static RdbRealDataRespondPrx checkedCast(Ice.ObjectPrx __obj, String __facet)
    {
        return checkedCastImpl(__obj, __facet, ice_staticId(), RdbRealDataRespondPrx.class, RdbRealDataRespondPrxHelper.class);
    }

    /**
     * Contacts the remote server to verify that a facet of the object implements this type.
     * Raises a local exception if a communication error occurs.
     * @param __obj The untyped proxy.
     * @param __facet The name of the desired facet.
     * @param __ctx The Context map to send with the invocation.
     * @return A proxy for this type, or null if the object does not support this type.
     **/
    public static RdbRealDataRespondPrx checkedCast(Ice.ObjectPrx __obj, String __facet, java.util.Map<String, String> __ctx)
    {
        return checkedCastImpl(__obj, __facet, __ctx, ice_staticId(), RdbRealDataRespondPrx.class, RdbRealDataRespondPrxHelper.class);
    }

    /**
     * Downcasts the given proxy to this type without contacting the remote server.
     * @param __obj The untyped proxy.
     * @return A proxy for this type.
     **/
    public static RdbRealDataRespondPrx uncheckedCast(Ice.ObjectPrx __obj)
    {
        return uncheckedCastImpl(__obj, RdbRealDataRespondPrx.class, RdbRealDataRespondPrxHelper.class);
    }

    /**
     * Downcasts the given proxy to this type without contacting the remote server.
     * @param __obj The untyped proxy.
     * @param __facet The name of the desired facet.
     * @return A proxy for this type.
     **/
    public static RdbRealDataRespondPrx uncheckedCast(Ice.ObjectPrx __obj, String __facet)
    {
        return uncheckedCastImpl(__obj, __facet, RdbRealDataRespondPrx.class, RdbRealDataRespondPrxHelper.class);
    }

    public static final String[] __ids =
    {
        "::Ice::Object",
        "::RdbRealData::RdbRealDataRespond"
    };

    /**
     * Provides the Slice type ID of this type.
     * @return The Slice type ID.
     **/
    public static String ice_staticId()
    {
        return __ids[1];
    }

    public static void __write(IceInternal.BasicStream __os, RdbRealDataRespondPrx v)
    {
        __os.writeProxy(v);
    }

    public static RdbRealDataRespondPrx __read(IceInternal.BasicStream __is)
    {
        Ice.ObjectPrx proxy = __is.readProxy();
        if(proxy != null)
        {
            RdbRealDataRespondPrxHelper result = new RdbRealDataRespondPrxHelper();
            result.__copyFrom(proxy);
            return result;
        }
        return null;
    }

    public static final long serialVersionUID = 0L;
}