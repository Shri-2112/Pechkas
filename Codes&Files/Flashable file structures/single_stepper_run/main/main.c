#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_timer.h"

#define STEP_PIN GPIO_NUM_18
#define DIR_PIN  GPIO_NUM_19

#define STEP_DELAY_US 800   // speed control

static void step_motor(void)
{
    gpio_set_level(STEP_PIN, 1);
    ets_delay_us(STEP_DELAY_US);
    gpio_set_level(STEP_PIN, 0);
    ets_delay_us(STEP_DELAY_US);
}

void app_main(void)
{
    gpio_config_t io_conf = {
        .pin_bit_mask = (1ULL << STEP_PIN) | (1ULL << DIR_PIN),
        .mode = GPIO_MODE_OUTPUT,
        .pull_up_en = GPIO_PULLUP_DISABLE,
        .pull_down_en = GPIO_PULLDOWN_DISABLE,
        .intr_type = GPIO_INTR_DISABLE
    };
    gpio_config(&io_conf);

    while (1) {

        // CLOCKWISE
        gpio_set_level(DIR_PIN, 1);
        int64_t start_time = esp_timer_get_time();
        while ((esp_timer_get_time() - start_time) < 5000000) {
            step_motor();
        }

        vTaskDelay(pdMS_TO_TICKS(1000));

        // ANTICLOCKWISE
        gpio_set_level(DIR_PIN, 0);
        start_time = esp_timer_get_time();
        while ((esp_timer_get_time() - start_time) < 5000000) {
            step_motor();
        }

        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}