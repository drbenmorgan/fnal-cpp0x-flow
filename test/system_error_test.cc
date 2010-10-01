// ======================================================================
//
// test "system_error" header
//
// ======================================================================


#include "cpp0x/system_error"
#include <cstdlib>


void
  ensure( int which, bool claim )
{ if( not claim )
    std::exit(which);
}


int
  main( )
{

  return 0;

}  // main()
