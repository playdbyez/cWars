#include <stdio.h>
#include <string.h>

typedef struct Hand Hand;
typedef enum { Win, Loss, Tie } Result;
char str1[15], str2[15];

char rank1[10], rank2[10];
char suit1[10], suit2[10];

int rankz1[11];
int rankz2[11] ;

int molt = 0;
int wolt = 0;
// return value will be freed
Hand* PokerHand (const char *cards) {
  
  //Separate Hands
  while (strlen(str1) < 14){strcpy(str1, cards);}     strcpy(str2, cards);
  
  //All Ranks
  rank1[0] = str1[0], rank1[1] = str1[3], rank1[2] = str1[6], rank1[3] = str1[9], rank1[4] = str1[12];
  rank2[0] = str2[0], rank2[1] = str2[3], rank2[2] = str2[6], rank2[3] = str2[9], rank2[4] = str2[12];
  
   

  
  
  return 0;
  
}

Result compare (Hand* player, Hand* opponent) {
  
 int numb1 = strlen(rank1), numb2 = strlen(rank2);
  
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
  
  
  
  
   for (int i = 0; i < numb2; i++)
    {   
     
        if (rank2[i] == 'A'){rankz2[wolt] = rank2[i]-55;wolt++;}
        if (rank2[i] == 'T'){rankz2[wolt] = rank2[i]-74;wolt++;}
        if (rank2[i] == 'J'){rankz2[wolt] = rank2[i]-63;wolt++;}
        if (rank2[i] == 'Q'){rankz2[wolt] = rank2[i]-69;wolt++;}
        if (rank2[i] == 'K'){rankz2[wolt] = rank2[i]-62;wolt++;}    
     if (rank2[i] == '2'){rankz2[wolt] = rank2[i]-48;wolt++;}
     if (rank2[i] == '3'){rankz2[wolt] = rank2[i]-48;wolt++;}
     if (rank2[i] == '4'){rankz2[wolt] = rank2[i]-48;wolt++;}
     if (rank2[i] == '5'){rankz2[wolt] = rank2[i]-48;wolt++;}
     if (rank2[i] == '6'){rankz2[wolt] = rank2[i]-48;wolt++;}
     if (rank2[i] == '7'){rankz2[wolt] = rank2[i]-48;wolt++;}
     if (rank2[i] == '8'){rankz2[wolt] = rank2[i]-48;wolt++;}
     if (rank2[i] == '9'){rankz2[wolt] = rank2[i]-48;wolt++;}
  }
  
  
  
  
  for (int i = 0; i < 5; i++){printf("%d " ,rankz2[i] );}
  printf("\n");
  
  for (int i = 0; i < 5; i++){printf("%d " ,rankz1[i] );}
  printf("\n");
  
  
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
