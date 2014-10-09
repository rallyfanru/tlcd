/*
  Попытка работы с LCD через расширитель mcp23S17
  */
#include <SPI.h>              // We use this library, so it must be called here.
#include <MCP23S17.h>         // Here is the new class to make using the MCP23S17 easy.

#include "tlcd.h"

//MCP mcpchip(0); 

int x=0,y=0;
int i=90;
char myString[] = "ABCАБВГДЕЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯабвгдежзийклмнопрстуфхцчшщъыьэюя";
byte b=0;

void setup ()
{

	Serial.begin(115200);
	mcpchip.pinMode(0);
	lcd_on();
	lcd_clear();

	lcd_goto(3,0);
	lcd_string(myString);

}

void loop()
{
	

}

