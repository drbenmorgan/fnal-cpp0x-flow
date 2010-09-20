# ======================================================================
#
# generate/install ups boilerplate
#
# ======================================================================

execute_process( COMMAND date
                 OUTPUT_VARIABLE datime
                 OUTPUT_STRIP_TRAILING_WHITESPACE )

CONFIGURE_FILE ( ${cpp0x_SOURCE_DIR}/ups/cpp0x.table.in
                 ${cpp0x_BINARY_DIR}/ups/cpp0x.table @ONLY )
CONFIGURE_FILE ( ${cpp0x_SOURCE_DIR}/ups/cpp0x.version.in
                 ${cpp0x_BINARY_DIR}/ups/${version}.version @ONLY )

INSTALL (FILES ${cpp0x_BINARY_DIR}/ups/cpp0x.table
         DESTINATION ${version}/ups)
INSTALL (FILES ${cpp0x_BINARY_DIR}/ups/${version}.version
         DESTINATION ${CMAKE_INSTALL_PREFIX} )
