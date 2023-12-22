cmake_minimum_required(VERSION 2.8)

project( examples )

find_package( OpenCV REQUIRED )
find_package( OpenGL )

if(OPENGL_FOUND)
  include_directories( ${OpenCV_INCLUDE_DIRS} ${OPENGL_INCLUDE_DIRS} )
else()
  include_directories( ${OpenCV_INCLUDE_DIRS} )
endif()

#########################
# FOR LEARNING OPENCV 3 #
#########################

###############
### COMPILE ###
###############

# COMPILE EXAMPLES
# add_executable(example_10-03 example_10-03.cpp)
# target_link_libraries(example_10-03 ${OpenCV_LIBS})

add_executable(exercises_10_1 exercise/Exercises_10_1.cpp)
target_link_libraries(exercises_10_1 ${OpenCV_LIBS})





# if(OPENGL_FOUND)
#   add_executable( example_09-04 example_09-04.cpp )
# endif()

# if(OPENGL_FOUND)
#   target_link_libraries( example_09-04 ${OpenCV_LIBS} ${OPENGL_LIBRARIES} )
# endif()




