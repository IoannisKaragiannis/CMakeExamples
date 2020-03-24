# Set the minimum version of CMake that can be used
# To find the CMake version run $ cmake --version
cmake_minimum_required(VERSION 3.0)

# Build with debug information
set(CMAKE_BUILD_TYPE Debug)

# Tell the compiler that the code and compiling is using c++-14 standard syntax
set(CMAKE_CXX_FLAGS "-std=c++14")

# Create a PROJECT_NAME variable with the name of the project
set(
    PROJECT_NAME
    add_two_numbers
)

# Set the project name
project(${PROJECT_NAME} VERSION 1.0
    DESCRIPTION "Project to add two numbers"
)

# Create a SOURCES variable with a link to all the cpp files to compile
set(SOURCES
    src/app.cpp
    src/operations.cpp
)

# Add an exetubale with the above sources
add_executable(
    ${PROJECT_NAME}
    ${SOURCES}
)

# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
target_include_directories(
    ${PROJECT_NAME} 
    PRIVATE
    ${PROJECT_SOURCE_DIR}/include
)

# in order to run cmake go to your project's root directory and type the following on your temrinal:
# $ mkdir build
# $ cd build
# $ cmake ../
# After creating the respective files successfully under the build directory 
# $ make
# ./add_two_numbers