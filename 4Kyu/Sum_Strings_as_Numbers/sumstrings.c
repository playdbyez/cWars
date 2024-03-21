#include <stdio.h>
#include <malloc.h>
#include <string.h>

char *strsum(const char *a, const char *b)
{
   int len1 = strlen(a);
   int len2 = strlen(b);  
   int max  = len1>len2 ? len1: len2;
   int internz;
  
  char sumtable[1][max];
  
          int long tabley = sizeof (sumtable)/ sizeof sumtable [0];
          int long tablex = sizeof sumtable [0]/ sizeof sumtable [0][0];
  int iter = tablex-1;
   for (int long i = 0; i < tabley+1; i++){
      for (int long j = 0; j < tablex+1; j++){sumtable[i][j] = '0';}}
  
  

  
  for (int i = len1-1; i > -1; i--)
    {sumtable[0][iter] = a[i];iter--;}
 iter = tablex -1;
  for (int i = len2-1; i > -1; i--)
    {sumtable[1][iter] = b[i];iter--;}
  
          
  
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
        printf("%c", sumtable[i][j]);
        if (j != 0){break;}
      }
  printf ("\n");
      
      if (endlined == 1 && nwj == 0){
        sum+=carry;
        sprintf(buffsum, "%d",sum);
        printf("the sum is %d\n", sum);
        sum = 0;
        if(strlen(buffsum) == 1){mender[blitz]=buffsum[0]; blitz++; carry =0; }
        if(strlen(buffsum) == 2){mender[blitz]=buffsum[1]; blitz++;
                                 mender[blitz]=buffsum[0]; blitz++;
                                 carry =0; }
        if(strlen(buffsum) == 3){mender[blitz]=buffsum[2]; blitz++;
                                 mender[blitz]=buffsum[1]; blitz++;
                                 mender[blitz]=buffsum[0]; blitz++;
                                 carry =0; }
        break;}
      if (endlined == 1){i = tabley+1;nwj--; endlined = 0;
                        sum+=carry;
                        sprintf(buffsum, "%d",sum);
                        printf("is the sum %d\n", sum);
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
  
  printf("%s\n\n", mender);
  
  // OUTPUT sumtable
    for (int i = 0; i < tabley+1; i++){
      for (int j = 0; j < tablex; j++)
    {
        printf("%c", sumtable[i][j]);
      }
  printf ("\n");    
  }
  
    return mender;
  free (mender);
}

/*
:::ERROR:::
*Actual:  -1
Expected: 712577413488402631964821329
  Arg A:  712569312664357328695151392
  Arg B:  8100824045303269669937

   //output
      712569312664357328695151392
      00000
::: ERROR :::
*Actual:  -1
Expected: 5221898943093666850225557472461122393395921560661377895201102783978545224060717458939417820771321131104435306939752947594943909001576991627506762004218589632186627269071157447693589111174473499215321959936689689592440658921
  Arg A:  2569278343599434722065899125214585635261677176331400211696312843801883007375317
  Arg B:  5221898943093666850225557472461122393395921560661377895201102783978545224060717458939417820771321131104435306939752947594943909001576991627506759434940246032751905203172032233107953849497297167815110263623845887709433283604


::: ERROR :::
*Actual:  -1
Expected: 1950014205636296781553586699193193914883067468411095252667881348664743068864382844335078934046148125614354675517088969299906046898026363151438315692204662664191395833762192796620766495859149155332457121601621122366661546211525
  Arg A:  691448301113892800444477291643694102021617601131324941189620212185974487720635609451367496997338969186546742715195353875807230857965252215804512820320028263800538479183729734348406608527208914486340413039963350684677
  Arg B:  1950014204944848480439693898748716623239373366389477651536556407475122856678408356614443324594780628617015706330542226584710693022219132293473063476400149843871367569961654317437036761510742546805248207115280709326698195526848

   //output
         75807230857965252215804512820320028263800538479183729734348406608527208914486340413039963350684677
         1950014204944848480439693898748716623239373366389477651536556407475122856678408356614443324594780628617015706330542226584710693022219132293473063476400149843871367569961654317437036761510742546805248207115280709326698195526848
   */
