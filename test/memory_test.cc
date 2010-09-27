// ======================================================================
//
// test "memory" header
//
// ======================================================================


#include "cpp0x/memory"


std::shared_ptr<double>  sp = std::make_shared<double>( 3.14 );
std::unique_ptr<int>     up( new int(0) );


int
  main( )
{

  return (*up) * (*sp);

}  // main()
