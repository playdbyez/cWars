//https://rextester.com/l/c_online_compiler_clang (CLANG COMPILER)
//https://stackoverflow.com/questions/36542284/difference-between-clang-and-gcc
//https://www.reddit.com/r/C_Programming/comments/som4ys/gcc_or_clang/?rdt=58151


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
  
  char sumtable[1][max];
  
          int long tabley = sizeof (sumtable)/ sizeof sumtable [0];
          int long tablex = sizeof sumtable [0]/ sizeof sumtable [0][0];
  int long long iter = tablex-1;
  
      for (int long j = 0; j < tablex+1; j++){sumtable[0][j] = '0';}
  for (int long j = 0; j < tablex+1; j++){sumtable[1][j] = '0';}
  
  

  
  for (int long long i = len1-1; i > -1; i--)
    {if (iter>-1){sumtable[0][iter] = a[i];iter--;}}
 iter = tablex -1;
  for (int long long i = len2-1; i > -1; i--)
    {if (iter>-1){sumtable[1][iter] = b[i];iter--;}}
  
          
  
  char *mender;
  mender = malloc(sizeof (char) * (max+2));
  int sum = 0;
  int carry = 0;
  char buffsum[4];
  
  int blitz = 0;
  int endlined = 0;
  int nwj = tablex-1;
  
    for (int i = tabley; i > -1 ; i--){
      for (int j =  tablex-1; j > -1; j--)
    {
        j = nwj;
        if (i == 0){endlined = 1;}
        sum+=sumtable[i][j]-48;
        if (j != 0){break;}
      }
  printf ("\n");
      
      if (endlined == 1 && nwj == 0){
        sum+=carry;
        sprintf(buffsum, "%d",sum);
        sum = 0;
        if(strlen(buffsum) == 1){mender[blitz]=buffsum[0]; blitz++; carry =0; }
        if(strlen(buffsum) == 2){mender[blitz]=buffsum[1]; blitz++;
                                 mender[blitz]=buffsum[0]; blitz++;
                                 carry =0; }
        
        break;}
      if (endlined == 1){i = tabley+1;nwj--; endlined = 0;
                        sum+=carry;
                        sprintf(buffsum, "%d",sum);
                        sum = 0;
                                        if(strlen(buffsum) == 1){mender[blitz]=buffsum[0]; blitz++; carry =0; }
                                        if(strlen(buffsum) == 2){mender[blitz]=buffsum[1]; blitz++; carry =buffsum[0]-48; }
                        }
      
  }
  memset(mender+blitz, '\0', sizeof(char));
  char hold;
  blitz--;
  for (int i  =0; i < strlen(mender); i++){
    if (&mender[i] < &mender[blitz]){hold = mender[blitz]; mender[blitz] = mender[i]; mender[i] = hold; blitz--;}
  }
  internz = strtol(mender, NULL, 10);
  sprintf(mender, "%d", internz);
  
 
  
  // OUTPUT sumtable
    for (int i = 0; i < tabley+1; i++){
      for (int j = 0; j < tablex; j++)
    {
        printf("%c", sumtable[i][j]);
      }
  printf ("\n");    
  }
  
    printf("%d", mender) ;
  
}
