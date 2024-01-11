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
suit1[0] = cards[1], suit1[1] = cards[4],  suit1[2] = cards[7], suit1[3] = cards[10], suit1[4] = cards[13];
  
    int numb1 = strlen(rank1);
  
   for (int i = 0; i < numb1; i++)
    {   
        if (rank1[i] == 'A'){rankz1[molt] = rank1[i]-64;molt++;}
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
  
  
  
  
  if (p1  == 1) {printf("Opponent-> \n");}
 if (p1  == 0) {printf("Player->  \n"); p1 = 1;}
  
  for (int i = 0; i < 5 ; i++){printf("%d " ,rankz1[i] );}
  printf("\n");
  for (int i = 0; i < 5 ; i++){printf("%c " ,suit1[i] );}
   printf("\n\n");
  
  
  memset(str1, 0, sizeof str1);
  memset(rankz1, 0, sizeof rankz1);
  memset(rank1, 0, sizeof rank1);
  molt = 0;

  return 0;
  
}
Result compare (Hand* player, Hand* opponent) {
 
  
  
  
  
  
  
  
  return Win;
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





// CASES

#include <stdlib.h>
#include <criterion/criterion.h>

typedef struct Hand Hand;
typedef enum { Win, Loss, Tie } Result;

Hand* PokerHand (const char *cards);
Result compare (Hand* player, Hand* opponent);

bool run_test_hands (Hand *player, Hand *opponent, Result outcome) {
  Result result = compare (player, opponent);
  return outcome == result;
}

bool run_test (const char *player, const char *opponent, Result outcome) {
  Hand *p = PokerHand (player), *o = PokerHand (opponent);
  bool result = run_test_hands (p, o, outcome);
  free (p); free (o);
  return result;
}

/*
    "2H 3H 4H 5H 6H", "KS AS TS QS JS", ( Loss), "Highest straight flush wins"
    "2H 3H 4H 5H 6H", "AS AD AC AH JD", ( Win ), "Straight flush wins of 4 of a kind"
    "AS AH 2H AD AC", "JS JD JC JH 3D", ( Win ), "Highest 4 of a kind wins"
    "2S AH 2H AS AC", "JS JD JC JH AD", ( Loss), "4 Of a kind wins of full house"
    "2S AH 2H AS AC", "2H 3H 5H 6H 7H", ( Win ), "Full house wins of flush"
    "AS 3S 4S 8S 2S", "2H 3H 5H 6H 7H", ( Win ), "Highest flush wins"
    "2H 3H 5H 6H 7H", "2S 3H 4H 5S 6C", ( Win ), "Flush wins of straight"
    "2S 3H 4H 5S 6C", "3D 4C 5H 6H 2S", ( Tie ), "Equal straight is tie"
    "2S 3H 4H 5S 6C", "AH AC 5H 6H AS", ( Win ), "Straight wins of three of a kind"
    "2S 3H 4H 5S AC", "AH AC 5H 6H AS", ( Win ), "Low-ace straight wins of three of a kind"
    "2S 2H 4H 5S 4C", "AH AC 5H 6H AS", ( Loss), "3 Of a kind wins of two pair"
    "2S 2H 4H 5S 4C", "AH AC 5H 6H 7S", ( Win ), "2 Pair wins of pair"
    "6S AD 7H 4S AS", "AH AC 5H 6H 7S", ( Loss), "Highest pair wins"
    "2S AH 4H 5S KC", "AH AC 5H 6H 7S", ( Loss), "Pair wins of nothing"
    "2S 3H 6H 7S 9C", "7H 3C TH 6H 9S", ( Loss), Highest card loses"
    "4S 5H 6H TS AC", "3S 5H 6H TS AC", ( Win ), "Highest card wins"
    "2S AH 4H 5S 6C", "AD 4C 5H 6H 2C", ( Tie ), "Equal cards is tie"
*/
