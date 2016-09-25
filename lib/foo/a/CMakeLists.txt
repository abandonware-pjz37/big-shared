add_library(foo_a A.hpp A.cpp)
target_compile_definitions(foo_a PUBLIC FOO_A_VAR1)

install(
    TARGETS foo_a
    EXPORT "${targets_export_name}"
    LIBRARY DESTINATION "lib"
    ARCHIVE DESTINATION "lib"
    RUNTIME DESTINATION "bin"
    INCLUDES DESTINATION "include"
)
