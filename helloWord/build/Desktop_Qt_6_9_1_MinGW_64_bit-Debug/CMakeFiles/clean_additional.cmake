# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\helloWord_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\helloWord_autogen.dir\\ParseCache.txt"
  "helloWord_autogen"
  )
endif()
