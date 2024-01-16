
// Expected 4
#include <stdio.h>

int main()
{
    int a[2] = {1, 1}; int b[2] = {0, 3};
    unsigned inc = 0;
    unsigned anz = 1;
    char turns = '1';
   
  int totala = a[0] > b[0] ?  a[0]: b[0];  
  int botala = a[1] > b[1] ?  a[1]: b[1];
  
  if (totala  == 1) {totala = 2;}
char board[botala+1][totala+1];

unsigned horiz= sizeof board[0];
unsigned verx= sizeof board / horiz;

//Player Start Position and add the minus to the destination
int playsx = a[0]+1;
if (playsx > 0) {playsx-=1;}
//if (playsx == 0) {playsx-=1;}
int playsy = a[1]+1;
if (playsy > 0) {playsy-=1;}
//Destination Position
int destx = b[0]+1;;
if (destx > 0) {destx-=1;}
int desty = b[1]+1;;
if (desty > 0) {desty-=1;}
// Populate Map
for (int t = 0; t < horiz; t++ )
{for (int p = 0; p < verx; p++ )
 {
  board[t][p] = 'O';
  if (t == playsx && p  == playsy){board[t][p] = 'X';}
  if (t == destx && p  == desty ){board[t][p] = 'Z';} 
 }
}

while (inc < sizeof board)
{
    if (playsx != destx){
  (playsx < destx) ? playsx++: playsx--;
  board[playsx][playsy] = turns;
  if (playsx == destx && playsy == desty){ break;}
  turns ++; anz++;}
  
  if (playsy != desty){
  (playsy < desty) ? playsy++: playsy --;
  if (playsx == destx && playsy == desty){ break;}
  board[playsx][playsy] = turns;
  turns ++;  anz++;}

inc++;
}

printf("\n %d", anz);
 return 0;
 
}
