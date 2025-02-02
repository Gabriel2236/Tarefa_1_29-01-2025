#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

#define g_led 11 
#define y_led 12
#define r_led 13

uint ledon = 1;

bool repeating_timer_callback(struct repeating_timer *t) {
    switch (ledon) {
        case 0:
           
            gpio_put(g_led, false);
            gpio_put(r_led, true);

            ledon++;
            break;

        case 1:
           
            gpio_put(r_led, false);
            gpio_put(y_led, true);
            ledon++;
            
            break;

        case 2:
            
            gpio_put(y_led, false);
            gpio_put(g_led, true);

            ledon = 0;
            break;
    }
    return true; // Adiciona retorno booleano
}

int main() {
    stdio_init_all();

    gpio_init(g_led);
    gpio_set_dir(g_led, GPIO_OUT);

    gpio_init(y_led);
    gpio_set_dir(y_led, GPIO_OUT);

    gpio_init(r_led);
    gpio_set_dir(r_led, GPIO_OUT);

    gpio_put(r_led, true);

    struct repeating_timer temporizador;
    add_repeating_timer_ms(3000, repeating_timer_callback, NULL, &temporizador);

    while (true) {  

        sleep_ms(1000);
        printf("Loop feito");
        
    }

return 0;
}