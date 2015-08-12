cmake_minimum_required(VERSION 2.8)
project(betterave)

find_package(PkgConfig)

set(ENABLE_GRAPHVIZ OFF)
set(ENABLE_PYTHON OFF)
set(ENABLE_JAVA OFF)
set(ENABLE_SDL OFF)
set(JAVA_LIBMAWT_PATH /etc/java-config-2/current-system-vm/jre/lib/amd64/xawt)

include(${CMAKE_CURRENT_SOURCE_DIR}/src/core/CMakeLists.txt)

add_library(BETTERAVE_USER
	src/parts/Gps.h		src/parts/Gps.cpp
	src/parts/Compass.h	src/parts/Compass.cpp
	src/parts/State.h	src/parts/State.cpp
	src/parts/Auto.h	src/parts/Auto.cpp
)

add_executable(ship src/mains/Ship.cpp)
target_link_libraries(ship BETTERAVE_USER BETTERAVE_CORE ${LIBS})