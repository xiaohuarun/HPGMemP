cmake_minimum_required(VERSION 3.5)
project(MyProject)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 11)

# 添加可执行文件
add_executable(main main.cpp mem_alloc.c mem_pool_palloc.c global.cpp)

# 设置包含目录，包含当前目录和相关的头文件目录
target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# 如果需要链接额外的库，可以添加类似如下的命令：
# target_link_libraries(main PUBLIC some_library)

# 如果需要定义额外的编译选项，例如优化选项等，可以使用如下的命令：
target_compile_options(main PRIVATE -fpermissive)



