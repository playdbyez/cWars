#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <ctype.h>

typedef struct listnode
{
    struct listnode *next;
    char value;
}Node;



Node *Listmake(char val)
{   Node *chptr = malloc (sizeof (Node));
    chptr -> value = val;
    chptr -> next = NULL;
    return chptr;   }

Node *Listin(Node *head, char val)
{   Node *nptr = Listmake (val);
    nptr -> next = head;
    return nptr;    }


char *Listerate (Node *head, char *arr)
{
 
        int bil = 0;
        int uti = 0;
        Node *pl = head;
        while (pl != NULL )
                {
                if (isalnum(pl -> value) && pl -> value != '0'){bil = 1;}
                if (bil == 1){arr[uti] = pl->value; uti++;}
                 pl = pl->next;
                }
            if (pl == NULL && bil == 0) { arr[0] = '0'; return arr; }
return arr;
}


void Listend(Node *head)                      
{
  while (head != NULL){
        Node *p = head->next;
        free(head);
        head = p;  
  }
}

int main ()
{
    char *a = "00001";
    char *b = "9";
   int len1 = strlen(a);
   int len2 = strlen(b);  
   int max  = len1>len2 ? len1: len2;
  
  //determining the sumtable size  
  char sumtable[2][max];
  
          int long tabley = sizeof (sumtable)/ sizeof sumtable [0];
          int long tablex = sizeof sumtable [0]/ sizeof sumtable [0][0];
  int long long iter = tablex-1;
  
     memset(sumtable, '0', sizeof(sumtable));
  
  
  
// placing values from back to head within the sumtable  
for (int long long i = len1-1; i > -1; i--)
    {if (iter>-1){sumtable[0][iter] = a[i];iter--;}}
 iter = tablex -1;
  for (int long long i = len2-1; i > -1; i--)
    {if (iter>-1){sumtable[1][iter] = b[i];iter--;}}

//creating a linked list
Node * nd = NULL;
  int sum = 0;
  int carry = 0;
  char buffsum[4];
   int bl = 0;

//inserting values to linked list that gets rid of initial zeros  
    for (int i = tablex-1; i > -1; i--){    
        for (int j = 0; j < tabley; j++){     sum += sumtable[j][i] - 48;   }
        sum+= carry;
                sprintf(buffsum, "%d", sum);
        if (strlen(buffsum) == 1){ nd = Listin(nd, buffsum[0]); bl++; carry = 0;}
        if (strlen(buffsum) == 2 && i != 0){ nd = Listin(nd, buffsum[1]); bl++; carry =buffsum[0]-48; }
        
        if (i == 0 && strlen(buffsum) == 2) {nd = Listin(nd, buffsum[1]); nd = Listin(nd, buffsum[0]); bl++; carry = 0;}
        if (i == 0 && strlen(buffsum) == 1) { carry = 0;}
        
        sum = 0;
    }

//creating and transfering the linked list to an array
      char *buff;
      buff = malloc(sizeof (char) * (bl));

    buff =  Listerate(nd,buff);
            Listend(nd);
        
//asserting right length of calculation for malloc
    int ind = 0;
    while(ind!= sizeof (buff)){ if (!isalnum(buff[ind])){break;}ind++;}
    
//array with final result
    char *anz;
    anz = malloc (sizeof(char)*ind);

    for (int i =0; i < ind; i ++)
    {
        if (!isalnum(buff[i])){break;}
        anz[i] = buff[i];
    }
    free(buff);
    memset(anz+ind, '\0', sizeof(char));
    
//outputs
    printf("len is %d\n",ind);
    printf("len is %d\n",sizeof(anz));
    if (buff[0] == '0') {printf("0\n"); return 0;}
    printf ("%s\n", anz);
}




#########################################################################################
####################### WT? ###################
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <ctype.h>

typedef struct listnode
{
    struct listnode *next;
    char value;
}Node;



Node *Listmake(char val)
{   Node *chptr = malloc (sizeof (Node));
    chptr -> value = val;
    chptr -> next = NULL;
    return chptr;   }

Node *Listin(Node *head, char val)
{   Node *nptr = Listmake (val);
    nptr -> next = head;
    return nptr;    }


char *Listerate (Node *head, char *arr)
{
 
        int bil = 0;
        int uti = 0;
        Node *pl = head;
        while (pl != NULL )
                {
                if (isalnum(pl -> value) && pl -> value != '0'){bil = 1;}
                if (bil == 1){arr[uti] = pl->value; uti++;}
                 pl = pl->next;
                }
            if (pl == NULL && bil == 0) { arr[0] = '0'; return arr; }
return arr;
}


void Listend(Node *head)                      
{
  while (head != NULL){
        Node *p = head->next;
        free(head);
        head = p;  
  }
}

int main ()
{
    char *a = "00001";
    char *b = "9";
   int len1 = strlen(a);
   int len2 = strlen(b);  
   int max  = len1>len2 ? len1: len2;
  
  //determining the sumtable size  
  char sumtable[2][max];
  
          int long tabley = sizeof (sumtable)/ sizeof sumtable [0];
          int long tablex = sizeof sumtable [0]/ sizeof sumtable [0][0];
  int long long iter = tablex-1;
  
     memset(sumtable, '0', sizeof(sumtable));
  
  
  
// placing values from back to head within the sumtable  
for (int long long i = len1-1; i > -1; i--)
    {if (iter>-1){sumtable[0][iter] = a[i];iter--;}}
 iter = tablex -1;
  for (int long long i = len2-1; i > -1; i--)
    {if (iter>-1){sumtable[1][iter] = b[i];iter--;}}

//creating a linked list
Node * nd = NULL;
  int sum = 0;
  int carry = 0;
  char buffsum[4];
   int bl = 0;

//inserting values to linked list that gets rid of initial zeros  
    for (int i = tablex-1; i > -1; i--){    
        for (int j = 0; j < tabley; j++){     sum += sumtable[j][i] - 48;   }
        sum+= carry;
                sprintf(buffsum, "%d", sum);
        if (strlen(buffsum) == 1){ nd = Listin(nd, buffsum[0]); bl++; carry = 0;}
        if (strlen(buffsum) == 2 && i != 0){ nd = Listin(nd, buffsum[1]); bl++; carry =buffsum[0]-48; }
        
        if (i == 0 && strlen(buffsum) == 2) {nd = Listin(nd, buffsum[1]); nd = Listin(nd, buffsum[0]); bl++; carry = 0;}
        if (i == 0 && strlen(buffsum) == 1) { carry = 0;}
        
        sum = 0;
    }

//creating and transfering the linked list to an array
      char *buff;
      buff = malloc(sizeof (char) * (bl));

    buff =  Listerate(nd,buff);
            Listend(nd);
        
//asserting right length of calculation for malloc
    int ind = 0;
    while(ind!= sizeof (buff)){ if (!isalnum(buff[ind])){break;}ind++;}
    
//array with final result
    char anz[ind];
    printf("len is %d\n",sizeof(anz));
    for (int i =0; i < ind; i ++)
    {
        if (!isalnum(buff[i])){break;}
        anz[i] = buff[i];
    }
    free(buff);
    
//outputs
    
    if (buff[0] == '0') {printf("0\n"); return 0;}
    printf ("%s\n", anz);
}


