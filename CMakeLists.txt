cmake_minimum_required(VERSION 3.2)
project(Highload_HTTP_Server)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main/main.cpp server/Buffer.cpp server/Buffer.h main/Configuration.cpp main/Configuration.h server/Server.cpp server/Server.h HTTP/Response.h HTTP/Request.h HTTP/handlers.cpp HTTP/handlers.h HTTP/MIMETypes.cpp HTTP/MIMETypes.h HTTP/Methods.cpp HTTP/Methods.h HTTP/Versions.cpp HTTP/Versions.h main/utils.h HTTP/StatusCodes.cpp HTTP/StatusCodes.h HTTP/URLPaths.cpp HTTP/URLPaths.h FS/paths.cpp FS/paths.h HTTP/Request.cpp HTTP/Response.cpp FS/FileTypes.cpp FS/FileTypes.h)
add_executable(Highload_HTTP_Server ${SOURCE_FILES})

target_link_libraries (Highload_HTTP_Server ${CMAKE_THREAD_LIBS_INIT})
target_link_libraries (Highload_HTTP_Server ev)
target_link_libraries (Highload_HTTP_Server config++)