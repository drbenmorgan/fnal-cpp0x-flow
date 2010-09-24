# ======================================================================
# process this directory's source files
# ======================================================================

# ----------------------------------------------------------------------
# identify headers to install, and where they are to be installed

set( HEADERS
  _config_
  _unique_ptr_
  algorithm.h
  array.h
  functional.h
  memory.h
  numeric.h
  regex.h
  type_traits.h
)

install( FILES ${HEADERS} DESTINATION ${version}/cpp0x )
