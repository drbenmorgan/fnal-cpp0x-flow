// ======================================================================
//
// test internal "_config_" header
//
// ======================================================================


#include "cpp0x/detail/config"
#include <cstdlib>


void
  ensure( int which, bool claim )
{ if( not claim )
    std::exit(which);
}


int
  main( )
{

  ensure( 1, GCC_IS_AT_LEAST(4,2,0) );

  return 0;

}  // main()
