/**
 * @file lv_demo_benchmark.h
 *
 */

#ifndef LV_DEMO_BENCHMARK_COPY_H
#define LV_DEMO_BENCHMARK_COPY_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "../lv_demos.h"
// #include "../lv_demos.h"
// #include <string.h>
// #include "../../../../../freertos/FreeRTOS.h"
// #include "../../../../../freertos/task.h"
// #include "../../../../../freertos/event_groups.h"
// #include "../../../../../esp_system.h"
// #include "../../../../../esp_wifi.h"
// #include "../../../../../esp_event.h"
// #include "../../../../../esp_log.h"
// #include "../../../../../nvs_flash.h"

// #include "../../../../../lwip/err.h"
// #include "../../../../../lwip/sys.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/
typedef void finished_cb_t(void);


/**********************
 * GLOBAL PROTOTYPES
 **********************/
void lv_demo_benchmark(void);

void lv_demo_benchmark_close(void);

void lv_demo_benchmark_run_scene(int_fast16_t scene_no);

void lv_demo_benchmark_set_finished_cb(finished_cb_t * finished_cb);

void lv_demo_event_wifi(void);


/**
 * Make the benchmark work at the highest frame rate
 * @param en true: highest frame rate; false: default frame rate
 */
void lv_demo_benchmark_set_max_speed(bool en);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*LV_DEMO_BENCHMARK_H*/
