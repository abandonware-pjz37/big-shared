#include <foo/a/A.hpp>

#ifndef FOO_A_VAR1
# error "FOO_A_VAR1 not defined!"
#endif

namespace foo {
namespace a {

int A::a() {
  return 0x42;
}

} // namespace a
} // namespace foo
