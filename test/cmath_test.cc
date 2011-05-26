// ======================================================================
//
// test "cmath" header
//
// ======================================================================

#define BOOST_TEST_MODULE ( "cmath test" )
#include "boost/test/auto_unit_test.hpp"

#include "cpp0x/cmath"
#include <limits>

BOOST_AUTO_TEST_SUITE( cmath_test )

BOOST_AUTO_TEST_CASE( inf_test )
{
  double d = std::numeric_limits<double>::infinity();
  BOOST_CHECK( std::isinf(d) );
  BOOST_CHECK( ! std::isnan(d) );
  BOOST_CHECK( ! std::isnormal(d) );
}

BOOST_AUTO_TEST_CASE( nan_test )
{
  double d = 0.0 / 0.0;
  BOOST_CHECK( std::isnan(d) );
  BOOST_CHECK( ! std::isinf(d) );
  BOOST_CHECK( ! std::isnormal(d) );
}

BOOST_AUTO_TEST_CASE( hypot_test ) {
  BOOST_CHECK_EQUAL( std::hypot(5, 12), 13 );
  BOOST_CHECK_CLOSE( std::hypot(.5, 1.2), 1.3, 0.0001 );
  BOOST_CHECK_CLOSE( std::hypot(.05L, .12L), .13L, 0.0001L );
}

BOOST_AUTO_TEST_SUITE_END()
