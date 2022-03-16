cmake_minimum_required(VERSION 3.20)
project(Sapisales C)


set(CMAKE_C_STANDARD 11)
set( CMAKE_BUILD_TYPE Debug )

add_executable(Sapisales sapi_sales/src/main.c sapi_sales/src/manager/lab2.c sapi_sales/headers/manager/lab2.h sapi_sales/src/manager/lab_manager.c sapi_sales/headers/manager/lab_manager.h sapi_sales/src/models/product.c sapi_sales/headers/models/product.h sapi_sales/src/models/user.c sapi_sales/headers/models/user.h shared/src/errors.c shared/headers/errors.h shared/src/messages.c shared/headers/messages.h shared/headers/useful.h sapi_sales/src/manager/lab3.c sapi_sales/headers/manager/lab3.h sapi_sales/src/models/user_array.c sapi_sales/headers/models/user_array.h sapi_sales/src/stack/product_stack.c sapi_sales/headers/stack/product_stack.h)

include_directories(
        sapi_sales/headers/manager
        sapi_sales/headers/models
        shared/headers
)