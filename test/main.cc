// ======================================================================
//
//
// ======================================================================


#include "cpp0x/algorithm.h"
#include "cpp0x/array.h"
#include "cpp0x/functional.h"
#include "cpp0x/memory.h"
#include "cpp0x/numeric.h"
#include "cpp0x/regex.h"
#include "cpp0x/type_traits.h"


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
