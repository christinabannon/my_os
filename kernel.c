/*
 * Christina Bannon
 */

#include "console.h"

void kernel_early(void) {
   current_address = 0; 
}

int main(void) {
    print("It's alive!");
    print(" and it remembers where it is supposed to be!");
    println(" ");
    println("here it is living on a different line.");
    print("width - string length down from the last.");
    return 0;
}
