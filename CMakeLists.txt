cmake_minimum_required(VERSION 3.13.1)

set(ENV{CROSS_ZEPHYR} "1") 

if(NOT DEFINED $ENV{ZEPHYR_BASE})
message(STATUS "Environment variable ZEPHYR_BASE is not set")
get_filename_component(dir "${CMAKE_CURRENT_LIST_FILE}" PATH ABSOLUTE)
#get_filename_component(dir "${dir}" PATH ABSOLUTE)
get_filename_component(dir "${dir}" PATH ABSOLUTE)
set(ENV{ZEPHYR_BASE} "${dir}/OS/zephyr")
message(STATUS "Setting ZEPHYR_BASE to $ENV{ZEPHYR_BASE}")
endif()

include($ENV{ZEPHYR_BASE}/cmake/app/boilerplate.cmake NO_POLICY_SCOPE)
project(Demo)

include_directories(${CMAKE_CURRENT_LIST_DIR}/Components)

set (TARGET_SOURCE
Main/Main.cpp
)


target_sources(app PRIVATE ${TARGET_SOURCE})