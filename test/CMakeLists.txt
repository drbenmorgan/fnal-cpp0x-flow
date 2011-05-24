# ======================================================================
#
# Testing script
#
# ======================================================================

include(CetTest)

cet_test(algorithm_test   USE_BOOST_UNIT)
cet_test(array_test       USE_BOOST_UNIT)
cet_test(config_test      USE_BOOST_UNIT)
cet_test(cstdint_test     USE_BOOST_UNIT)
cet_test(functional_test  USE_BOOST_UNIT)
cet_test(memory_test      USE_BOOST_UNIT)
cet_test(nullptr_test     USE_BOOST_UNIT)
cet_test(numeric_test     USE_BOOST_UNIT)
cet_test(regex_test       USE_BOOST_UNIT LIBRARIES ${Boost_REGEX_LIBRARY})
cet_test(system_error_test)
cet_test(tuple_test       USE_BOOST_UNIT)
cet_test(type_traits_test USE_BOOST_UNIT)
cet_test(utility_test     USE_BOOST_UNIT)
