// Expected 80
#include <stdio.h>

int main()
{
    int a[2] = {80, 20}; int b[2] = {46, 90};

  int totala = a[0] > b[0] ?  a[0]: b[0];  
  int botala = a[1] > b[1] ?  a[1]: b[1];
  
 int to = a[0] < b[0] ?  a[0]: b[0];  
 int bo = a[1] < b[1] ?  a[1]: b[1];


int r1 = totala - to;
int r2 = botala - bo;

  printf ("%d" , r1 + r2);
  return 0;
}
