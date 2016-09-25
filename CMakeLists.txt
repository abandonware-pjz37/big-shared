cmake_minimum_required(VERSION 3.2)
project(foo)

include_directories("${CMAKE_CURRENT_BINARY_DIR}")

# Installation (https://github.com/forexample/package-example) {

set(config_install_dir "lib/cmake/${PROJECT_NAME}")

set(generated_dir "${CMAKE_CURRENT_BINARY_DIR}/generated")

set(project_config "${generated_dir}/${PROJECT_NAME}Config.cmake")
set(targets_export_name "${PROJECT_NAME}Targets")
set(namespace "${PROJECT_NAME}::")

include(CMakePackageConfigHelpers)

# Use variables:
#   * targets_export_name
#   * PROJECT_NAME
configure_package_config_file(
    "cmake/Config.cmake.in"
    "${project_config}"
    INSTALL_DESTINATION "${config_install_dir}"
)

install(
    DIRECTORY "lib/foo"
    DESTINATION "include"
    FILES_MATCHING PATTERN "*.hpp"
)

install(
    FILES "${project_config}"
    DESTINATION "${config_install_dir}"
)

install(
    EXPORT "${targets_export_name}"
    NAMESPACE "${namespace}"
    DESTINATION "${config_install_dir}"
)
# }

include_directories(lib)

add_subdirectory(lib/foo)
add_subdirectory(app/foo)
