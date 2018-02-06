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
// Generated from file `wavefepapp.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

package com.kh.scada.wavefepapp;

public enum RfwOperateType implements java.io.Serializable
{
    
    DUGRFWDIR(0),
    
    DUGRFWFIL(1),
    
    MANURFW(2);

    public int
    value()
    {
        return __value;
    }

    public static RfwOperateType
    valueOf(int __v)
    {
        switch(__v)
        {
        case 0:
            return DUGRFWDIR;
        case 1:
            return DUGRFWFIL;
        case 2:
            return MANURFW;
        }
        return null;
    }

    private
    RfwOperateType(int __v)
    {
        __value = __v;
    }

    public void
    __write(IceInternal.BasicStream __os)
    {
        __os.writeEnum(value(), 2);
    }

    public static void
    __write(IceInternal.BasicStream __os, RfwOperateType __v)
    {
        if(__v == null)
        {
            __os.writeEnum(com.kh.scada.wavefepapp.RfwOperateType.DUGRFWDIR.value(), 2);
        }
        else
        {
            __os.writeEnum(__v.value(), 2);
        }
    }

    public static RfwOperateType
    __read(IceInternal.BasicStream __is)
    {
        int __v = __is.readEnum(2);
        return __validate(__v);
    }

    private static RfwOperateType
    __validate(int __v)
    {
        final RfwOperateType __e = valueOf(__v);
        if(__e == null)
        {
            throw new Ice.MarshalException("enumerator value " + __v + " is out of range");
        }
        return __e;
    }

    private final int __value;
}