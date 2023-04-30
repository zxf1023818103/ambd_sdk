#include "FreeRTOS.h"
#include <stdio.h>

void km0_main_task_routine(void *param)
{
    while (1)
    {
        printf("km0_main_task_routine\r\n");
        vTaskDelay(1000);
    }
}

void on_km0_task_create(void)
{
    xTaskCreate((TaskFunction_t)km0_main_task_routine, "km0 main task", 1024, NULL, 1, NULL);
}
