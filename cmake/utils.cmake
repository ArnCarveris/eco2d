function(link_system_libs target_name)
    if (WIN32)
        target_link_libraries(${target_name} winmm)
    elseif (APPLE)
        target_link_libraries(${target_name} pthread m dl)
    elseif (UNIX)
        target_link_libraries(${target_name} pthread m dl atomic)
    endif()
endfunction()

function(setup_build_dirs)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/)
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/)
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_DEBUG ${CMAKE_BINARY_DIR})
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR})
endfunction()