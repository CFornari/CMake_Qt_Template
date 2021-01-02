
set(MODULE_NAME "m1")

# Tests need to be added as executables first
add_executable(${MODULE_NAME} m1_test.cpp)

# I'm using C++17 in the test
target_compile_features(${MODULE_NAME} PRIVATE cxx_std_17)

# Should be linked to the main library, as well as the Catch2 testing library
target_link_libraries(${MODULE_NAME} PRIVATE M1 Qt${QT_VERSION_MAJOR}::Test)

# If you register a test, then ctest and make test will run it.
# You can also run examples and check the output, as well.
add_test(NAME ${MODULE_NAME}_test COMMAND ${MODULE_NAME}) # Command can be a target
