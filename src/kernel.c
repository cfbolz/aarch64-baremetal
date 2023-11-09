#include "mini_uart.h"

void kernel_main(void)
{
	uart_init();
	uart_send_string("Hello, world!\r\n");

        int res = 0;
        for (int i = 0; i < 100000000; i++) {
            res ^= i;
        }
	uart_send_string("done\r\n");
        while (1);
}
