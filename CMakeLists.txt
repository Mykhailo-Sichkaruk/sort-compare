cmake_minimum_required(VERSION 3.12)
project(MyProject)

set(CMAKE_C_STANDARD 99)

# Include directories
include_directories(Include)

# Source files
set(SOURCES
        Sorting/Sort_N_1.c
        Sorting/Sort_N_2.c
        Sorting/Sort_N_3.c
        utils/Time.c
        utils/Time_caclulations.c
        Input_Output.c
        main.c
        menu.c
)

# Create executable
add_executable(myproject ${SOURCES})
