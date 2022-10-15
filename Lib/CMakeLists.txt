project(Lib)

# Add source files
file(GLOB_RECURSE SOURCE_FILES
        *.c
        *.cpp)

# Add header files
file(GLOB_RECURSE HEADER_FILES
        *.h
        *.hpp)

add_library(${PROJECT_NAME} ${HEADER_FILES} ${SOURCE_FILES} src/Calc/Vector.cpp include/Calc/Vector.h)

INCLUDE(FindPkgConfig)


target_include_directories( ${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 23)
