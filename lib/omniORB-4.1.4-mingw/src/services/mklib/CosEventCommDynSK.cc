// This file is generated by omniidl (C++ backend) - omniORB_4_1. Do not edit.

#include "CosEventComm.hh"

OMNI_USING_NAMESPACE(omni)

static const char* _0RL_dyn_library_version = omniORB_4_1_dyn;

static ::CORBA::TypeCode::_Tracker _0RL_tcTrack(__FILE__);


static CORBA::TypeCode_ptr _0RL_tc_CosEventComm_mDisconnected = CORBA::TypeCode::PR_exception_tc("IDL:omg.org/CosEventComm/Disconnected:1.0", "Disconnected", (CORBA::PR_structMember*) 0, 0, &_0RL_tcTrack);
#if defined(HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace CosEventComm { 
  const ::CORBA::TypeCode_ptr _tc_Disconnected = _0RL_tc_CosEventComm_mDisconnected;
} 
#else
const ::CORBA::TypeCode_ptr CosEventComm::_tc_Disconnected = _0RL_tc_CosEventComm_mDisconnected;
#endif


#if defined(HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace CosEventComm { 
  const ::CORBA::TypeCode_ptr _tc_PushConsumer = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosEventComm/PushConsumer:1.0", "PushConsumer", &_0RL_tcTrack);
} 
#else
const ::CORBA::TypeCode_ptr CosEventComm::_tc_PushConsumer = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosEventComm/PushConsumer:1.0", "PushConsumer", &_0RL_tcTrack);
#endif

#if defined(HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace CosEventComm { 
  const ::CORBA::TypeCode_ptr _tc_PushSupplier = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosEventComm/PushSupplier:1.0", "PushSupplier", &_0RL_tcTrack);
} 
#else
const ::CORBA::TypeCode_ptr CosEventComm::_tc_PushSupplier = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosEventComm/PushSupplier:1.0", "PushSupplier", &_0RL_tcTrack);
#endif

#if defined(HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace CosEventComm { 
  const ::CORBA::TypeCode_ptr _tc_PullSupplier = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosEventComm/PullSupplier:1.0", "PullSupplier", &_0RL_tcTrack);
} 
#else
const ::CORBA::TypeCode_ptr CosEventComm::_tc_PullSupplier = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosEventComm/PullSupplier:1.0", "PullSupplier", &_0RL_tcTrack);
#endif

#if defined(HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace CosEventComm { 
  const ::CORBA::TypeCode_ptr _tc_PullConsumer = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosEventComm/PullConsumer:1.0", "PullConsumer", &_0RL_tcTrack);
} 
#else
const ::CORBA::TypeCode_ptr CosEventComm::_tc_PullConsumer = CORBA::TypeCode::PR_interface_tc("IDL:omg.org/CosEventComm/PullConsumer:1.0", "PullConsumer", &_0RL_tcTrack);
#endif


static void _0RL_CosEventComm_mDisconnected_marshal_fn(cdrStream& _s, void* _v)
{
  const CosEventComm::Disconnected* _p = (const CosEventComm::Disconnected*)_v;
  *_p >>= _s;
}
static void _0RL_CosEventComm_mDisconnected_unmarshal_fn(cdrStream& _s, void*& _v)
{
  CosEventComm::Disconnected* _p = new CosEventComm::Disconnected;
  *_p <<= _s;
  _v = _p;
}
static void _0RL_CosEventComm_mDisconnected_destructor_fn(void* _v)
{
  CosEventComm::Disconnected* _p = (CosEventComm::Disconnected*)_v;
  delete _p;
}

void operator<<=(::CORBA::Any& _a, const CosEventComm::Disconnected& _s)
{
  CosEventComm::Disconnected* _p = new CosEventComm::Disconnected(_s);
  _a.PR_insert(_0RL_tc_CosEventComm_mDisconnected,
               _0RL_CosEventComm_mDisconnected_marshal_fn,
               _0RL_CosEventComm_mDisconnected_destructor_fn,
               _p);
}
void operator<<=(::CORBA::Any& _a, const CosEventComm::Disconnected* _sp)
{
  _a.PR_insert(_0RL_tc_CosEventComm_mDisconnected,
               _0RL_CosEventComm_mDisconnected_marshal_fn,
               _0RL_CosEventComm_mDisconnected_destructor_fn,
               (CosEventComm::Disconnected*)_sp);
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, const CosEventComm::Disconnected*& _sp)
{
  void* _v;
  if (_a.PR_extract(_0RL_tc_CosEventComm_mDisconnected,
                    _0RL_CosEventComm_mDisconnected_unmarshal_fn,
                    _0RL_CosEventComm_mDisconnected_marshal_fn,
                    _0RL_CosEventComm_mDisconnected_destructor_fn,
                    _v)) {
    _sp = (const CosEventComm::Disconnected*)_v;
    return 1;
  }
  return 0;
}

