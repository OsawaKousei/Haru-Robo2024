#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "manip::manip__rosidl_typesupport_introspection_c" for configuration ""
set_property(TARGET manip::manip__rosidl_typesupport_introspection_c APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(manip::manip__rosidl_typesupport_introspection_c PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmanip__rosidl_typesupport_introspection_c.so"
  IMPORTED_SONAME_NOCONFIG "libmanip__rosidl_typesupport_introspection_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS manip::manip__rosidl_typesupport_introspection_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_manip::manip__rosidl_typesupport_introspection_c "${_IMPORT_PREFIX}/lib/libmanip__rosidl_typesupport_introspection_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)