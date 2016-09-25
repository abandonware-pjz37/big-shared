add_library(foo_all SHARED all.cpp all.hpp)
target_link_libraries(foo_all PUBLIC foo_a foo_b)

install(
    TARGETS foo_all
    EXPORT "${targets_export_name}"
    LIBRARY DESTINATION "lib"
    ARCHIVE DESTINATION "lib"
    RUNTIME DESTINATION "bin"
    INCLUDES DESTINATION "include"
)
