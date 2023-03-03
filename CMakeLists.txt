cmake_minimum_required(VERSION 3.23)

project(Algorithms)

set(CMAKE_CXX_STANDARD 17)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

#DataStructures
add_executable(Stack ./DataStructures/Stack.cpp)
set_target_properties(Stack PROPERTIES FOLDER "DataStructures")

#Search
add_executable(LinearSearch ./Search/LinearSearch.cpp)
add_executable(BinarySearch ./Search/BinarySearch.cpp)
set_target_properties(LinearSearch BinarySearch PROPERTIES FOLDER "Search")

#Sorting
add_executable(BubbleSort ./Sorting/BubbleSort.cpp)
add_executable(SelectionSort ./Sorting/SelectionSort.cpp)
add_executable(InsertionSort ./Sorting/InsertionSort.cpp)
add_executable(QuickSort ./Sorting/QuickSort.cpp)
set_target_properties(BubbleSort SelectionSort InsertionSort QuickSort PROPERTIES FOLDER "Sorting")
