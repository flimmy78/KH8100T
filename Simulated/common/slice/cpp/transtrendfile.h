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
// Generated from file `transtrendfile.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __transtrendfile_h__
#define __transtrendfile_h__

#include <IceUtil/PushDisableWarnings.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <Ice/Proxy.h>
#include <Ice/GCObject.h>
#include <Ice/AsyncResult.h>
#include <Ice/Incoming.h>
#include <IceUtil/ScopedArray.h>
#include <IceUtil/Optional.h>
#include <Ice/StreamF.h>
#include <IceUtil/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 306
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 4
#       error Ice patch level mismatch!
#   endif
#endif

namespace IceProxy
{

namespace TransferTrendFile
{

class TrendAppManager;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::TransferTrendFile::TrendAppManager>&);
::IceProxy::Ice::Object* upCast(::IceProxy::TransferTrendFile::TrendAppManager*);

class TrendFepManager;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::TransferTrendFile::TrendFepManager>&);
::IceProxy::Ice::Object* upCast(::IceProxy::TransferTrendFile::TrendFepManager*);

}

}

namespace TransferTrendFile
{

class TrendAppManager;
::Ice::Object* upCast(::TransferTrendFile::TrendAppManager*);
typedef ::IceInternal::Handle< ::TransferTrendFile::TrendAppManager> TrendAppManagerPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::TransferTrendFile::TrendAppManager> TrendAppManagerPrx;
void __patch(TrendAppManagerPtr&, const ::Ice::ObjectPtr&);

class TrendFepManager;
::Ice::Object* upCast(::TransferTrendFile::TrendFepManager*);
typedef ::IceInternal::Handle< ::TransferTrendFile::TrendFepManager> TrendFepManagerPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::TransferTrendFile::TrendFepManager> TrendFepManagerPrx;
void __patch(TrendFepManagerPtr&, const ::Ice::ObjectPtr&);

}

namespace TransferTrendFile
{

typedef ::std::vector< ::Ice::Byte> Bytes;

struct TrendPacket
{
    ::Ice::Byte id;
    ::std::string fepNode;
    ::std::string filename;
    ::Ice::Int filelength;
    ::TransferTrendFile::Bytes datas;
};

const ::std::string TrendAppTopic = "trend_app_operation";

const ::std::string TrendFepTopic = "trend_fep_operation";

}

namespace Ice
{
template<>
struct StreamableTraits< ::TransferTrendFile::TrendPacket>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 8;
    static const bool fixedLength = false;
};

template<class S>
struct StreamWriter< ::TransferTrendFile::TrendPacket, S>
{
    static void write(S* __os, const ::TransferTrendFile::TrendPacket& v)
    {
        __os->write(v.id);
        __os->write(v.fepNode);
        __os->write(v.filename);
        __os->write(v.filelength);
        __os->write(v.datas);
    }
};

template<class S>
struct StreamReader< ::TransferTrendFile::TrendPacket, S>
{
    static void read(S* __is, ::TransferTrendFile::TrendPacket& v)
    {
        __is->read(v.id);
        __is->read(v.fepNode);
        __is->read(v.filename);
        __is->read(v.filelength);
        __is->read(v.datas);
    }
};

}

namespace TransferTrendFile
{

class Callback_TrendAppManager_processTrendFile_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_TrendAppManager_processTrendFile_Base> Callback_TrendAppManager_processTrendFilePtr;

class Callback_TrendFepManager_trendExecute_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_TrendFepManager_trendExecute_Base> Callback_TrendFepManager_trendExecutePtr;

}

namespace IceProxy
{

namespace TransferTrendFile
{

class TrendAppManager : virtual public ::IceProxy::Ice::Object
{
public:

