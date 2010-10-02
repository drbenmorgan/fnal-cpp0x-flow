// ======================================================================
//
// test "tuple" header
//
// ======================================================================


#include "cpp0x/tuple"
#include <cstdlib>


void
  ensure( int which, bool claim )
{ if( not claim )
    std::exit(which);
}


int
  main( )
{
  std::tuple<bool,int,double>  t;

  return 0;

}  // main()
