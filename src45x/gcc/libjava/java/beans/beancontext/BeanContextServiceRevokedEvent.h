
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_beans_beancontext_BeanContextServiceRevokedEvent__
#define __java_beans_beancontext_BeanContextServiceRevokedEvent__

#pragma interface

#include <java/beans/beancontext/BeanContextEvent.h>
extern "Java"
{
  namespace java
  {
    namespace beans
    {
      namespace beancontext
      {
          class BeanContextServiceRevokedEvent;
          class BeanContextServices;
      }
    }
  }
}

class java::beans::beancontext::BeanContextServiceRevokedEvent : public ::java::beans::beancontext::BeanContextEvent
{

public:
  BeanContextServiceRevokedEvent(::java::beans::beancontext::BeanContextServices *, ::java::lang::Class *, jboolean);
  virtual ::java::lang::Class * getServiceClass();
  virtual jboolean isServiceClass(::java::lang::Class *);
  virtual ::java::beans::beancontext::BeanContextServices * getSourceAsBeanContextServices();
  virtual jboolean isCurrentServiceInvalidNow();
private:
  static const jlong serialVersionUID = -1295543154724961754LL;
public: // actually protected
  ::java::lang::Class * __attribute__((aligned(__alignof__( ::java::beans::beancontext::BeanContextEvent)))) serviceClass;
private:
  jboolean invalidateRefs;
public:
  static ::java::lang::Class class$;
};

#endif // __java_beans_beancontext_BeanContextServiceRevokedEvent__