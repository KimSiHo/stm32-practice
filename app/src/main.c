#include "stm32f1xx.h"

static void delay(volatile uint32_t count)
{
    while (count--) {
        __NOP();
    }
}

int main(void)
{
    /* GPIOA clock enable */
    RCC->APB2ENR |= RCC_APB2ENR_IOPAEN;

    /*
     * PA5: General purpose output push-pull
     * MODE5 = 10 : Output mode, max 2 MHz
     * CNF5  = 00 : General purpose push-pull
     */
    GPIOA->CRL &= ~(GPIO_CRL_MODE5 | GPIO_CRL_CNF5);
    GPIOA->CRL |= GPIO_CRL_MODE5_1;

    while (1)
    {
        GPIOA->ODR ^= GPIO_ODR_ODR5;
        delay(500000);
    }
}
