cmake_minimum_required(VERSION 3.10)

project(CmakeDemo2)

aux_source_directory(./src DIR_SRCS)

include_directories(include)

add_executable(CmakeDemo2 ${DIR_SRCS})