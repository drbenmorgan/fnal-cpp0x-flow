// ======================================================================
//
// test "algorithm" header
//
// ======================================================================


#include "cpp0x/algorithm"
#include <cstdlib>


void
  ensure( int which, bool claim )
{ if( not claim )
    std::exit(which);
}


int
  main( )
{
  //           0   1   2   3   4   5   6
  int a[] = {  5, 10, 15, 10,  5,  0, 20 };

  { std::pair<int*, int*> ans = std::minmax_element( a+0, a+0 );
    ensure( 1, ans.first  == a+0 );
    ensure( 2, ans.second == a+0 );
  }

  { std::pair<int*, int*> ans = std::minmax_element( a+0, a+1 );
    ensure( 3, ans.first  == a+0 );
    ensure( 4, ans.second == a+0 );
  }

  { std::pair<int*, int*> ans = std::minmax_element( a+0, a+2 );
    ensure( 5, ans.first  == a+0 );
    ensure( 6, ans.second == a+1 );
  }

  { std::pair<int*, int*> ans = std::minmax_element( a+0, a+3 );
    ensure( 6, ans.first  == a+0 );
    ensure( 7, ans.second == a+2 );
  }

  { std::pair<int*, int*> ans = std::minmax_element( a+0, a+4 );
    ensure( 8, ans.first  == a+0 );
    ensure( 9, ans.second == a+2 );
  }

  { std::pair<int*, int*> ans = std::minmax_element( a+0, a+5 );
    ensure( 10, ans.first  == a+0 );
    ensure( 11, ans.second == a+2 );
  }

  { std::pair<int*, int*> ans = std::minmax_element( a+0, a+6 );
    ensure( 12, ans.first  == a+5 );
    ensure( 13, ans.second == a+2 );
  }

  { std::pair<int*, int*> ans = std::minmax_element( a+0, a+7 );
    ensure( 14, ans.first  == a+5 );
    ensure( 15, ans.second == a+6 );
  }

  return 0;

}  // main()
