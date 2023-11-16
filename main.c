#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  int grade[5];
  int *ptr;
  int num = 0;
  
  ptr = grade;
  
  for (i=0; i<5; i++)
  {
      printf("input value(%i) = ", i);
      scanf("%d", &grade[i]);
  }
  
  for(i=0; i<5; i++)
  {
      printf("grade[%d] = %d\n", i, grade[i]);
      num = num + *(ptr+i);
  }
  
  printf("average : %i\n", num/5);
  
  
  system("PAUSE");	
  return 0;
}

/*
//교수님 설명 코드 (결과는 동일)  
int main(int argc, char *argv[])
{
  int i;
  int grade[5];
  int average = 0;
  
  for (i=0; i<5; i++)
  {
      printf("input value(%i) = ", i);
      scanf("%d", &grade[i]);
  }
  
  for(i=0; i<5; i++)
  {
      printf("grade[%d] = %d\n", i, *(grade+i));
      average = average + *(grade+i);
  }
  
  printf("average : %i\n", average/5);
  
  
  system("PAUSE");	
  return 0;
}
*/
