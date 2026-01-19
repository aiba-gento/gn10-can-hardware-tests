#include "app/app.hpp"

void run()
{
    HAL_GPIO_TogglePin(LED_A_GPIO_Port, LED_A_Pin);
    HAL_Delay(100);
}