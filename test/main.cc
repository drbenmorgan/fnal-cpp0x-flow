// ======================================================================
//
//
// ======================================================================


#include "cpp0x/algorithm"
#include "cpp0x/array"
#include "cpp0x/functional"
#include "cpp0x/memory"
#include "cpp0x/numeric"
#include "cpp0x/regex"
#include "cpp0x/type_traits"


// array
std::array<int,10>  a;


// memory
std::shared_ptr<int>  sp = std::make_shared<int>( a[9] );
std::unique_ptr<int>  up( new int(0) );


// type_traits
typedef  std::make_unsigned<int>::type  uint;
uint u = 0u;
std::add_lvalue_reference<uint>::type  r = u;


// functional
void v(int,int) { }
std::function<void(int)>  f( std::bind(v, 0, std::placeholders::_1) );


int
  main( )
{
  f(0);

  return u;

}  // main()
