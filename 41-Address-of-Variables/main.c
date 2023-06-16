/*
    Author: Matt Johnson
    Subject: address of variables (pointers)
    Purpose:
    Date: 06/16/2023

    Notes:

        %p -- format specifier to print a
        memory address (aka a pointer)

        The pointer (memory location address)
        is compiler and hardware-specific. Later
        when we explore ARM Cortex Mx based
        STM32 Microcontroller, you will see
        that the pointer size is of 4 bytes
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char a1 = 'A';
    char a2 = 'P';
    char a3 = 'p';
    char a4 = 'l';
    char a5 = 'e';
    char a6 = ':';
    char a7 = ')';

    printf("Address of variable a1 = %p\n", &a1);
    printf("Address of variable a2 = %p\n", &a2);
    printf("Address of variable a3 = %p\n", &a3);
    printf("Address of variable a4 = %p\n", &a4);
    printf("Address of variable a5 = %p\n", &a5);
    printf("Address of variable a6 = %p\n", &a6);
    printf("Address of variable a7 = %p\n", &a7);

    return 0;
}
