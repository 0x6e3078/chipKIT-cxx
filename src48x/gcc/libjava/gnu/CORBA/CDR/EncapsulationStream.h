
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_CDR_EncapsulationStream__
#define __gnu_CORBA_CDR_EncapsulationStream__

#pragma interface

#include <gnu/CORBA/CDR/AbstractCdrOutput.h>
extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
      namespace CDR
      {
          class AligningOutput;
          class EncapsulationStream;
      }
    }
  }
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
    }
  }
}

class gnu::CORBA::CDR::EncapsulationStream : public ::gnu::CORBA::CDR::AbstractCdrOutput
{

public:
  EncapsulationStream(::org::omg::CORBA::portable::OutputStream *, jboolean);
  virtual void setOffset(jint);
  virtual void align(jint);
  virtual void close();
  virtual ::org::omg::CORBA::portable::InputStream * create_input_stream();
  virtual void reset();
  static const jbyte BIG_ENDIAN = 0;
  static const jbyte LITTLE_ENDIAN = 1;
  ::gnu::CORBA::CDR::AligningOutput * __attribute__((aligned(__alignof__( ::gnu::CORBA::CDR::AbstractCdrOutput)))) buffer;
  ::org::omg::CORBA::portable::OutputStream * parent;
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_CDR_EncapsulationStream__
