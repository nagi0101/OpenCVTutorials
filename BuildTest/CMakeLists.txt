# CMakeList.txt : CMake project for BuildTest, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (BuildTest "BuildTest.cpp" "BuildTest.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET BuildTest PROPERTY CXX_STANDARD 20)
endif()

# Include Libraries
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(BuildTest ${OpenCV_LIBS})
