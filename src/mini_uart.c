#include <stdint.h>

void uart_send ( char c )
{
        volatile uint32_t *uart_base = (void*)0x3c000000 ;
        *uart_base = (uint32_t)c;
        return;
}

void uart_send_string(char* str)
{
	for (int i = 0; str[i] != '\0'; i ++) {
		uart_send((char)str[i]);
	}
}

void uart_init ( void )
{
        return;
}
