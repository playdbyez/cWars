
#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main ()
{
    char *a = "0001";
    char *b = "000009";
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
  
      char *totodile;
  totodile = malloc(sizeof (char) * (max+2));
  int sum = 0;
  int carry = 0;
  char buffsum[4];
   int bl = 0;
  
    for (int i = tablex-1; i > -1; i--){    
        for (int j = 0; j < tabley; j++){     sum += sumtable[j][i] - 48;   }
        sum+= carry;
                sprintf(buffsum, "%d", sum);
        if (strlen(buffsum) == 1){ totodile[bl] = buffsum[0];bl++; carry = 0;}
        if (strlen(buffsum) == 2){ totodile[bl] = buffsum[1]; bl++; carry =buffsum[0]-48; }
        
        if (i == 0 && strlen(buffsum) == 2) {totodile[bl] = buffsum[0];bl++;
                                             totodile[bl] = buffsum[1];bl++; carry = 0;}
        if (i == 0 && strlen(buffsum) == 1) { carry = 0;}
        
        sum = 0;
    }
  memset(totodile+bl, '\0', sizeof(char));
  char hold;
  bl--;

    //Sort output in reverse
      for (int i  =0; i < strlen(totodile); i++)
  {  if (&totodile[i] < &totodile[bl]){hold = totodile[bl]; totodile[bl] = totodile[i]; totodile[i] = hold; bl--;}  }
 
          
  bl = 0;
 //for (strlen(totodile))
    
    
    printf ("%s",totodile);
}