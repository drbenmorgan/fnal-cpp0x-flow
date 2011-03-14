# ======================================================================
# process this directory's source files
# ======================================================================

# ----------------------------------------------------------------------
# identify headers to install

set( PUBLIC_HDRS
  algorithm
  array
  cstddef
  cstdint
  functional
  memory
  numeric
  regex
  system_error
  tuple
  type_traits
  utility
)

set( COMPAT_HDRS
  compat/post_CLHEP
  compat/post_ROOT
  compat/pre_CLHEP
  compat/pre_ROOT
)

set( DETAIL_HDRS
  detail/add_rv_ref
  detail/config
  detail/declval
  detail/nullptr
  detail/unique_ptr
)

# ----------------------------------------------------------------------
# identify headers' installed locations

install( FILES ${PUBLIC_HDRS}
         DESTINATION ${product}/${version}/include/cpp0x
)
install( FILES ${COMPAT_HDRS}
         DESTINATION ${product}/${version}/include/cpp0x/compat
)
install( FILES ${DETAIL_HDRS}
         DESTINATION ${product}/${version}/include/cpp0x/detail
)
