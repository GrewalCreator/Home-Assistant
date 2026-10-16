
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "sdkconfig.h"

void app_main(void)
{
    printf("ESP32 test started!\n");
    printf("Chip target: %s\n", CONFIG_IDF_TARGET);

    int count = 0;

    while (1)
    {
        printf("ESP32 is working! Count: %d\n", count);
        count++;

        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
