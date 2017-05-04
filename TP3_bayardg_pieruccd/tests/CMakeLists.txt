add_executable(test_simple test_gtest.cxx)
target_link_libraries(test_simple gtest)

include_directories (${CMAKE_SOURCE_DIR}/src
  ${Boost_INCLUDE_DIRS}
  )

add_executable(test_constructor test_constructor.cxx)
target_link_libraries(test_constructor
toto
gtest)

add_executable(test_operator test_operator.cxx)
target_link_libraries(test_operator
toto
gtest)
