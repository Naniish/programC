#include <stdio.h>
#include <string.h>

/*
** ETNA PROJECT, 2020
** Frist C Programming
** File description:
** 		No file there, just an etna header example
*/


void my_strlen(const char *str){
  int i;
  int count=0;
  for(i=0; i<strlen(str); i++){
    count++;
  }
  printf("%d\n", count);
}

/*int main(int argc, char **argv){
  my_strlen("salut");
    return (0);
    }*/
