#include <foo/a/A.hpp>
#include <foo/b/B.hpp>

#ifndef FOO_A_VAR1
# error "FOO_A_VAR1 not defined!"
#endif

int foo_all() {
  foo::a::A a;
  foo::b::B b;
  return a.a() + b.b();
}
