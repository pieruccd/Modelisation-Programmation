cmake_minimum_required(VERSION 2.8.11)

#set(EXECUTABLE_OUTPUT_PATH build/${CMAKE_BUILD_TYPE})
set(EXECUTABLE_OUTPUT_PATH .)


set(CMAKE_CXX_FLAGS "-g -Wall")

set(CMAKE_BUILD_TYPE Release)

project(Generateur_Nombre_Aleatoire)

add_subdirectory(src)
add_subdirectory(doc)
add_subdirectory(tests)
enable_testing ()

# Télécharge googletest au moment de la configureation
configure_file(CMakeLists.txt.in
               googletest-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/googletest-download )
execute_process(COMMAND ${CMAKE_COMMAND} --build .
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/googletest-download )

# Ajout googletest directement au moment de la compilation
add_subdirectory(${CMAKE_BINARY_DIR}/googletest-src)

include_directories(${gtest_SOURCE_DIR}/include)

add_test (NAME test_simple COMMAND test_simple)
add_test (NAME test_operator COMMAND test_operator)
add_test (NAME test_constructor COMMAND test_constructor)

add_custom_target(check COMMAND ${CMAKE_CTEST_COMMAND})
add_dependencies(check test_simple)
add_dependencies(check test_operator)
add_dependencies(check test_constructor)
