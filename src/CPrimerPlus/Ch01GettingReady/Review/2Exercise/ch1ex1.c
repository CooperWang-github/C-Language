/**
 * @file ch1ex1.c
 * @brief 
 * @author WANGHUI (479058251@qq.com)
 * @version 1.0
 * @date 2022-12-10
 * 
 * @copyright Copyright (c) 2022 
 * 
 */

/*
    1. You have just been employed by MacroMuscle, Inc. (Software for Hard Bodies). The 
    company is entering the European market and wants a program that converts inches 
    to centimeters (1 inch = 2.54 cm). The company wants the program set up so that it 
    prompts the user to enter an inch value. Your assignment is to define the program 
    objectives and to design the program (steps 1 and 2 of the programming process).
 */

#include <stdio.h>

int main(void)
{
    // convert inches to centimeters(1 inch = 2.54 cm) 1英寸 = 2.54 厘米
    float inch, cm;

    puts("This program will convert inches to centimeters. Please enter: ");
    scanf("%f", &inch);
    cm = 2.54 * inch;
    printf("%.2f inch = %.2f cm\n", inch, cm);

    return 0;
}