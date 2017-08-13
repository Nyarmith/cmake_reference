#include all the cpp files here
file (GLOB tstSRCS *.cpp)

add_executable(testFunc ${tstSRCS})

target_link_libraries(testFunc 
    libFunc 
    libgtest
    libgmock
    )

add_test(NAME testFunc
    COMMAND testFunc)
