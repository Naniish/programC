#include <unistd.h>
/*
** ETNA PROJECT, 2020
** Frist C Programming
** File description:
** 		No file there, just an etna header example
*/

void my_putchar(char c);

void my_print_comb(void){
  int a, b, c;
  for(a='0'; a<='9'; a++){
    for(b=a+1; b<='9'; b++){
      for(c=b+1; c<='9'; c++){
	my_putchar(a);
	my_putchar(b);
	my_putchar(c);
	my_putchar(' ');
      }
    }
  } 
}
