#include <stdio.h>
#include <string.h>

typedef struct Hand Hand;
typedef enum { Win, Loss, Tie } Result;
char str1[15], str2[15];

char rank1[10], rank2[10];
char suit1[10], suit2[10];

int rankz1[11];
int rankz2[11] ;
int p1 = 0;
int molt = 0;

// return value will be freed
Hand* PokerHand (const char *cards) {
  
rank1[0] = cards[0], rank1[1] = cards[3], rank1[2] = cards[6], rank1[3] = cards[9], rank1[4] = cards[12];
 
  
    int numb1 = strlen(rank1);
  
   for (int i = 0; i < numb1; i++)
    {   
     
        if (rank1[i] == 'A'){rankz1[molt] = rank1[i]-55;molt++;}
        if (rank1[i] == 'T'){rankz1[molt] = rank1[i]-74;molt++;}
        if (rank1[i] == 'J'){rankz1[molt] = rank1[i]-63;molt++;}
        if (rank1[i] == 'Q'){rankz1[molt] = rank1[i]-69;molt++;}
        if (rank1[i] == 'K'){rankz1[molt] = rank1[i]-62;molt++;}    
     if (rank1[i] == '2'){rankz1[molt] = rank1[i]-48;molt++;}
     if (rank1[i] == '3'){rankz1[molt] = rank1[i]-48;molt++;}
     if (rank1[i] == '4'){rankz1[molt] = rank1[i]-48;molt++;}
     if (rank1[i] == '5'){rankz1[molt] = rank1[i]-48;molt++;}
     if (rank1[i] == '6'){rankz1[molt] = rank1[i]-48;molt++;}
     if (rank1[i] == '7'){rankz1[molt] = rank1[i]-48;molt++;}
     if (rank1[i] == '8'){rankz1[molt] = rank1[i]-48;molt++;}
     if (rank1[i] == '9'){rankz1[molt] = rank1[i]-48;molt++;}
  }
  
  
  for (int i = 0; i < 5; i++){rankz2[i] = rankz1[i];}
  
  
  memset(str1, 0, sizeof str1);
  memset(rankz1, 0, sizeof rankz1);
  memset(rank1, 0, sizeof rank1);
  molt = 0;

  return 0;
  
}
Result compare (Hand* player, Hand* opponent) {
 
  if (p1  == 1) {printf("Opponent-> ");}
 if (p1  == 0) {printf("Player->   "); p1 = 1;}
  
  for (int i = 0; i < 5 ; i++){printf("%d " ,rankz2[i] );}
   printf("\n\n");
  
  
  
  
  
  
  return Loss;
}






//WIN CONDITIONS
//One Pair = two of the same card number
//Two Pairs = Two of the same  x2
//Three of a kind = Three of the same card number
//Straight = 5 cards in order, player with the highest order wins
//Flush = 5 cards of the same suit regardless of order
//Full House = three of akind + one pair
//Four of akind = four cards of the same number
//Straight Flush = 5 cards in order while also being of the same suit
//Royal Flush = 10 Jack Queen King Ace of the same suit
