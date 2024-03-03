cmake_minimum_required(VERSION 3.8)
project(bt)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake_auto REQUIRED)
ament_auto_find_build_dependencies()  # packageから自動でfind_packageしてくれる

install(DIRECTORY
  config
  DESTINATION share/${PROJECT_NAME}/
)

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
bt_node src/bt_node.cpp
)

ament_auto_add_executable(
pos_bt_node src/pos_bt_node.cpp
)

ament_auto_add_executable(
joy_control_node src/joy_control_node.cpp
)

#ライブラリのビルド
ament_auto_package(INSTALL_TO_SHARE)
