/*
 * main.c
 * This is a code which:
 * >>Test LCD driver by displaying some characters and string
 *  Created on: 2/2/2018
 *      Author: Asmaa
 */

#include<util/delay.h>
#include"Std_Types.h"
#include"Macros.h"
#include"DIO_interface.h"
#include"LCD_interface.h"

int main(void)
{
	LCD_vidInit();

	LCD_vidWriteChar('A');
	LCD_vidWriteChar('S');
	LCD_vidWriteChar('M');
	LCD_vidWriteChar('A');
	LCD_vidWriteChar('A');

	LCD_vidWriteString("MOHAMED");

	return 0;
}
