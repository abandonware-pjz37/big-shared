#ifndef FOO_A_A_HPP_
#define FOO_A_A_HPP_

#ifndef FOO_A_VAR1
# error "FOO_A_VAR1 not defined!"
#endif

namespace foo {
namespace a {

class A {
 public:
  A();
};

} // namespace a
} // namespace foo

#endif // FOO_A_A_HPP_
