// ======================================================================
//
// test "type_traits" header
//
// ======================================================================


#include "cpp0x/type_traits"
#include <cstdlib>


void
  ensure( int which, bool claim )
{ if( not claim )
    std::exit(which);
}


typedef  std::make_unsigned<int>::type  uint;
uint u = 0u;
std::add_lvalue_reference<uint>::type  r = u;


int
  main( )
{

  return r;

}  // main()
