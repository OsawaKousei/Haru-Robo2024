cmake_minimum_required(VERSION 3.8)
project(path_following)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

#依存関係を自動で解決
find_package(ament_cmake_auto REQUIRED)
ament_auto_find_build_dependencies()

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_auto_add_executable(
  path_following_node src/path_following_node.cpp
)

ament_auto_add_executable(
  dammy_path_node src/dammy_path_node.cpp
)

ament_auto_add_executable(
  pid_pos_node src/pid_pos_node.cpp
)

## msg/srv generation
#file(GLOB ${PROJECT_NAME}_msg_files RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} msg/*)
#file(GLOB ${PROJECT_NAME}_srv_files RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} srv/*)
file(GLOB ${PROJECT_NAME}_action_files RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} action/*)
rosidl_generate_interfaces(
        ${PROJECT_NAME}
        #${${PROJECT_NAME}_msg_files}  # msg使わないならコメントアウト
        #${${PROJECT_NAME}_srv_files}  # srv使わないならコメントアウト
        ${${PROJECT_NAME}_action_files}  # action使わないならコメントアウト
        DEPENDENCIES ${${PROJECT_NAME}_FOUND_BUILD_DEPENDS}
)

rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} rosidl_typesupport_cpp)
target_link_libraries(path_following_node "${cpp_typesupport_target}")
target_link_libraries(dammy_path_node "${cpp_typesupport_target}")
target_link_libraries(pid_pos_node "${cpp_typesupport_target}")

#実行ファイルのビルド、共有ファイルのインストール
ament_auto_package(
  INSTALL_TO_SHARE
)
