/**
 *  totem.c
 *
 *  Totem OS Core functionality
 *  
 *  Todo features:
 *  Control LED lights
 *  FFT from mic input
 *  display text
 *  display pictures/gifs
 *  connect via bluetooth
 *  load text from bluetooth
 *  load pics from bluetooth
 *  resize pics
 *  music visualization
 **/

#include <stdio.h>
#include "totem.h"
#include "gpio.h"

void main() {
    printf("test");
    setup_io();
}

/**
 * wave() - example function for controlling gpio
 **/
void wave() {
    // Set GPIO pin 4 to output
    INP_GPIO(4); // must use INP_GPIO before we can use OUT_GPIO
    OUT_GPIO(4);
    
    while(1) {
        GPIO_SET = 1<<4;
        GPIO_CLR = 1<<4;
    }
}
