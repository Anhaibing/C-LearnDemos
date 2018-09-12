cmake_minimum_required(VERSION 3.5.1)

set(APP_TARGET_NAME example)

project(${APP_TARGET_NAME} C CXX)

file(GLOB_RECURSE C_SOURCE_FILES "src/*.c")
file(GLOB_RECURSE CXX_SOURCE_FILES "src/*.cpp")

include_directories(
	./src/
	./include/
)

set(CMAKE_C_FLAGS "-Wall -pipe -fPIC -std=gnu99 -fmessage-length=0 -g")
set(CMAKE_CXX_FLAGS "-Wall -pipe -fPIC -std=c++11 -fmessage-length=0 -g")

add_executable(${APP_TARGET_NAME} ${C_SOURCE_FILES} ${CXX_SOURCE_FILES})
