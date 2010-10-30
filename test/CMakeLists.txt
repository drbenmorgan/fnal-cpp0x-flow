# ======================================================================
#
# Testing script
#
# ======================================================================

# ----------------------------------------------------------------------
# Identify tests:

set( TEST_LIST
  config_test
  algorithm_test
  array_test
  cstdint_test
  functional_test
  integration_test
  memory_test
  numeric_test
  regex_test
  system_error_test
  tuple_test
  type_traits_test
  utility_test
)

set( ALSO_BUILD
)

set( ALSO_RUN
)

# ----------------------------------------------------------------------
# Build most tests:

foreach( test ${TEST_LIST} ${ALSO_BUILD} )
  add_executable( ${test} ${test}.cc )
  #target_link_libraries( ${test} cpp0x )
endforeach( test ${TEST_LIST} ${ALSO_BUILD} )

# ----------------------------------------------------------------------
# Build tests with special requirements:

# ----------------------------------------------------------------------
# Run tests:

foreach( test ${TEST_LIST} ${ALSO_RUN} )
  add_test( ${test} ${EXECUTABLE_OUTPUT_PATH}/${test} )
endforeach( test ${TEST_LIST} )

# ======================================================================
