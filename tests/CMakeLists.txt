ADD_EXECUTABLE(
  test-suite-fh-2023-06-12

  sensor-mock-suite-basic.cpp
  switch-mock-suite.cpp

  hysteresis-nopoly-suite-falls_below_range.cpp
  hysteresis-nopoly-suite-nop_when_within_range.cpp
  hysteresis-nopoly-suite-rises_above_range.cpp
  hysteresis-nopoly-suite-rises_above_range_when_on.cpp
  )

TARGET_LINK_LIBRARIES(
  test-suite-fh-2023-06-12

  lib-fh-2023-06-12
  gtest_main 
  )
