// ======================================================================
//
// test "random" header's random_device
//
// ======================================================================

#define BOOST_TEST_MODULE ( "random device test" )
#include "boost/test/auto_unit_test.hpp"

#include "cpp0x/random"
#include <stdexcept>

using namespace std;

BOOST_AUTO_TEST_SUITE( random_device_test )

BOOST_AUTO_TEST_CASE( ctor_test )
{
  BOOST_CHECK_NO_THROW( random_device() );
  BOOST_CHECK_NO_THROW( random_device("/dev/random") );
  BOOST_CHECK_NO_THROW( random_device("/dev/urandom") );
  BOOST_CHECK_THROW( random_device("hello"), runtime_error );
}

BOOST_AUTO_TEST_CASE( other_stuff_test )
{
  random_device r;
  BOOST_CHECK_NO_THROW( r.entropy() );
  BOOST_CHECK_NO_THROW( r() );
  BOOST_CHECK_NO_THROW( r() );
}

BOOST_AUTO_TEST_SUITE_END()
