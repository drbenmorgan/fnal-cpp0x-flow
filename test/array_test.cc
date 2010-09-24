// ======================================================================
//
// test "array" header
//
// ======================================================================


#include "cpp0x/array.h"
#include <algorithm>


int
  main( )
{
  std::array<int,10>  a;
  std::fill( a.begin(), a.end(), 0 );

  return a[3];

}  // main()
