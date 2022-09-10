#include <stdio.h>
/*This program will print a multiplication table when a user inputs a number*/

int main(void){

  /*variables*/
  int m; 
  int mult = 0;

  /*Statements*/
  printf("Input a number to get it's multiplication table: ");
  scanf("%d", &m);

  /*While Loop*/
  while(mult <= 10){
    int result = m * mult;
    printf("%d * %d = %d \n", m, mult, result);
    mult++;
  }
  return 0;
}