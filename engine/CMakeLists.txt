
set(PROJECT ${CPACK_PROJECT_NAME}-engine)

project(${PROJECT} VERSION 0.1.0)

add_subdirectory(tests)

add_library(${PROJECT_NAME} src/curlcpp.h src/curlcpp/core.h src/curlcpp/application.cpp src/curlcpp/application.h)
target_link_libraries(${PROJECT_NAME} PUBLIC Logging) 