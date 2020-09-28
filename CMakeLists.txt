CMAKE_MINIMUM_REQUIRED(VERSION 3.14)

PROJECT(
    Boilerplate
    VERSION     0.1.0
    LANGUAGES   C CXX
)

# System Libraries

FIND_PACKAGE(PkgConfig REQUIRED)

SET(Boost_USE_STATIC_LIBS ON)

FIND_PACKAGE(
    Boost
    REQUIRED
    COMPONENTS
        filesystem
        system
        thread
)

# External Libraries

ADD_SUBDIRECTORY(
    external/spdlog
    EXCLUDE_FROM_ALL
)

ADD_SUBDIRECTORY(
    external/gflags
    EXCLUDE_FROM_ALL
)


# Ouputs

ADD_EXECUTABLE(
    ${PROJECT_NAME}
    src/main.cpp
)

TARGET_INCLUDE_DIRECTORIES(
    ${PROJECT_NAME}
    PRIVATE
        ${Boost_INCLUDE_DIRS}
)

TARGET_LINK_LIBRARIES(
    ${PROJECT_NAME}
    PRIVATE
        spdlog::spdlog
        gflags::gflags
        ${Boost_LIBRARIES}
)

TARGET_COMPILE_FEATURES(
    ${PROJECT_NAME}
    PRIVATE
        cxx_std_14
)
