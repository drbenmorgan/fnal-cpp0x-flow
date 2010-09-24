#ifndef CPP0X_ARRAY
#define CPP0X_ARRAY

// ======================================================================
//
// array - accommodations for as-yet unsupported C++0X features
//
// ----------------------------------------------------------------------
//
// This source file is intended for only short-term use.  Once compilers
// support the necessary C++0X features, this file should be no longer
// used and should go away.
//
// ======================================================================


#include "_cpp0x_config_"


// ----------------------------------------------------------------------
// <array>

#if defined(CPP0X_HAS_ARRAY)
  #include <array>

#else
  #include <boost/array.hpp>
  namespace std {
    using boost::array;
  }

#endif  // CPP0X_HAS_ARRAY


// ======================================================================


#endif  // CPP0X_ARRAY
