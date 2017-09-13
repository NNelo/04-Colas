project(test)

add_subdirectory(lib/gtest-1.8.0)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(run_test
        Colas-test.cpp
        Ej-01-test.cpp
        ../Ej-01/sonIguales.cpp
        Ej-02-test.cpp
        ../Ej-02/esPalidromo.cpp
        Ej-03-test.cpp
        Ej-04-test.cpp
        Ej-05-test.cpp
        )

target_link_libraries(run_test gtest gtest_main)