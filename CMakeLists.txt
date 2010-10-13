# ======================================================================
#  cpp0x main build file
#
#  cd .../path/to/build/directory
#  cmake [-DCMAKE_INSTALL_PREFIX=/install/path] .../path/to/cpp0x
#  make
#  make test
#  make install
# ======================================================================

cmake_minimum_required(VERSION 2.6)  # use cmake 2.6 or later

# ----------------------------------------------------------------------
# describe product

project(cpp0x)
set(version v0_0_0)

set(qualifier a1)
set(flavorqual sl5.x86_64.${qualifier})
set(flavorqual_dir ${version}/${flavorqual} )

set(CMAKE_SKIP_RPATH) # don't embed path in shared lib's or executables

enable_testing()

# ----------------------------------------------------------------------
# describe build requirements

set( GCC_VERS $ENV{GCC_VERSION} )  # compiler
if( NOT GCC_VERS )
  message(FATAL_ERROR "Can't locate GCC_VERSION, required for testing cpp0x")
endif()

set( BOOST_VERS $ENV{BOOST_VERSION} )  # boost
if( NOT BOOST_VERS )
  message(FATAL_ERROR "Can't locate BOOST_VERSION, required for testing cpp0x")
endif()
set( BOOST_STRING $ENV{SETUP_BOOST} )
string( REGEX REPLACE ".*(-q.*)" "\\1" BOOST_QUAL "${BOOST_STRING}" )

include_directories( "${PROJECT_SOURCE_DIR}" ) # project's headers
include_directories( $ENV{BOOST_INC} )         # boost's headers

# define the boost environment so we don't get system libraries
set( BOOST_ROOT $ENV{BOOST_DIR} )
set( BOOST_INCLUDEDIR $ENV{BOOST_INC} )
set( BOOST_LIBRARYDIR $ENV{BOOST_LIB} )
set( Boost_USE_MULTITHREADED ON )
find_package( Boost 1.42 )  # minimum version required

# ----------------------------------------------------------------------
# describe source tree structure

add_subdirectory(cpp0x) # source code
add_subdirectory(test)  # test code
add_subdirectory(ups)   # ups table and config files

# ----------------------------------------------------------------------
# describe build tree structure

set( LIBRARY_OUTPUT_PATH    ${PROJECT_BINARY_DIR}/lib )
set( EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin )


# ======================================================================
