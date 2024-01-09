/*
 * File:   main.c
 * Author: prashanth k b
 *
 * Created on January 9, 2024, 12:59 PM
 */


#include <xc.h>
/*to disable the watch dog timer*/
#pragma config WDTE = OFF

void init_config()
{
    /*initial configuration*/
    /*consider PORTD as output port*/
    TRISD =0x00;
}

void main(void) {
    
    init_config();
    while(1)
    {
        /* logic*/
        /* turn on  all alternative lED's Of PORTD*/
        PORTD=0xAA;
        for(unsigned int wait=50000;wait--;);
        /* turn off All alterbnative LED's*/
        PORTD=0x00;
        for(unsigned int wait=50000;wait--;);
    }
}
