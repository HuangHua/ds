cmake_minimum_required (VERSION 2.6)
project (binarysearch)

set (SRC_LIST test.cpp)
set (EXECUTABLE_OUTPUT_PATH ${binarysearch_SOURCE_DIR}/bin)
set (CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb ")

if (CMAKE_BUILD_TYPE STREQUAL Debug)
	add_definitions (
		-D_DEBUG
	)
endif ()
message (STATUS "****" ${binarysearch_SOURCE_DIR})
include_directories(${binarysearch_SOURCE_DIR}/../)
add_executable(binarysearch ${SRC_LIST})
