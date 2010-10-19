# ======================================================================
# testing infrastructure
# ======================================================================

# ----------------------------------------------------------------------
# identify executables' respective sources

add_executable( algorithm_test    algorithm_test.cc )
add_executable( array_test        array_test.cc )
add_executable( config_test       config_test.cc )
add_executable( functional_test   functional_test.cc )
add_executable( memory_test       memory_test.cc )
add_executable( numeric_test      numeric_test.cc )
add_executable( regex_test        regex_test.cc )
add_executable( system_error_test system_error_test.cc )
add_executable( tuple_test        tuple_test.cc )
add_executable( type_traits_test  type_traits_test.cc )
add_executable( utility_test      utility_test.cc )

# ----------------------------------------------------------------------
# identify executables to be run as tests

add_test( algorithm_test    ${EXECUTABLE_OUTPUT_PATH}/algorithm_test )
add_test( array_test        ${EXECUTABLE_OUTPUT_PATH}/array_test )
add_test( config_test       ${EXECUTABLE_OUTPUT_PATH}/config_test )
add_test( functional_test   ${EXECUTABLE_OUTPUT_PATH}/functional_test )
add_test( memory_test       ${EXECUTABLE_OUTPUT_PATH}/memory_test )
add_test( numeric_test      ${EXECUTABLE_OUTPUT_PATH}/numeric_test )
add_test( regex_test        ${EXECUTABLE_OUTPUT_PATH}/regex_test )
add_test( system_error_test ${EXECUTABLE_OUTPUT_PATH}/system_error_test )
add_test( tuple_test        ${EXECUTABLE_OUTPUT_PATH}/tuple_test )
add_test( type_traits_test  ${EXECUTABLE_OUTPUT_PATH}/type_traits_test )
add_test( utility_test      ${EXECUTABLE_OUTPUT_PATH}/utility_test )
