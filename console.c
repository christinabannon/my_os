/*
 * Christina Bannon 3/14/2020
 */

#include "console.h"

/*
 * print() prints an input string to the screen
 */
void print(char* input_string) {
    unsigned int string_index = 0;
    unsigned int memory_index = 2 * current_address; 

    while (input_string[string_index] != '\0') {
	VGA_MEMORY[memory_index] = input_string[string_index];
	VGA_MEMORY[memory_index+1] = 0x07;
	string_index++;
	memory_index = memory_index + 2;
	current_address++;
    } 
}

/*
 * println() prints an input string to the screen, then breaks the line
 */
void println(char* input_string) {
    print(input_string);
    current_address += (VGA_WIDTH - (current_address % VGA_WIDTH));
}
