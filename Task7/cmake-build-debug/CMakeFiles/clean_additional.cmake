# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Task7_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Task7_autogen.dir\\ParseCache.txt"
  "Task7_autogen"
  )
endif()
