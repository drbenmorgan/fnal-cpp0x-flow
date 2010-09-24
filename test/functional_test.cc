// ======================================================================
//
// test "functional" header
//
// ======================================================================


#include "functional.h"


int v( int i,int j ) { return j; }
std::function<int(int)>  f( std::bind(v, 1, std::placeholders::_1) );


int
  main( )
{

  return f(0);

}  // main()
