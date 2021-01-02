# Note that headers are optional, and do not affect add_library, but they will not
# show up in IDEs unless they are listed in add_library.

set(MODULE_NAME "C1")

set(cpp_files
		c1.cpp
		)

set(header_files
		c1.h
		)

set(ui_files
		)

set(qrc_files
		)


# Make an automatic library - will be static or dynamic based on user setting
add_library(${MODULE_NAME} STATIC ${cpp_files} ${header_files} ${ui_files} ${qrc_files})

# We need this directory, and users of our library will need it too
target_include_directories(${MODULE_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# This depends on (header only) boost
target_link_libraries(${MODULE_NAME} PRIVATE Qt${QT_VERSION_MAJOR}::Core)

# All users of this library will need at least C++14
target_compile_features(${MODULE_NAME} PUBLIC cxx_std_17)
