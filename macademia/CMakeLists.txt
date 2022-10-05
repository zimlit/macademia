add_library(macademia src/application.c)

set_property(TARGET macademia PROPERTY C_STANDARD 99)
set_property(TARGET macademia PROPERTY C_STANDARD_REQUIRED 99)

target_include_directories(macademia INTERFACE $(CMAKE_CURRENT_SOURCE_DIR)/src)
 