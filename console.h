/*
 * Christina Bannon
 * header to hold the variables used in different programs
 */

#ifndef CONSOLE_H
#define CONSOLE_H

static char* const VGA_MEMORY = (char*) 0xb8000;
static const int VGA_WIDTH = 80;
static const int VGA_HEIGHT = 25;
unsigned int current_address; 
void print(char* string);
void println(char* string);

#endif

