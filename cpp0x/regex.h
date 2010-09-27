#ifndef CPP0X_REGEX_H
#define CPP0X_REGEX_H

// ======================================================================
//
// regex - accommodations for as-yet unsupported C++0X features
//
// ----------------------------------------------------------------------
//
// This source file is intended for only short-term use.  Once compilers
// support the necessary C++0X features, this file should be no longer
// used and should go away.
//
// ======================================================================


#include "cpp0x/_config_"


// ----------------------------------------------------------------------
// <regex>

#if defined(CPP0X_HAS_REGEX)
  #include <regex>

#else
  #include "boost/regex.hpp"
  namespace std {
    namespace regex_constants = boost::regex_constants;
    using boost::regex_error;
    using boost::regex_traits;

    using boost::basic_regex;
    using boost::regex;
    using boost::wregex;

    using boost::swap;

    using boost::sub_match;
    using boost::csub_match;
    using boost::wcsub_match;
    using boost::ssub_match;
    using boost::wssub_match;

    using boost::match_results;
    using boost::cmatch;
    using boost::wcmatch;
    using boost::smatch;
    using boost::wsmatch;
  }

#endif  // CPP0X_HAS_REGEX


// ======================================================================


#endif  // CPP0X_REGEX_H