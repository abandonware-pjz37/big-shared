add_library(foo_b B.hpp B.cpp)

install(
    TARGETS foo_b
    EXPORT "${targets_export_name}"
    LIBRARY DESTINATION "lib"
    ARCHIVE DESTINATION "lib"
    RUNTIME DESTINATION "bin"
    INCLUDES DESTINATION "include"
)
