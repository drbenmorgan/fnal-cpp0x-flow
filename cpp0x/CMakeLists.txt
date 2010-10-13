# ======================================================================
# process this directory's source files
# ======================================================================

# ----------------------------------------------------------------------
# identify headers to install, and where they are to be installed

set( HEADERS
  _config_
  _unique_ptr_
  algorithm
  array
  functional
  memory
  numeric
  regex
  system_error
  tuple
  type_traits
)

install( FILES ${HEADERS} DESTINATION ${version}/include/cpp0x )
