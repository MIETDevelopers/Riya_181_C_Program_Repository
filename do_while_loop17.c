//Program to demonstrate do while loop.
#include<stdio.h>//headerfile
 int main() {

   /* local variable definition */
   int a = 5;

   /* do while loop execution */
   do {
      printf("value of a: %d\n", a);
      a = a + 5;
   }while( a < 50 );
 
   return 0;
}
