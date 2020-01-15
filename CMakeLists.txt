cmake_minimum_required(VERSION 2.8.3)
project(common_srv)

add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  std_msgs
  message_generation
  genmsg
  
)

#add_message_files(
#  FILES
#)

add_service_files(
   FILES
   get_state.srv
   set_int.srv
) 

generate_messages(
   DEPENDENCIES
   std_msgs
)

catkin_package(
  INCLUDE_DIRS 
  LIBRARIES
  CATKIN_DEPENDS
    roscpp
    std_msgs
  DEPENDS
    system_lib
)


include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${catkin_INCLUDE_DIRS}
)


FILE(GLOB SOURCE_FILES *.hpp *.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
        )


#add_executable(${PROJECT_NAME} ${SOURCE_FILES})
#target_link_libraries(${PROJECT_NAME} ${catkin_LIBRARIES})
