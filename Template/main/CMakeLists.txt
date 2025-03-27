set(SOURCES main.cpp Template_Class.h Template_Class.cpp)
idf_component_register(SRCS ${SOURCES}
                    INCLUDE_DIRS .)
