/*
 */

#include <avr/io.h>

void init(void)
{
    DDRA |= (1<<PA1);
    DDRA &= ~(1<<PA0);
}

int main(void)
{

    init();

    while(1)
    {
        if((PINA & (1<<PA0)) ==0)
        {
            PORTA &= ~(1<<PA1);
        }
        else
        {
            PORTA |= (1<<PA1);
        }
    }

    return 0;
}
