# Cortex-M4 target
add_library(cortex_m4_sdk STATIC
    cortex_m4_code.c
)

# Specify the ARM GCC compiler options for Cortex-M4
target_compile_options(cortex_m4_sdk PRIVATE
    -mcpu=cortex-m4
    -mthumb
    -mfloat-abi=soft
)
