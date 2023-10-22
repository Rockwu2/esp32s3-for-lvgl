if(ESP_PLATFORM)

file(GLOB_RECURSE SOURCES *.c)

idf_component_register(SRCS ${SOURCES}
                       INCLUDE_DIRS .
                       REQUIRES lvgl
                                freertos
                                esp_wifi
                                nvs_flash
                                esp_event)

else()
    message(FATAL_ERROR "LVGL LV examples: ESP_PLATFORM is not defined. Try reinstalling ESP-IDF.")
endif()
