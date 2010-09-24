#ifndef CPP0X_NUMERIC_H
#define CPP0X_NUMERIC_H

// ======================================================================
//
// numeric - accommodations for as-yet unsupported C++0X features
//
// ----------------------------------------------------------------------
//
// This source file is intended for only short-term use.  Once compilers
// support the necessary C++0X features, this file should be no longer
// used and should go away.
//
// ======================================================================


#include "cpp0x/_config_"

#include <numeric>


// ----------------------------------------------------------------------
// CPP0X_HAS_NUMERIC_IOTA

#if defined(CPP0X_HAS_NUMERIC_IOTA)

#else
  namespace std  {

    template< class FwdIter, class T >
    void
      iota( FwdIter b, FwdIter const e, T val )
    {
      for( ; b != e; ++b )
        *b = val, ++val;
    }

  }  // namespace std

#endif  // CPP0X_HAS_NUMERIC_IOTA


// ======================================================================


#endif  // CPP0X_NUMERIC_H
