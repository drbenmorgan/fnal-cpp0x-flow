// ======================================================================
//
// test "array" header
//
// ======================================================================


#include "cpp0x/array"
#include <algorithm>
#include <cstdlib>


void
  ensure( int which, bool claim )
{ if( not claim )
    std::exit(which);
}


int
  main( )
{
  std::array<int,10>  a;
  std::fill( a.begin(), a.end(), 0 );

  return a[3];

}  // main()