    void processTrendFile(const ::TransferTrendFile::TrendPacket& __p_aTrendPacket)
    {
        processTrendFile(__p_aTrendPacket, 0);
    }
    void processTrendFile(const ::TransferTrendFile::TrendPacket& __p_aTrendPacket, const ::Ice::Context& __ctx)
    {
        processTrendFile(__p_aTrendPacket, &__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_processTrendFile(const ::TransferTrendFile::TrendPacket& __p_aTrendPacket, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_processTrendFile(__p_aTrendPacket, 0, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent));
    }
    ::Ice::AsyncResultPtr
    begin_processTrendFile(const ::TransferTrendFile::TrendPacket& __p_aTrendPacket, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_processTrendFile(__p_aTrendPacket, 0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_processTrendFile(const ::TransferTrendFile::TrendPacket& __p_aTrendPacket, const ::Ice::Context& __ctx, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_processTrendFile(__p_aTrendPacket, &__ctx, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_processTrendFile(const ::TransferTrendFile::TrendPacket& __p_aTrendPacket, const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_processTrendFile(__p_aTrendPacket, &__ctx, ::Ice::newCallback(__completed, __sent));
    }
#endif

    ::Ice::AsyncResultPtr begin_processTrendFile(const ::TransferTrendFile::TrendPacket& __p_aTrendPacket)
    {
        return begin_processTrendFile(__p_aTrendPacket, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_processTrendFile(const ::TransferTrendFile::TrendPacket& __p_aTrendPacket, const ::Ice::Context& __ctx)
    {
        return begin_processTrendFile(__p_aTrendPacket, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_processTrendFile(const ::TransferTrendFile::TrendPacket& __p_aTrendPacket, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_processTrendFile(__p_aTrendPacket, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_processTrendFile(const ::TransferTrendFile::TrendPacket& __p_aTrendPacket, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_processTrendFile(__p_aTrendPacket, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_processTrendFile(const ::TransferTrendFile::TrendPacket& __p_aTrendPacket, const ::TransferTrendFile::Callback_TrendAppManager_processTrendFilePtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_processTrendFile(__p_aTrendPacket, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_processTrendFile(const ::TransferTrendFile::TrendPacket& __p_aTrendPacket, const ::Ice::Context& __ctx, const ::TransferTrendFile::Callback_TrendAppManager_processTrendFilePtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_processTrendFile(__p_aTrendPacket, &__ctx, __del, __cookie);
    }

    void end_processTrendFile(const ::Ice::AsyncResultPtr&);
    
private:

    void processTrendFile(const ::TransferTrendFile::TrendPacket&, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_processTrendFile(const ::TransferTrendFile::TrendPacket&, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:
    
    ::IceInternal::ProxyHandle<TrendAppManager> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<TrendAppManager*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<TrendAppManager> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<TrendAppManager*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<TrendAppManager> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<TrendAppManager*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<TrendAppManager> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<TrendAppManager*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<TrendAppManager> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<TrendAppManager*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<TrendAppManager> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<TrendAppManager*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<TrendAppManager> ice_secure(bool __secure) const
    {
        return dynamic_cast<TrendAppManager*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<TrendAppManager> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<TrendAppManager*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<TrendAppManager> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<TrendAppManager*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<TrendAppManager> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<TrendAppManager*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<TrendAppManager> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<TrendAppManager*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<TrendAppManager> ice_invocationTimeout(int __timeout) const
    {
        return dynamic_cast<TrendAppManager*>(::IceProxy::Ice::Object::ice_invocationTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<TrendAppManager> ice_twoway() const
    {
        return dynamic_cast<TrendAppManager*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<TrendAppManager> ice_oneway() const
    {
        return dynamic_cast<TrendAppManager*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<TrendAppManager> ice_batchOneway() const
    {
        return dynamic_cast<TrendAppManager*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<TrendAppManager> ice_datagram() const
    {
        return dynamic_cast<TrendAppManager*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<TrendAppManager> ice_batchDatagram() const
    {
        return dynamic_cast<TrendAppManager*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<TrendAppManager> ice_compress(bool __compress) const
    {
        return dynamic_cast<TrendAppManager*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<TrendAppManager> ice_timeout(int __timeout) const
    {
        return dynamic_cast<TrendAppManager*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<TrendAppManager> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<TrendAppManager*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<TrendAppManager> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<TrendAppManager*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
    }
    
    static const ::std::string& ice_staticId();

private: 
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class TrendFepManager : virtual public ::IceProxy::Ice::Object
{
public:

    void trendExecute(const ::std::string& __p_filename)
    {
        trendExecute(__p_filename, 0);
    }
    void trendExecute(const ::std::string& __p_filename, const ::Ice::Context& __ctx)
    {
        trendExecute(__p_filename, &__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_trendExecute(const ::std::string& __p_filename, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_trendExecute(__p_filename, 0, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent));
    }
    ::Ice::AsyncResultPtr
    begin_trendExecute(const ::std::string& __p_filename, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_trendExecute(__p_filename, 0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_trendExecute(const ::std::string& __p_filename, const ::Ice::Context& __ctx, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_trendExecute(__p_filename, &__ctx, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_trendExecute(const ::std::string& __p_filename, const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_trendExecute(__p_filename, &__ctx, ::Ice::newCallback(__completed, __sent));
    }
#endif

    ::Ice::AsyncResultPtr begin_trendExecute(const ::std::string& __p_filename)
    {
        return begin_trendExecute(__p_filename, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_trendExecute(const ::std::string& __p_filename, const ::Ice::Context& __ctx)
    {
        return begin_trendExecute(__p_filename, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_trendExecute(const ::std::string& __p_filename, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_trendExecute(__p_filename, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_trendExecute(const ::std::string& __p_filename, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_trendExecute(__p_filename, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_trendExecute(const ::std::string& __p_filename, const ::TransferTrendFile::Callback_TrendFepManager_trendExecutePtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_trendExecute(__p_filename, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_trendExecute(const ::std::string& __p_filename, const ::Ice::Context& __ctx, const ::TransferTrendFile::Callback_TrendFepManager_trendExecutePtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_trendExecute(__p_filename, &__ctx, __del, __cookie);
    }

    void end_trendExecute(const ::Ice::AsyncResultPtr&);
    
private:

    void trendExecute(const ::std::string&, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_trendExecute(const ::std::string&, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:
    
    ::IceInternal::ProxyHandle<TrendFepManager> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<TrendFepManager*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<TrendFepManager> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<TrendFepManager*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<TrendFepManager> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<TrendFepManager*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<TrendFepManager> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<TrendFepManager*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<TrendFepManager> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<TrendFepManager*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<TrendFepManager> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<TrendFepManager*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<TrendFepManager> ice_secure(bool __secure) const
    {
        return dynamic_cast<TrendFepManager*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<TrendFepManager> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<TrendFepManager*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<TrendFepManager> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<TrendFepManager*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<TrendFepManager> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<TrendFepManager*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<TrendFepManager> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<TrendFepManager*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<TrendFepManager> ice_invocationTimeout(int __timeout) const
    {
        return dynamic_cast<TrendFepManager*>(::IceProxy::Ice::Object::ice_invocationTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<TrendFepManager> ice_twoway() const
    {
        return dynamic_cast<TrendFepManager*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<TrendFepManager> ice_oneway() const
    {
        return dynamic_cast<TrendFepManager*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<TrendFepManager> ice_batchOneway() const
    {
        return dynamic_cast<TrendFepManager*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<TrendFepManager> ice_datagram() const
    {
        return dynamic_cast<TrendFepManager*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<TrendFepManager> ice_batchDatagram() const
    {
        return dynamic_cast<TrendFepManager*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<TrendFepManager> ice_compress(bool __compress) const
    {
        return dynamic_cast<TrendFepManager*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<TrendFepManager> ice_timeout(int __timeout) const
    {
        return dynamic_cast<TrendFepManager*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<TrendFepManager> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<TrendFepManager*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<TrendFepManager> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<TrendFepManager*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
    }
    
    static const ::std::string& ice_staticId();

private: 
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

namespace TransferTrendFile
{

class TrendAppManager : virtual public ::Ice::Object
{
public:

    typedef TrendAppManagerPrx ProxyType;
    typedef TrendAppManagerPtr PointerType;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void processTrendFile(const ::TransferTrendFile::TrendPacket&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___processTrendFile(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    using ::Ice::Object::__writeImpl;
    using ::Ice::Object::__readImpl;
};

inline bool operator==(const TrendAppManager& l, const TrendAppManager& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const TrendAppManager& l, const TrendAppManager& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

class TrendFepManager : virtual public ::Ice::Object
{
public:

    typedef TrendFepManagerPrx ProxyType;
    typedef TrendFepManagerPtr PointerType;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void trendExecute(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___trendExecute(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    using ::Ice::Object::__writeImpl;
    using ::Ice::Object::__readImpl;
};

inline bool operator==(const TrendFepManager& l, const TrendFepManager& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const TrendFepManager& l, const TrendFepManager& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

}

namespace TransferTrendFile
{

template<class T>
class CallbackNC_TrendAppManager_processTrendFile : public Callback_TrendAppManager_processTrendFile_Base, public ::IceInternal::OnewayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)();

    CallbackNC_TrendAppManager_processTrendFile(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallbackNC<T>(obj, cb, excb, sentcb)
    {
    }
};

template<class T> Callback_TrendAppManager_processTrendFilePtr
newCallback_TrendAppManager_processTrendFile(const IceUtil::Handle<T>& instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_TrendAppManager_processTrendFile<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_TrendAppManager_processTrendFilePtr
newCallback_TrendAppManager_processTrendFile(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_TrendAppManager_processTrendFile<T>(instance, 0, excb, sentcb);
}

template<class T> Callback_TrendAppManager_processTrendFilePtr
newCallback_TrendAppManager_processTrendFile(T* instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_TrendAppManager_processTrendFile<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_TrendAppManager_processTrendFilePtr
newCallback_TrendAppManager_processTrendFile(T* instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_TrendAppManager_processTrendFile<T>(instance, 0, excb, sentcb);
}

template<class T, typename CT>
class Callback_TrendAppManager_processTrendFile : public Callback_TrendAppManager_processTrendFile_Base, public ::IceInternal::OnewayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const CT&);

    Callback_TrendAppManager_processTrendFile(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallback<T, CT>(obj, cb, excb, sentcb)
    {
    }
};

template<class T, typename CT> Callback_TrendAppManager_processTrendFilePtr
newCallback_TrendAppManager_processTrendFile(const IceUtil::Handle<T>& instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_TrendAppManager_processTrendFile<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_TrendAppManager_processTrendFilePtr
newCallback_TrendAppManager_processTrendFile(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_TrendAppManager_processTrendFile<T, CT>(instance, 0, excb, sentcb);
}

template<class T, typename CT> Callback_TrendAppManager_processTrendFilePtr
newCallback_TrendAppManager_processTrendFile(T* instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_TrendAppManager_processTrendFile<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_TrendAppManager_processTrendFilePtr
newCallback_TrendAppManager_processTrendFile(T* instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_TrendAppManager_processTrendFile<T, CT>(instance, 0, excb, sentcb);
}

template<class T>
class CallbackNC_TrendFepManager_trendExecute : public Callback_TrendFepManager_trendExecute_Base, public ::IceInternal::OnewayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)();

    CallbackNC_TrendFepManager_trendExecute(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallbackNC<T>(obj, cb, excb, sentcb)
    {
    }
};

template<class T> Callback_TrendFepManager_trendExecutePtr
newCallback_TrendFepManager_trendExecute(const IceUtil::Handle<T>& instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_TrendFepManager_trendExecute<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_TrendFepManager_trendExecutePtr
newCallback_TrendFepManager_trendExecute(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_TrendFepManager_trendExecute<T>(instance, 0, excb, sentcb);
}

template<class T> Callback_TrendFepManager_trendExecutePtr
newCallback_TrendFepManager_trendExecute(T* instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_TrendFepManager_trendExecute<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_TrendFepManager_trendExecutePtr
newCallback_TrendFepManager_trendExecute(T* instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_TrendFepManager_trendExecute<T>(instance, 0, excb, sentcb);
}

template<class T, typename CT>
class Callback_TrendFepManager_trendExecute : public Callback_TrendFepManager_trendExecute_Base, public ::IceInternal::OnewayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const CT&);

    Callback_TrendFepManager_trendExecute(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallback<T, CT>(obj, cb, excb, sentcb)
    {
    }
};

template<class T, typename CT> Callback_TrendFepManager_trendExecutePtr
newCallback_TrendFepManager_trendExecute(const IceUtil::Handle<T>& instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_TrendFepManager_trendExecute<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_TrendFepManager_trendExecutePtr
newCallback_TrendFepManager_trendExecute(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_TrendFepManager_trendExecute<T, CT>(instance, 0, excb, sentcb);
}

template<class T, typename CT> Callback_TrendFepManager_trendExecutePtr
newCallback_TrendFepManager_trendExecute(T* instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_TrendFepManager_trendExecute<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_TrendFepManager_trendExecutePtr
newCallback_TrendFepManager_trendExecute(T* instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_TrendFepManager_trendExecute<T, CT>(instance, 0, excb, sentcb);
}

}

#include <IceUtil/PopDisableWarnings.h>
#endif