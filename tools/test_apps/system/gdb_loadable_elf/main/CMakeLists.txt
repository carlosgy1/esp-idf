idf_component_register(SRCS "hello_world_main.c"
                    INCLUDE_DIRS ""
                    PRIV_REQUIRES vfs spi_flash)
target_compile_options(${COMPONENT_LIB} PRIVATE "-Wno-format")
