# ======================================================================
#  cpp0x main build file
#
#  cd .../path/to/build/directory
#  source .../path/to/cpp0x/ups/setup_for_development
#  cmake [-DCMAKE_INSTALL_PREFIX=/install/path]
#        -DCMAKE_BUILD_TYPE=$CETPKG_TYPE
#        $CETPKG_SOURCE
#  make
#  make test
#  make install
#  make package (builds distribution tarfile)
# ======================================================================

# ----------------------------------------------------------------------
# Describe build tool requirements:

cmake_minimum_required(VERSION 2.8)  # use cmake 2.8 or later

# ----------------------------------------------------------------------
# Describe product:

project(cpp0x)

# cetbuildtools contains our cmake modules
set (CETBUILDTOOLS_VERSION $ENV{CETBUILDTOOLS_VERSION})
if(NOT CETBUILDTOOLS_VERSION)
  message(FATAL_ERROR "ERROR: setup cetbuildtools to get the cmake modules")
endif()
set(CMAKE_MODULE_PATH $ENV{CETBUILDTOOLS_DIR}/Modules ${CMAKE_MODULE_PATH})

include(CetCMakeEnv)
cet_cmake_env()

cet_set_compiler_flags(DIAGS VIGILANT
  WERROR
  NO_UNDEFINED
  EXTRA_FLAGS -pedantic
  EXTRA_CXX_FLAGS -std=c++11
  )
cet_report_compiler_flags()

# ----------------------------------------------------------------------
# Describe build prerequisites:


find_ups_product(cetbuildtools v3_06_00)
find_ups_boost(v1_50_0)

# ----------------------------------------------------------------------
# Describe source tree layout:

add_subdirectory(${PROJECT_NAME} )  # source code
add_subdirectory(test )             # test code
add_subdirectory(ups )              # ups files

# ----------------------------------------------------------------------
# Packaging utility

include(UseCPack)

#
# ======================================================================
