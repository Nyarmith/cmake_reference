add_executable(exponentiator main.cpp)

if (USE_MYMATH)
    target_link_libraries(exponentiator libFunc)
endif()
    
