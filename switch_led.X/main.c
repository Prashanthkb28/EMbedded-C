/*
 * File:   main.c
 * Author: home
 *
 * Created on January 10, 2024, 8:39 PM
 */


#include <xc.h>
#include "main.h"
#pragma config WDTE = OFF
void init_config()
{
    LED_ARRAY1_DDR = 0x00;
    LED_ARRAY1=0x00;
    
    /* configure RB0 as input port*/
    TRISB0 = 1;
}
void main(void) {
    init_config();
    unsigned char once =1;
    while(1)
    {
        /* level trigger : changes based on the value ex: volume button,keyboard
       
        if(SWITCH1 == PRESSED)          // detect the switch pressed/not
        {
            LED_ARRAY1 = ~LED_ARRAY1;
            for(unsigned int wait=50000;wait--;);
        }    */
        
        /* edge triggering : changes based on the change in value ex: ATM button , remote power button */
        /* to remove bouncing effect using for loop*/
         for(unsigned int wait=50000;wait--;);
        if(SWITCH1 == PRESSED && once)
        {
            once =0;
             LED_ARRAY1 = ~LED_ARRAY1;
            
        }
        if(SWITCH1 == RELEASE)
        {
            once =1;
        }
    }
}
