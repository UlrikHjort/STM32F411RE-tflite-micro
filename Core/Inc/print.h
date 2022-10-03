#ifndef INC_PRINT_H_
#define INC_PRINT_H_

#include "usart.h"
#include "gpio.h"
#include <stdio.h>

#define HUART huart2

#ifdef __GNUC__
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif /* __GNUC__ */

PUTCHAR_PROTOTYPE {
	HAL_UART_Transmit(&HUART, (uint8_t*) &ch, 1, 0xFFFF);
	return ch;
}

#endif /* INC_PRINT_H_ */
