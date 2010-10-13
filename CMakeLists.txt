# ======================================================================
#  cpp0x main build file
#
#  cd .../path/to/build/directory
#  cmake [-DCMAKE_INSTALL_PREFIX=/install/path] .../path/to/cpp0x
#  make
#  make test
#  make install
# ======================================================================


# ----------------------------------------------------------------------
# Describe build tool requirements:

cmake_minimum_required(VERSION 2.6)  # use cmake 2.6 or later

# ----------------------------------------------------------------------
# Describe product:

project(cpp0x)
set(version v0_0_0)

set(qualifier a1)
set(flavorqual sl5.x86_64.${qualifier})
set(flavorqual_dir ${version}/${flavorqual} )

set(CMAKE_SKIP_RPATH) # don't embed path in shared lib's or executables

enable_testing()

# ----------------------------------------------------------------------
# Describe build prerequisites:

set( GCC_VERSION $ENV{GCC_VERSION} )  # compiler
if( NOT GCC_VERSION )
  message( FATAL_ERROR
           "Can't locate GCC_VERSION, required to test ${PROJECT_NAME}"
         )
endif()

set( BOOST_VERS $ENV{BOOST_VERSION} )  # boost
if( NOT BOOST_VERS )
  message( FATAL_ERROR
           "Can't locate BOOST_VERSION, required to test ${PROJECT_NAME}"
         )
endif()
set( BOOST_STRING $ENV{SETUP_BOOST} )
string( REGEX REPLACE ".*(-q.*)" "\\1" BOOST_QUAL "${BOOST_STRING}" )
set( BOOST_ROOT $ENV{BOOST_DIR} )
set( BOOST_INCLUDEDIR $ENV{BOOST_INC} )
set( BOOST_LIBRARYDIR $ENV{BOOST_LIB} )
set( Boost_USE_MULTITHREADED ON )
find_package( Boost 1.42 )  # minimum version required

# ----------------------------------------------------------------------
# Describe include path:

include_directories( "${PROJECT_SOURCE_DIR}" ) # project's headers
include_directories( $ENV{BOOST_INC} )         # boost's headers

# ----------------------------------------------------------------------
# Describe source tree layout:

add_subdirectory(cpp0x) # source code
add_subdirectory(test)  # test code
add_subdirectory(ups)   # ups table and config files

# ----------------------------------------------------------------------
# Describe build tree layout:

set( LIBRARY_OUTPUT_PATH    ${PROJECT_BINARY_DIR}/lib )
set( EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin )

#
# ======================================================================
