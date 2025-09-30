# Specify the minimum version of CMake required.
cmake_minimum_required(VERSION 3.10)

# Set the project name. This also creates variables like PROJECT_NAME.
project(AssetManager)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/out)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/out)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/out)

# Define the executable target.
# The first argument is the name of the executable to be created.
# Subsequent arguments are the source files needed to build it.
add_executable(asset_manager
    main.cpp
    src/DigitalAsset.cpp
)

# Tell CMake where to find header files for the 'asset_manager' target.
# The compiler will now search in the 'header' directory for any #include directives.
target_include_directories(asset_manager PRIVATE header)