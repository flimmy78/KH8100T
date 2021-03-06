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
// Generated from file `ykdata.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

package com.gridnt.icestorm.Yk;

public enum YkType implements java.io.Serializable
{
    
    SelectBeforeOperate(0),
    
    DirectlyOperate(1);

    public int
    value()
    {
        return __value;
    }

    public static YkType
    valueOf(int __v)
    {
        switch(__v)
        {
        case 0:
            return SelectBeforeOperate;
        case 1:
            return DirectlyOperate;
        }
        return null;
    }

    private
    YkType(int __v)
    {
        __value = __v;
    }

    public void
    __write(IceInternal.BasicStream __os)
    {
        __os.writeEnum(value(), 1);
    }

    public static void
    __write(IceInternal.BasicStream __os, YkType __v)
    {
        if(__v == null)
        {
            __os.writeEnum(com.gridnt.icestorm.Yk.YkType.SelectBeforeOperate.value(), 1);
        }
        else
        {
            __os.writeEnum(__v.value(), 1);
        }
    }

    public static YkType
    __read(IceInternal.BasicStream __is)
    {
        int __v = __is.readEnum(1);
        return __validate(__v);
    }

    private static YkType
    __validate(int __v)
    {
        final YkType __e = valueOf(__v);
        if(__e == null)
        {
            throw new Ice.MarshalException("enumerator value " + __v + " is out of range");
        }
        return __e;
    }

    private final int __value;
}
