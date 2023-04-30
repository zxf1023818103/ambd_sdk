#include "FreeRTOS.h"
#include "task.h"
#include "timers.h"
#include "queue.h"
#include "semphr.h"
#include <cstdio>

void km4_main_task(void *param)
{
    while (1)
    {
        std::printf("km4_main_task_routine\r\n");
        ::vTaskDelay(1000);
    }
}

extern "C" void km4_app_main(void)
{
    xTaskCreate((TaskFunction_t)km4_main_task, "main_task", 10240, NULL, 1, NULL);
}
