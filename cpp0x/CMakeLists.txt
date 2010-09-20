# ======================================================================
# process this directory's source files
# ======================================================================

# ----------------------------------------------------------------------
# identify headers to install, and where they are to be installed

set( HEADERS
  _cpp0x_config_
  _unique_ptr_
  algorithm
  array
  functional
  memory
  numeric
  regex
  type_traits
)

install( FILES ${HEADERS} DESTINATION ${version}/cpp0x )
