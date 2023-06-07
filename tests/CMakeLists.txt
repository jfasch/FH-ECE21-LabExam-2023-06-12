ADD_EXECUTABLE(
  test-suite-fh-2023-06-12

  sensor-mock-suite-basic.cpp
  switch-mock-suite.cpp
  )

TARGET_LINK_LIBRARIES(
  test-suite-fh-2023-06-12

  lib-fh-2023-06-12
  gtest_main 
  )
