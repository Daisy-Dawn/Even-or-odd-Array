#include <stdio.h>
#include<stdlib.h>

//This program reads an array of 10 integers and count total number of even and odd numbers

int main(void) 
{
  int a[10];
  int even = 0, odd = 0, i;

  printf("Please enter the elements of your array:\n");

  for(i = 0; i < 10; i++)
    {
      scanf("%d", &a[i]);

      if (a[i] % 2 == 0)
        even = even+1;
          else
        odd = odd+1;
    }
  printf("\nThe even elements are = %d\n", even);
  printf("\nThe odd elements are = %d\n", odd);

printf("\n\nEnd of program\n");
  sleep(10);
  system("clear");
  printf("Welcome, User\n");
  
  return 0;
}