// ======================================================================
//
// test nullptr compatibility with a (simulated) incompatible package
//
// ======================================================================


#include "cpp0x/cstddef"
#include "cpp0x/type_traits"

#include "cpp0x/compat/pre_CLHEP"
#define nullptr 0
#include "cpp0x/compat/post_CLHEP"


void
  ensure( int which, bool claim )
{ if( not claim )
    std::exit(which);
}


int
  main( )
{
  { // --- basic works
    ensure( 1, nullptr == static_cast<void*>(0) );
    ensure( 2, ! nullptr );
  }

  { // --- correct categorization
    #if defined CPP0X_HAS_NULLPTR
      ensure( 11, ! std::is_class<std::nullptr_t>::value );
    #else
      ensure( 12, std::is_class<std::nullptr_t>::value );
      #if ! defined nullptr
        ensure( 13, false );
      #endif
    #endif
  }

  return 0;

}  // main()
