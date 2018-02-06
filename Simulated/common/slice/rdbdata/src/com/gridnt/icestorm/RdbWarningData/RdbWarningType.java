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

package com.gridnt.icestorm.RdbWarningData;

public enum RdbWarningType implements java.io.Serializable
{
    
    LimitEvent(0),
    
    SoeEvent(1),
    
    YxEvent(2),
    
    UnitEvent(3),
    
    SysEvent(4),
    
    OperEvent(5),
    
    RelayEvent(6),
    
    FaultEvent(7),
    
    FaEvent(8),
    
    WaveEvent(9),
    
    GraphEvent(10),
    
    RfwEvent(11),
    
    AllEvent(12);

    public int
    value()
    {
        return __value;
    }

    public static RdbWarningType
    valueOf(int __v)
    {
        switch(__v)
        {
        case 0:
            return LimitEvent;
        case 1:
            return SoeEvent;
        case 2:
            return YxEvent;
        case 3:
            return UnitEvent;
        case 4:
            return SysEvent;
        case 5:
            return OperEvent;
        case 6:
            return RelayEvent;
        case 7:
            return FaultEvent;
        case 8:
            return FaEvent;
        case 9:
            return WaveEvent;
        case 10:
            return GraphEvent;
        case 11:
            return RfwEvent;
        case 12:
            return AllEvent;
        }
        return null;
    }

    private
    RdbWarningType(int __v)
    {
        __value = __v;
    }

    public void
    __write(IceInternal.BasicStream __os)
    {
        __os.writeEnum(value(), 12);
    }

    public static void
    __write(IceInternal.BasicStream __os, RdbWarningType __v)
    {
        if(__v == null)
        {
            __os.writeEnum(com.gridnt.icestorm.RdbWarningData.RdbWarningType.LimitEvent.value(), 12);
        }
        else
        {
            __os.writeEnum(__v.value(), 12);
        }
    }

    public static RdbWarningType
    __read(IceInternal.BasicStream __is)
    {
        int __v = __is.readEnum(12);
        return __validate(__v);
    }

    private static RdbWarningType
    __validate(int __v)
    {
        final RdbWarningType __e = valueOf(__v);
        if(__e == null)
        {
            throw new Ice.MarshalException("enumerator value " + __v + " is out of range");
        }
        return __e;
    }

    private final int __value;
}