#include <csl_gpio.h>

/**
 * main.c
 */
int main(void)
{
    GPIO_Handle GPIOHandle = (GPIO_Handle) 0U;
    CSL_GpioObj GPIOObject = {0U, 0U};
    CSL_Status GPIOStatus = 0U;

    GPIOHandle = GPIO_open(&GPIOObject, &GPIOStatus);
	return 0;
}