static void _0RL_insertToAny__cCosEventComm_mDisconnected(::CORBA::Any& _a, const ::CORBA::Exception& _e) {
  const CosEventComm::Disconnected & _ex = (const CosEventComm::Disconnected &) _e;
  operator<<=(_a,_ex);
}

static void _0RL_insertToAnyNCP__cCosEventComm_mDisconnected (::CORBA::Any& _a, const ::CORBA::Exception* _e) {
  const CosEventComm::Disconnected* _ex = (const CosEventComm::Disconnected*) _e;
  operator<<=(_a,_ex);
}

class _0RL_insertToAny_Singleton__cCosEventComm_mDisconnected {
public:
  _0RL_insertToAny_Singleton__cCosEventComm_mDisconnected() {
    CosEventComm::Disconnected::insertToAnyFn = _0RL_insertToAny__cCosEventComm_mDisconnected;
    CosEventComm::Disconnected::insertToAnyFnNCP = _0RL_insertToAnyNCP__cCosEventComm_mDisconnected;
  }
};
static _0RL_insertToAny_Singleton__cCosEventComm_mDisconnected _0RL_insertToAny_Singleton__cCosEventComm_mDisconnected_;

static void _0RL_CosEventComm_mPushConsumer_marshal_fn(cdrStream& _s, void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  omniObjRef::_marshal(_o, _s);
}
static void _0RL_CosEventComm_mPushConsumer_unmarshal_fn(cdrStream& _s, void*& _v)
{
  omniObjRef* _o = omniObjRef::_unMarshal(CosEventComm::PushConsumer::_PD_repoId, _s);
  _v = _o;
}
static void _0RL_CosEventComm_mPushConsumer_destructor_fn(void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  if (_o)
    omni::releaseObjRef(_o);
}

void operator<<=(::CORBA::Any& _a, CosEventComm::PushConsumer_ptr _o)
{
  CosEventComm::PushConsumer_ptr _no = CosEventComm::PushConsumer::_duplicate(_o);
  _a.PR_insert(CosEventComm::_tc_PushConsumer,
               _0RL_CosEventComm_mPushConsumer_marshal_fn,
               _0RL_CosEventComm_mPushConsumer_destructor_fn,
               _no->_PR_getobj());
}
void operator<<=(::CORBA::Any& _a, CosEventComm::PushConsumer_ptr* _op)
{
  _a.PR_insert(CosEventComm::_tc_PushConsumer,
               _0RL_CosEventComm_mPushConsumer_marshal_fn,
               _0RL_CosEventComm_mPushConsumer_destructor_fn,
               (*_op)->_PR_getobj());
  *_op = CosEventComm::PushConsumer::_nil();
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, CosEventComm::PushConsumer_ptr& _o)
{
  void* _v;
  if (_a.PR_extract(CosEventComm::_tc_PushConsumer,
                    _0RL_CosEventComm_mPushConsumer_unmarshal_fn,
                    _0RL_CosEventComm_mPushConsumer_marshal_fn,
                    _0RL_CosEventComm_mPushConsumer_destructor_fn,
                    _v)) {
    omniObjRef* _r = (omniObjRef*)_v;
    if (_r)
      _o = (CosEventComm::PushConsumer_ptr)_r->_ptrToObjRef(CosEventComm::PushConsumer::_PD_repoId);
    else
      _o = CosEventComm::PushConsumer::_nil();
    return 1;
  }
  return 0;
}

static void _0RL_CosEventComm_mPushSupplier_marshal_fn(cdrStream& _s, void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  omniObjRef::_marshal(_o, _s);
}
static void _0RL_CosEventComm_mPushSupplier_unmarshal_fn(cdrStream& _s, void*& _v)
{
  omniObjRef* _o = omniObjRef::_unMarshal(CosEventComm::PushSupplier::_PD_repoId, _s);
  _v = _o;
}
static void _0RL_CosEventComm_mPushSupplier_destructor_fn(void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  if (_o)
    omni::releaseObjRef(_o);
}

void operator<<=(::CORBA::Any& _a, CosEventComm::PushSupplier_ptr _o)
{
  CosEventComm::PushSupplier_ptr _no = CosEventComm::PushSupplier::_duplicate(_o);
  _a.PR_insert(CosEventComm::_tc_PushSupplier,
               _0RL_CosEventComm_mPushSupplier_marshal_fn,
               _0RL_CosEventComm_mPushSupplier_destructor_fn,
               _no->_PR_getobj());
}
void operator<<=(::CORBA::Any& _a, CosEventComm::PushSupplier_ptr* _op)
{
  _a.PR_insert(CosEventComm::_tc_PushSupplier,
               _0RL_CosEventComm_mPushSupplier_marshal_fn,
               _0RL_CosEventComm_mPushSupplier_destructor_fn,
               (*_op)->_PR_getobj());
  *_op = CosEventComm::PushSupplier::_nil();
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, CosEventComm::PushSupplier_ptr& _o)
{
  void* _v;
  if (_a.PR_extract(CosEventComm::_tc_PushSupplier,
                    _0RL_CosEventComm_mPushSupplier_unmarshal_fn,
                    _0RL_CosEventComm_mPushSupplier_marshal_fn,
                    _0RL_CosEventComm_mPushSupplier_destructor_fn,
                    _v)) {
    omniObjRef* _r = (omniObjRef*)_v;
    if (_r)
      _o = (CosEventComm::PushSupplier_ptr)_r->_ptrToObjRef(CosEventComm::PushSupplier::_PD_repoId);
    else
      _o = CosEventComm::PushSupplier::_nil();
    return 1;
  }
  return 0;
}

