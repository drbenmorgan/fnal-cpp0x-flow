// ======================================================================
//
// test nullptr and std::nullptr_t
//
// ======================================================================


#include "cpp0x/cstddef"


void
  ensure( int which, bool claim )
{ if( not claim )
    std::exit(which);
}


struct A
{
  A( std::nullptr_t )  { }
  friend  bool  operator == ( A, A )  { return true; }
};  // A


int
  main( )
{
  { // --- basic comparisons
    ensure( 1, nullptr == static_cast<void*>(0) );
    ensure( 2, nullptr == nullptr );
    ensure( 3, ! (nullptr != nullptr) );
    ensure( 4, nullptr <= nullptr );
    ensure( 5, ! (nullptr > nullptr) );
    ensure( 6, nullptr >= nullptr );
    ensure( 7, ! (nullptr < nullptr) );
  }

  { // --- basic conversions
    ensure( 11, ! static_cast<bool>(nullptr) );

    int * p(0);
    int * q(nullptr);
    ensure( 12, p == nullptr && nullptr == p );
    ensure( 13, q == nullptr && nullptr == q );
    ensure( 14, p == q );

    int A::* pmd = 0;
    ensure( 15, pmd == nullptr );
    void (A::* pmf)() = 0;
    ensure( 16, pmf == nullptr );
  }

  { // --- other required properties
    ensure( 21, sizeof(std::nullptr_t) == sizeof(void*) );
    ensure( 22, A(0) == A(nullptr) );
    char const * s1 = 0;
    char const * s2 = "abc";
    ensure( 23, s1 == nullptr );
    ensure( 24, s2 != nullptr );
  }

  return 0;

}  // main()
