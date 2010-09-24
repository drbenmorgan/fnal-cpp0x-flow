#ifndef CPP0X_FUNCTIONAL
#define CPP0X_FUNCTIONAL

// ======================================================================
//
// functional - accommodations for as-yet unsupported C++0X features
//
// ----------------------------------------------------------------------
//
// This source file is intended for only short-term use.  Once compilers
// support the necessary C++0X features, this file should be no longer
// used and should go away.
//
// ======================================================================


#include "_cpp0x_config_"

#include <functional>


// ----------------------------------------------------------------------
// std::bind, etc.

#if defined(CPP0X_HAS_FUNCTIONAL_BIND)

#else
  #include <boost/bind.hpp>
  namespace std {
    using boost::bind;
    using boost::is_bind_expression;
    using boost::is_placeholder;
    namespace placeholders {
      boost::arg<1> _1;
      boost::arg<2> _2;
      boost::arg<3> _3;
      boost::arg<4> _4;
      boost::arg<5> _5;
      boost::arg<6> _6;
      boost::arg<7> _7;
      boost::arg<8> _8;
      boost::arg<9> _9;
    }
  }

#endif  // CPP0X_HAS_FUNCTIONAL_BIND


// ----------------------------------------------------------------------
// std::function, etc.

#if defined(CPP0X_HAS_FUNCTIONAL_FUNCTION)

#else
  #include <boost/function.hpp>
  namespace std {
    using boost::bad_function_call;
    using boost::function;
  }

#endif  // CPP0X_HAS_FUNCTIONAL_FUNCTION


// ======================================================================


#endif  // CPP0X_FUNCTIONAL