static void _0RL_CosEventComm_mPullSupplier_marshal_fn(cdrStream& _s, void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  omniObjRef::_marshal(_o, _s);
}
static void _0RL_CosEventComm_mPullSupplier_unmarshal_fn(cdrStream& _s, void*& _v)
{
  omniObjRef* _o = omniObjRef::_unMarshal(CosEventComm::PullSupplier::_PD_repoId, _s);
  _v = _o;
}
static void _0RL_CosEventComm_mPullSupplier_destructor_fn(void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  if (_o)
    omni::releaseObjRef(_o);
}

void operator<<=(::CORBA::Any& _a, CosEventComm::PullSupplier_ptr _o)
{
  CosEventComm::PullSupplier_ptr _no = CosEventComm::PullSupplier::_duplicate(_o);
  _a.PR_insert(CosEventComm::_tc_PullSupplier,
               _0RL_CosEventComm_mPullSupplier_marshal_fn,
               _0RL_CosEventComm_mPullSupplier_destructor_fn,
               _no->_PR_getobj());
}
void operator<<=(::CORBA::Any& _a, CosEventComm::PullSupplier_ptr* _op)
{
  _a.PR_insert(CosEventComm::_tc_PullSupplier,
               _0RL_CosEventComm_mPullSupplier_marshal_fn,
               _0RL_CosEventComm_mPullSupplier_destructor_fn,
               (*_op)->_PR_getobj());
  *_op = CosEventComm::PullSupplier::_nil();
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, CosEventComm::PullSupplier_ptr& _o)
{
  void* _v;
  if (_a.PR_extract(CosEventComm::_tc_PullSupplier,
                    _0RL_CosEventComm_mPullSupplier_unmarshal_fn,
                    _0RL_CosEventComm_mPullSupplier_marshal_fn,
                    _0RL_CosEventComm_mPullSupplier_destructor_fn,
                    _v)) {
    omniObjRef* _r = (omniObjRef*)_v;
    if (_r)
      _o = (CosEventComm::PullSupplier_ptr)_r->_ptrToObjRef(CosEventComm::PullSupplier::_PD_repoId);
    else
      _o = CosEventComm::PullSupplier::_nil();
    return 1;
  }
  return 0;
}

static void _0RL_CosEventComm_mPullConsumer_marshal_fn(cdrStream& _s, void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  omniObjRef::_marshal(_o, _s);
}
static void _0RL_CosEventComm_mPullConsumer_unmarshal_fn(cdrStream& _s, void*& _v)
{
  omniObjRef* _o = omniObjRef::_unMarshal(CosEventComm::PullConsumer::_PD_repoId, _s);
  _v = _o;
}
static void _0RL_CosEventComm_mPullConsumer_destructor_fn(void* _v)
{
  omniObjRef* _o = (omniObjRef*)_v;
  if (_o)
    omni::releaseObjRef(_o);
}

void operator<<=(::CORBA::Any& _a, CosEventComm::PullConsumer_ptr _o)
{
  CosEventComm::PullConsumer_ptr _no = CosEventComm::PullConsumer::_duplicate(_o);
  _a.PR_insert(CosEventComm::_tc_PullConsumer,
               _0RL_CosEventComm_mPullConsumer_marshal_fn,
               _0RL_CosEventComm_mPullConsumer_destructor_fn,
               _no->_PR_getobj());
}
void operator<<=(::CORBA::Any& _a, CosEventComm::PullConsumer_ptr* _op)
{
  _a.PR_insert(CosEventComm::_tc_PullConsumer,
               _0RL_CosEventComm_mPullConsumer_marshal_fn,
               _0RL_CosEventComm_mPullConsumer_destructor_fn,
               (*_op)->_PR_getobj());
  *_op = CosEventComm::PullConsumer::_nil();
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, CosEventComm::PullConsumer_ptr& _o)
{
  void* _v;
  if (_a.PR_extract(CosEventComm::_tc_PullConsumer,
                    _0RL_CosEventComm_mPullConsumer_unmarshal_fn,
                    _0RL_CosEventComm_mPullConsumer_marshal_fn,
                    _0RL_CosEventComm_mPullConsumer_destructor_fn,
                    _v)) {
    omniObjRef* _r = (omniObjRef*)_v;
    if (_r)
      _o = (CosEventComm::PullConsumer_ptr)_r->_ptrToObjRef(CosEventComm::PullConsumer::_PD_repoId);
    else
      _o = CosEventComm::PullConsumer::_nil();
    return 1;
  }
  return 0;
}

