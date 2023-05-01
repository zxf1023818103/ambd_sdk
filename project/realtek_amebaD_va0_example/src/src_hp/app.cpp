#include "FreeRTOS.h"
#include "task.h"
#include <stdio.h>

extern int test_model(void);

void app_task_routine(void *param)
{
    while (1) {
        test_model();
        vTaskDelay(1000);
    }
}

extern "C" void start_app(void)
{
    xTaskCreate(app_task_routine, "app", 4096, NULL, tskIDLE_PRIORITY + 1, NULL);
}
