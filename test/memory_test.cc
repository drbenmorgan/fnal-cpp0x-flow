// ======================================================================
//
// test "memory" header
//
// ======================================================================


#include "cpp0x/memory"
#include <cstdlib>


void
  ensure( int which, bool claim )
{ if( not claim )
    std::exit(which);
}


std::shared_ptr<double>  sp = std::make_shared<double>( 3.14 );
std::unique_ptr<int>     up( new int(0) );


int
  main( )
{

  return (*up) * (*sp);

}  // main()
