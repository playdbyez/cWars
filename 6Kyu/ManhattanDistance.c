// Expected 4
#include <stdio.h>

int main()
{
    int a[2] = {5, 4}; 
    int b[2] = {3, 2};
    unsigned ext = 0;
    unsigned inc = 0;
    char turns = '1';
   
  int totala = a[0] > b[0] ?  a[0]: b[0];  
  int botala = a[1] > b[1] ?  a[1]: b[1];
  
  
char board[botala+1][totala+1];

unsigned horiz= sizeof board[0];
unsigned verx= sizeof board / horiz;

//Player Start Position
int playsx = a[0]-1;
int playsy = a[1]-1;

int destx = b[0]-1;
int desty = b[1]-1;


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


  (playsx < destx) ? playsx++: playsx--;
  board[playsx][playsy] = turns;turns ++;
  (playsy < desty) ? playsy++: playsy --;
  board[playsx][playsy] = turns;turns ++;
  
  if (playsx == destx && playsy == desty){ break;}

inc++;
}




for (int t = 0; t < verx; t++ )
{for (int p = 0; p < horiz; p++ )
 {printf("%c", board[t][p]); }
 printf("\n");
}

 
}
