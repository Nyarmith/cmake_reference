set (libfunc_SRCS
    power.hpp
    power.cpp)
add_library(libFunc ${libfunc_SRCS})


#specify the include directories exported by this library
#i.e. make the headers here visible to everyone else using this lib
#with the absolute path provided by CMAKE_CURRENT_SOURCE_DIR
target_include_directories(libFunc PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
