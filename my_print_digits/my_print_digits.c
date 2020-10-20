#include <unistd.h>
/*
** ETNA PROJECT, 2020
** Frist C Programming
** File description:
** 		No file there, just an etna header example
*/

void my_putchar(char c);

void my_print_digits(void){
  char digit;
   for(digit='0'; digit <= '9'; digit++){
     my_putchar(digit);
   }
}
