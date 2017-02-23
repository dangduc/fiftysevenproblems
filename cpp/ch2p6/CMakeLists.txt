cmake_minimum_required(VERSION 3.2)

project(baseproject)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)

set(BASEPROJECT_LIBRARIES baseproject CACHE INTERNAL "Primary linkable library")
set(BASEPROJECT_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/include CACHE INTERNAL "Root include directory")

macro(baseproject_option OPTION_NAME OPTION_TEXT OPTION_DEFAULT)
  option(${OPTION_NAME} ${OPTION_TEXT} ${OPTION_DEFAULT})
  if(DEFINED ENV{${OPTION_NAME}})
    # Allow setting the option through an environment variable
    set(${OPTION_NAME} $ENV{${OPTION_NAME}})
  endif()
  if(${OPTION_NAME})
    add_definitions(-D${OPTION_NAME})
  endif()
  message(STATUS "  ${OPTION_NAME}: ${${OPTION_NAME}}")
endmacro()

message(STATUS "baseproject options")
message(STATUS "=======================================================")
baseproject_option(BUILD_BASEPROJECT_TESTS "Set to ON to build tests." ON)
baseproject_option(GENERATE_COVERAGE "Set to ON to generate coverage reports." OFF)
message(STATUS "=======================================================")

if(BUILD_BASEPROJECT_TESTS)
  enable_testing()
endif()

#add_subdirectory(opt)
add_subdirectory(baseproject)
if(BUILD_BASEPROJECT_TESTS)
  #add_subdirectory(test)
endif()
