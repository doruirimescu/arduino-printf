/*
  for some reason vsprintf or sprintf will not work with float on arduino.
  2014 Doru Irimescu 

*/

// ensure this library description is only included once
#ifndef print_f_h
#define print_f_h

#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <stdarg.h>

// library interface description

void print_f(const char* format, ... )
{
  char buffer[240];
  va_list list;
  va_start (list, format);
  vsprintf(buffer,format, list );
  va_end(list);
  Serial.print(buffer);
}
#endif
