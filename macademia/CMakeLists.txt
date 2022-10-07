add_library(macademia src/macademia/application.c src/macademia/log.c)

set_property(TARGET macademia PROPERTY C_STANDARD 99)
set_property(TARGET macademia PROPERTY C_STANDARD_REQUIRED 99)

target_include_directories(macademia INTERFACE src)

if (UNIX)
    target_compile_definitions(macademia PUBLIC MA_UNIX)
endif (UNIX)

if (WIN32)
    target_compile_definitions(macademia PUBLIC MA_WINDOWS)
endif (WIN32)

if (APPLE)
    target_compile_definitions(macademia PUBLIC MA_APPLE)
endif (APPLE)

if (${CMAKE_SYSTEM_NAME} MATCHES "Linux")
    target_compile_definitions(macademia PUBLIC MA_LINUX)
endif()