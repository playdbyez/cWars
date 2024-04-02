
#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main ()
{
    char *a = "712569312664357328695151392";
    char *b = "8100824045303269669937";
   int len1 = strlen(a);
   int len2 = strlen(b);  
   int max  = len1>len2 ? len1: len2;
   unsigned long internz;
  
  char sumtable[2][max];
  
          int long tabley = sizeof (sumtable)/ sizeof sumtable [0];
          int long tablex = sizeof sumtable [0]/ sizeof sumtable [0][0];
  int long long iter = tablex-1;
  
     memset(sumtable, '0', sizeof(sumtable));
  
for (int long long i = len1-1; i > -1; i--)
    {if (iter>-1){sumtable[0][iter] = a[i];iter--;}}
 iter = tablex -1;
  for (int long long i = len2-1; i > -1; i--)
    {if (iter>-1){sumtable[1][iter] = b[i];iter--;}}
  
    
  
    for (int i = tablex-1; i > -1; i--){    
        for (int j = 0; j < tabley; j++){
        
            printf("%c", sumtable[j][i]);
        
        
        }
        printf ("\n SUM\n--------\n");
    }
  
          
  
 
  
  // OUTPUT sumtable
    for (int i = 0; i < tabley; i++){
      for (int j = 0; j < tablex; j++)
      { 
        printf("%c", sumtable[i][j]);
      }
  printf ("\n");    
  }
  
    //printf ("%d"tablezx);

    return 0;
}

