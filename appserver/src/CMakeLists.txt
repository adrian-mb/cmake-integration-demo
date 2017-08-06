add_executable(appserver
    main.cpp
)

add_subdirectory(
    configuration
)

target_link_libraries(appserver
    configuration
)
