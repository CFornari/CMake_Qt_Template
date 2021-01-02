set(cpp_files
		main.cpp
		)

set(header_files
		)

set(ui_files
		)

set(qrc_files
		)

add_executable(${PROJECT_NAME} ${cpp_files} ${header_files} ${ui_files} ${qrc_files})

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)

target_link_libraries(${PROJECT_NAME} PRIVATE C1 fmt::fmt)
