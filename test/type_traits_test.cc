// ======================================================================
//
// test "type_traits" header
//
// ======================================================================


#include "type_traits"


// type_traits
typedef  std::make_unsigned<int>::type  uint;
uint u = 0u;
std::add_lvalue_reference<uint>::type  r = u;


int
  main( )
{

  return r;

}  // main()
