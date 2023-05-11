#include "FreeRTOS.h"
#include "task.h"
#include <cstdio>
#include <cinttypes>

#include "tensorflow/lite/micro/cortex_m_generic/debug_log_callback.h"

extern int test_model(void);
extern void person_detection_benchmark(void);
extern void keyword_benchmark(void);

static void my_debug_log(const char* s)
{
    std::printf("%s", s);
}

void app_task_routine(void *param)
{
    while (1) {
        // test_model();
        // person_detection_benchmark();        
        keyword_benchmark();
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

extern "C" void start_app(void)
{
    RegisterDebugLogCallback(my_debug_log);
    // xTaskCreate(app_task_routine, "app", 4096, NULL, tskIDLE_PRIORITY + 1, NULL);
}
