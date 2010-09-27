// ======================================================================
//
// test "numeric" header
//
// ======================================================================


#include "cpp0x/numeric"
#include <cstdlib>


void
  ensure( int which, bool claim )
{
  if( not claim )
    std::exit(which);
}


int
  main( )
{
  const int N = 5;
  int a[N];

  std::iota( a+0, a+N, 0 );
  for( int k = 0;  k != N;  ++k )
    ensure( k, a[k] == k );

  return 0;

}  // main()
