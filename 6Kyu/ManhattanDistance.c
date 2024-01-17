// Expected 80
#include <stdio.h>

int main()
{
    int a[2] = {80, 20}; int b[2] = {46, 90};
    unsigned inc = 0;
    unsigned anz = 1;
    char turns = '0';
   
  int totala = a[0] > b[0] ?  a[0]: b[0];  
  int botala = a[1] > b[1] ?  a[1]: b[1];
  
  if (totala  == 1) {totala = 2;}
char board[botala+4][totala+4];

unsigned horiz= sizeof board[0];
unsigned verx= sizeof board / horiz;

//Player Start Position and add the minus to the destination
int playsx = a[0]+1;
if (playsx > 0) {playsx-=1;}
//if (playsx == 0) {playsx-=1;}
int playsy = a[1]+1;
if (playsy > 0) {playsy-=1;}
//Destination Position
int destx = b[0]+1;
if (destx > 0) {destx-=1;}
int desty = b[1]+1;
if (desty > 0) {desty-=1;}


// Populate Map
for (int t = 0; t < horiz; t++ )
{for (int p = 0; p < verx; p++ )
 {
  board[t][p] = 'O';
 }
}
  board[playsx][playsy] = 'X';
  board[destx][desty] = 'Z';

while (inc < sizeof board)
{
    if (playsx != destx && playsy == desty ){
  if (playsx < destx && playsy == desty){ playsx++;turns ++; anz++;  board[playsx][playsy] = turns;}//up
  if (playsx > destx && playsy == desty){ playsx--;turns ++; anz++;  board[playsx][playsy] = turns;}//down
    }
    if (playsx == destx && playsy == desty){ break;}

    
    if (playsx != destx && playsy != desty ){
  if (playsx < destx && playsy > desty){ playsx++;playsy--;turns ++; anz++;  board[playsx][playsy] = turns;} //down left
  if (playsx < destx && playsy < desty){ playsx++;playsy++;turns ++; anz++;  board[playsx][playsy] = turns;} //down right
  if (playsx > destx && playsy > desty){ playsx--;playsy--;turns ++; anz++;  board[playsx][playsy] = turns;} //up left
  if (playsx > destx && playsy < desty){ playsx--;playsy++;turns ++; anz++;  board[playsx][playsy] = turns;} //up right  
    }
    if (playsx == destx && playsy == desty){ break;}
    
    
     if (playsx == destx && playsy != desty ){
  if (playsx == destx && playsy < desty){ playsy++;turns ++; anz++;  board[playsx][playsy] = turns;}
  if (playsx == destx && playsy > desty){ playsy--;turns ++; anz++;  board[playsx][playsy] = turns;}
    }
    if (playsx == destx && playsy == desty){ break;}
  
  

inc++;
}



//Display Map
for (int t = 0; t < sizeof board[0]; t++ )
{for (int p = 0; p <sizeof board / sizeof board[0]; p++ )
 {printf("%c", board[t][p]); }printf("\n");
}

printf("\n %d", turns -48);
printf("\n %d", anz);
 return 0;
 
}
