// ======================================================================
//
// test "cstdint" header
//
// ======================================================================


#include "cpp0x/cstdint"
#include <cstdlib>


void
  ensure( int which, bool claim )
{ if( not claim )
    std::exit(which);
}


int
  main( )
{
  std::intmax_t  bigint  = 12345678;
  std::uintmax_t biguint = 12345678ul;

  return biguint - bigint;

}  // main()
