cmake_minimum_required(VERSION 4.0)
project(ttstwitch LANGUAGES CXX)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
#set(CMAKE_CXX_SCAN_FOR_MODULES OFF)
set(CMAKE_CXX_STANDARD 20)
set(CMAEK_STANDARD_REQUIRED ON)
set(SOURCE_FILES src/)

include(FetchContent)


FetchContent_Declare(
json
GIT_REPOSITORY https://github.com/nlohmann/json.git
GIT_TAG v3.12.0
)

FetchContent_MakeAvailable(json)

add_executable(${PROJECT_NAME} ${SOURCE_FILES}/main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE nlohmann_json::nlohmann_json)
