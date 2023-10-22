# idf_component_register(SRCS main.c)

if(ESP_PLATFORM)

file(GLOB_RECURSE SOURCES *.c)

idf_component_register(SRCS ${SOURCES}
                       INCLUDE_DIRS .
                       REQUIRES lvgl
                                lv_testfile)

else()
    message(FATAL_ERROR "LVGL LV examples: ESP_PLATFORM is not defined. Try reinstalling ESP-IDF.")
endif()
