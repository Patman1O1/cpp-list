#-----------------------------------------------------------------------------------------------------------------------
# Google Test
#-----------------------------------------------------------------------------------------------------------------------
include(GoogleTest)
enable_testing()

#-----------------------------------------------------------------------------------------------------------------------
# Target: cpp_list_test
# Alias: collections::cpp_list_test
# Type: Executable
# Dependencies: GTest::gtest_main, GTest::gmock_main, collections::cpp_list_headers
#-----------------------------------------------------------------------------------------------------------------------
# Target definition
add_executable(cpp_list_test)

# Target alias
add_executable(collections::cpp_list_test ALIAS cpp_list_test)

# Target sources
target_sources(cpp_list_test
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/cpp_list_test.cpp
)

# Target dependencies
target_link_libraries(cpp_list_test
    PRIVATE
        collections::cpp_list_headers
        GTest::gtest_main
        GTest::gmock_main
)

# Test discovery
gtest_discover_tests(cpp_list_test)