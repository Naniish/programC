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

void my_print_comb(void){
  int a, b, c, i;
  for(a='0'; a<='9'; a++){
    for(b='0'; b<='9'; b++){
      for(c='0'; c<='9'; c++){
	for(i='1'; i<='9';i++){
	  my_putchar(a);
	  my_putchar(b);
	  my_putchar(' ');
	  my_putchar(c);
	  my_putchar(i);
	  my_putchar(',');
	  my_putchar(' ');
	}
      }
    }
  }
  
}
