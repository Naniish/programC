#include <unistd.h>
/*
** ETNA PROJECT, 2020
** Frist C Programming
** File description:
** 		No file there, just an etna header example
*/

void my_putchar(char c){
  write(1, &c, 1);
}

void my_print_revalpha(void){
  char letter = 'z';
   while(letter >= 'a'){
     my_putchar(letter);
       letter--;
   }
}
int main(int argc, char **argv){
    my_print_alpha();

    return (0);
}
