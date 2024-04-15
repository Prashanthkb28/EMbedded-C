
#include <xc.h>
#include"digital_keypad.h"
#define _XTAL_FREQ 20000000
#pragma config WDTE=OFF

void init_config(void)
{
    init_digital_keypad();
    
    TRISC1=0x00;
}

void main(void) {
    init_config();
    unsigned char key;
    while (1) {
        key=read_digital_keypad(LEVEL);
        if(key == SW1)
        {
            RC1=1;
            __delay_ms(1000);
            RC1=0;
           
        }
        

    }
}
