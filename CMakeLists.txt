cmake_minimum_required(VERSION 2.8)

project(hello)

file(GLOB SOURCES "hello.c")
file(GLOB HEADERS "hello.h")

add_library(hello_shared SHARED "${SOURCES}")
add_library(hello_static STATIC "${SOURCES}")
set_target_properties(hello_shared PROPERTIES OUTPUT_NAME hello)
set_target_properties(hello_static PROPERTIES OUTPUT_NAME hello)

include(GNUInstallDirs)
install(
  TARGETS hello_shared hello_static
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  )
