#include <unistd.h>
/*
** ETNA PROJECT, 2020
** Frist C Programming
** File description:
** 		No file there, just an etna header example
*/

void my_putchar(char c);

void my_print_alpha(void){
  char letter;
   for(letter='a'; letter <= 'z'; letter++){
     my_putchar(letter); "\n";
   }
}

