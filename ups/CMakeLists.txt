# ======================================================================
#
# generate/install ups boilerplate
#
# ======================================================================

execute_process( COMMAND date
                 OUTPUT_VARIABLE datime
                 OUTPUT_STRIP_TRAILING_WHITESPACE )

process_ups_files()

configure_file( ${CMAKE_CURRENT_SOURCE_DIR}/cpp0x-config.cmake.in
                ${CMAKE_CURRENT_BINARY_DIR}/cpp0x-config.cmake @ONLY )
configure_file( ${CMAKE_CURRENT_SOURCE_DIR}/cpp0x-config-version.cmake.in
                ${CMAKE_CURRENT_BINARY_DIR}/cpp0x-config-version.cmake @ONLY )

install( FILES ${CMAKE_CURRENT_BINARY_DIR}/cpp0x-config.cmake
               ${CMAKE_CURRENT_BINARY_DIR}/cpp0x-config-version.cmake
         DESTINATION ${flavorqual_dir}/lib/cpp0x-${version} )
