#include <stdio.h>
#include <string.h>

typedef struct Hand Hand;
typedef enum { Win, Loss, Tie } Result;
char str1[15], str2[15];

char rank1[10], rank2[10];
char suit1[10], suit2[10];

int rankz1[10], rankz2[10];

// return value will be freed
Hand* PokerHand (const char *cards) {
  
  //Separate Hands
  while (strlen(str1) < 14){strcpy(str1, cards);}     strcpy(str2, cards);
  
  //All Ranks
  rank1[0] = str1[0], rank1[1] = str1[3], rank1[2] = str1[6], rank1[3] = str1[9], rank1[4] = str1[12];
  rank2[0] = str2[0], rank2[1] = str2[3], rank2[2] = str2[6], rank2[3] = str2[9], rank2[4] = str2[12];
  
  int numb1 = strlen(rank1);
  int numb2 = strlen(rank2);
  
  for (int i = 0; i < numb2; i++)
    {
        if (rank2[i] == 'A'){rankz1[i] = 1;}
        if (rank2[i] == 'J'){rankz1[i] = 10;}
    
    
    
    }
  
  
  return 0;
  
}

Result compare (Hand* player, Hand* opponent) {
  
  
  
  printf("%d\n" ,rankz1 );
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
