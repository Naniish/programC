#include <unistd.h>
/*
** ETNA PROJECT, 2020
** Frist C Programming
** File description:
** 		No file there, just an etna header example
*/

void my_putchar(char c);

void my_print_revalpha(void){
  char letter = 'z';
   while(letter >= 'a'){
     my_putchar(letter);
       letter--;
   }
}
