cmake_minimum_required(VERSION 3.12)
project(codechef CXX)

set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_compile_options(-fsanitize=address -g)

find_package(GTest REQUIRED)
find_package(Threads REQUIRED)

set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(BUILD_DIR ${CMAKE_BINARY_DIR})

file(GLOB SRCS ${SRC_DIR}/*.cpp)

foreach(SRC_FILE ${SRCS})
    get_filename_component(TARGET_NAME ${SRC_FILE} NAME_WE)
    add_executable(${TARGET_NAME} ${SRC_FILE})
    target_compile_definitions(${TARGET_NAME} PRIVATE LOCAL)
    target_link_libraries(${TARGET_NAME} 
        GTest::GTest 
        GTest::Main 
        Threads::Threads
        -fsanitize=address
    )
    set_target_properties(${TARGET_NAME} PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${BUILD_DIR}
    )
endforeach()

add_custom_target(clean-all
    COMMAND ${CMAKE_COMMAND} -E remove_directory ${BUILD_DIR}
)
