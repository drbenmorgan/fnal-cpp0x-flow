// ======================================================================
//
// test "memory" header
//
// ======================================================================


#include "memory"


std::shared_ptr<int>  sp = std::make_shared<int>( new double(3.14) );
std::unique_ptr<int>  up( new int(0) );


int
  main( )
{

  return *up;

}  // main()
