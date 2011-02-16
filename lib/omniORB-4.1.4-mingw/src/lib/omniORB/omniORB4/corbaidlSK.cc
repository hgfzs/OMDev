// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.

#include <omniORB4/objTracker.h>

void
CORBA::StructMember::operator>>= (cdrStream &_n) const
{
  _n.marshalString(name,0);
  ::CORBA::TypeCode::marshalTypeCode(type,_n);
  IDLType_Helper::marshalObjRef(type_def,_n);

}

void
CORBA::StructMember::operator<<= (cdrStream &_n)
{
  name = _n.unmarshalString(0);
  type = ::CORBA::TypeCode::unmarshalTypeCode(_n);
  type_def = IDLType_Helper::unmarshalObjRef(_n);

}

void
CORBA::UnionMember::operator>>= (cdrStream &_n) const
{
  _n.marshalString(name,0);
  (const ::CORBA::Any&) label >>= _n;
  ::CORBA::TypeCode::marshalTypeCode(type,_n);
  IDLType_Helper::marshalObjRef(type_def,_n);

}

void
CORBA::UnionMember::operator<<= (cdrStream &_n)
{
  name = _n.unmarshalString(0);
  (::CORBA::Any&)label <<= _n;
  type = ::CORBA::TypeCode::unmarshalTypeCode(_n);
  type_def = IDLType_Helper::unmarshalObjRef(_n);

}

_init_in_def_( const ::CORBA::Short CORBA::PRIVATE_MEMBER = 0; )

_init_in_def_( const ::CORBA::Short CORBA::PUBLIC_MEMBER = 1; )

void
CORBA::ValueMember::operator>>= (cdrStream &_n) const
{
  _n.marshalString(name,0);
  _n.marshalString(id,0);
  _n.marshalString(defined_in,0);
  _n.marshalString(version,0);
  ::CORBA::TypeCode::marshalTypeCode(type,_n);
  IDLType_Helper::marshalObjRef(type_def,_n);
  access >>= _n;

}

void
CORBA::ValueMember::operator<<= (cdrStream &_n)
{
  name = _n.unmarshalString(0);
  id = _n.unmarshalString(0);
  defined_in = _n.unmarshalString(0);
  version = _n.unmarshalString(0);
  type = ::CORBA::TypeCode::unmarshalTypeCode(_n);
  type_def = IDLType_Helper::unmarshalObjRef(_n);
  (Visibility&)access <<= _n;

}

