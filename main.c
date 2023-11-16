#include <stdio.h>
#include <stdlib.h>

//call by reference
void swap (int *x, int *y){
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

int main(int argc, char *argv[])
{
  int a = 3;
  int b = 5;
  
  swap(&a,&b);

  printf("a:%i, b:%i\n", a, b);

  system("PAUSE");	
  return 0;
}

/*
//call by value
void swap (int x, int y){
  int temp;
  temp = x;
  x = y;
  y = temp;
}

int main(int argc, char *argv[])
{
  int a = 3;
  int b = 5;
  
  swap(a,b);

  printf("a:%i, b:%i\n", a, b);

  system("PAUSE");	
  return 0;
}*/
