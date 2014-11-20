// include (self).h first
#include "boost_example.h"

#include <iostream>
#include <string>
#include <boost/format.hpp>
#include <boost/function.hpp>

namespace yui {

  int somefunc(double input) {
    return static_cast<int>(input);
  }

  void go_to_three(int& a, int& b, int& c) {
    a = 3;
    b = 3;
    c = 3;
  }

  // Template : do the same thing to different types
  template<typename T>
  void anotherfunc(T x) {
    std::cout << x;
  }

  // NameSpace
  namespace A {
    std::string x = "ax";
    std::string y = "ay";
  }

  namespace B {
    std::string x = "bx";
    std::string y = "by";
  }

  BoostExample::~BoostExample() {
  }

  BoostExample::BoostExample() {
    // 1 startup
    // std::cout requires iostream
    // boost::format requires boost/format.hpp
    std::cout << boost::format("%d") % (4 + 4);
    // std::string requires string
    const std::string s = "abc";
    std::cout << s;

    // 2 name a function like a variable
    const boost::function<int(double)> my_func = somefunc;
    std::cout << my_func(4.3);

    // 3 data type
    //  boost::array<T, N>         : 配列(<boost/array.hpp>をインクルード)
    //  std::vector<T>             : リスト(<vector>をインクルード)
    //  std::string                : 文字列(<string>をインクルード)
    //  std::map<Key, Value>       : 辞書(<map>をインクルード)
    //  std::set<T>                : 集合(<set>をインクルード)
    //  boost::function<Signature> : 関数(<boost/function.hpp>をインクルード)
    //  boost::tuple<T1,T2, ...>   : 複数の値の詰め合わせ(<boost/tuple/tuple.hpp>をインクルード)
    //  boost::shared_ptr<T>       : ポインタ(<boost/shared_ptr.hpp>をインクルード)
    //  boost::optional<T>         : T型か無効値(<boost/optional.hpp>をインクルード)
    //  boost::variant<T1,T2, ...> : 可変型(Cでいうunion)(<boost/variant.hpp>をインクルード)
    //  boost::any                 : 任意型(<boost/any.hpp>をインクルード)

    // 4 reference
    int x = 3;
    int& y = x;
    y = 4; // x = 4 (rewrites the reference of x)
    // This means you can use multiple return values
    int a = 0;
    int b = 0;
    int c = 0;
    go_to_three(a, b, c); // a = b = c = 3

    // 5 class and basic type
    const std::string s2 = "abc";
    std::cout << s2.length();
    // This is wired because s2 is not like a (instance)
    // but a literal. But actually (std::string) is a (class)

    // 6 Template : do the same thing to different types
    anotherfunc<int>(43);
    anotherfunc<float>(32.2);
    anotherfunc<std::string>("Is this possible?");
    // Yes. Compiler creates function like
    // void anotherfunc(std::string x) ----
    // Also, (<T>) is not required
    anotherfunc("Is this possible?");


    // 7 NameSpace
    std::cout << A::x; // ax
    std::cout << B::x; // bx
    using namespace A;
    std::cout << x; // ax
    std::cout << y; // ay
    // But, this is too much and maybe confusing. Rather, use
    // using A::x;
    // std::cout << x;
    // std::cout << y; -> ERROR
  }

}