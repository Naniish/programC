#include <unistd.h>
/*
** ETNA PROJECT, 19/10/2020
** Frist C Programming
** File description:
** 		No file there, just an etna header example
*/

void my_putchar(char c){
  write(1, &c, 1);
}

void my_print_alpha(void){
  char letter;
   for(letter='a'; letter <= 'z'; letter++){
     // printf("%c", letter); "\n";
     my_putchar(letter);"\n";
   }
}
int main(int argc, char **argv){
    my_print_alpha();

    return (0);
}
