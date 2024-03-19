#include <stdio.h>
#include <malloc.h>
#include <string.h>

char *strsum(const char *a, const char *b)
{
   int len1 = strlen(a);
   int len2 = strlen(b);  
   int max  = len1>len2 ? len1: len2;
  
  char sumtable[1][max];
  
  for (int i = len1-1; i > -1; i--)
    {sumtable[0][i] = a[i];}
    for (int i = len2-1; i > -1; i--)
    {sumtable[1][i] = b[i];}
  
          int tabley = sizeof (sumtable)/ sizeof sumtable [0];
          int tablex = sizeof sumtable [0]/ sizeof sumtable [0][0];
  
  char mender[max+2];
  int sum = 0;
  
  int endlined = 0;
  int nwj = tablex-1;
  
    for (int i = tabley; i > -1 ; i--){
      for (int j =  tablex-1; j > -1; j--)
    {
        j = nwj;
        if (i == 0){endlined = 1;}
        printf("%c", sumtable[i][j]);
        if (j != 0){break;}
      }
  printf ("\n");
      
      if (endlined == 1 && nwj == 0){break;}
      if (endlined == 1){i = tabley+1;nwj--; endlined = 0;}
      
  }
  
  /*
  // OUTPUT sumtable
    for (int i = 0; i < tabley+1; i++){
      for (int j = 0; j < tablex; j++)
    {
        printf("%c", sumtable[i][j]);
      }
  printf ("\n");    
  }
  */
    return "mdk";
}
