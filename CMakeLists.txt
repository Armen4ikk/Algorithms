cmake_minimum_required(VERSION 3.23)

project(Algorithms)

set(CMAKE_CXX_STANDARD 17)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

#Search
add_executable(LinearSearch ./Search/LinearSearch.cpp)
add_executable(BinarySearch ./Search/BinarySearch.cpp)
set_target_properties(LinearSearch BinarySearch PROPERTIES FOLDER "Sorting")

#Sorting
add_executable(BubbleSort ./Sorting/BubbleSort.cpp)
add_executable(SelectionSort ./Sorting/SelectionSort.cpp)
add_executable(InsertionSort ./Sorting/InsertionSort.cpp)
set_target_properties(BubbleSort SelectionSort InsertionSort PROPERTIES FOLDER "Sorting")
