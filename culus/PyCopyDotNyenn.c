#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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

char *Listerate (Node *head, char *arr, int len)
{
  printf("\nPrinting the whole list:\n");
        int bil = 0;
        int uti = 0;
        Node *pl = head;
        while (pl != NULL )
                {
                if (pl -> value != '0'){bil = 1;}
                if (bil == 1){arr[uti] = pl->value; uti++;}
                      pl = pl->next;
                }
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

 
int main()
{
clock_t start , end;
char *buffx = "34570005056892984637486820";
char *buffy = "40820245540029171906865204";
// Target result = "1411156094742421775373509194368931047469571066611280";
 

unsigned long long xlen = strlen(buffx);
unsigned long long ylen = strlen(buffy);
 
unsigned long long bas;     
unsigned long long expo;

char * buffsum;
    buffsum = malloc (sizeof(char)*3);

    char buffs1[3];
    
char * buffs2;
     buffs2 = malloc (sizeof(char)*3);


int zrz = 0;
unsigned gig;
gig = xlen > ylen ? xlen : ylen;
 
 
unsigned long long sum    = 0;
unsigned long long carry  = 0;
unsigned long long n = 1; 
unsigned long long m = 1;
unsigned long long t = 1; 
unsigned long long o = 0;
unsigned long long q = 0;
unsigned long long w = 0;
unsigned long long v = 0;
unsigned long long tt = -1;
 
 
    char *final; 
    final = (char*) malloc (gig * sizeof (char));
    q = gig;
    
 

for (unsigned long long i = strlen(buffy) ; i > 0 ; i--){  
    while (w < v){final[o] = '0';w++;o++;q++;tt++;final =  realloc (final, q*sizeof (char));}
    v++;
    
 expo = buffy[strlen(buffy)-m] -48;
 carry = 0;
    for (unsigned long long j = strlen(buffx) ; j > 0 ; j--){
 
                                                bas  = buffx[strlen(buffx)-n] -48;
        sum  = expo * bas;
        zrz = 0;
        if (sum == 0){zrz = 1;}
        sum= carry+sum;
        sprintf(buffsum,"%lld", sum);
        if (zrz == 1 ){carry = 0;}
        if(j != 1){
            if(strlen(buffsum) > 1){
                    buffs1[0] = buffsum[0];
                    buffs2[0] = buffsum[1];
                    if (strlen(buffsum) > 1)carry     = buffs1[0]-48;
                    final[o]  = buffs2[0];
                    o++;q++;tt++;
                final =  realloc (final, q*sizeof (char));
            }
 
           if (strlen(buffsum) == 1){
                    carry  = 0;
                    final[o]  = buffsum[0];
                    o++;q++;tt++; 
                final =  realloc (final, q*sizeof (char));
 
            }
        }
 
        if (j == 1 ){
            if (strlen(buffsum) > 1){
        final[o] = buffsum[1];o++;q++;tt++;
                final =  realloc (final, q*sizeof (char));
        final[o] = buffsum[0];o++;q++;tt++;
                final =  realloc (final, q*sizeof (char));
            }
            if (strlen(buffsum) == 1){final[o] = buffsum[0];o++;q++;tt++;
                final =  realloc (final, q*sizeof (char));}
        }            
        n++;
    }
    if (i != 1){final[o] = '-';tt =0;}
    carry = 0;
    o++;q++;
    final =  realloc (final, q*sizeof (char));
    n =1;
    m++;
    w=0;
}
 memset( final+strlen(final), '\0', sizeof (char) );

int flen = q;
 
 
free (buffsum);
free (buffs2);
o = 0;
sum   = 0;
carry = 0;
int spcline[gig];    
while (o < gig){ *(spcline+o) = o; o++;}    

   char tablz [gig][tt];  
    int szt1 = sizeof tablz/ sizeof tablz[0];
    int szt2 = sizeof tablz[0]/ sizeof tablz[0][0];
    
    
    
    for (int i  = 0; i < szt1; i++ ){for (int j  = 0; j < szt2; j++ ){ tablz[i][j] = '0';}    }
    
    
  o = 0;   
    for (int i  = 0; i < szt1; i++ ){
        for (int j  = szt2-1; j > -1; j-- ){
                        if (final[o] == '-'){o++; break;}
            tablz[i][j] = final[o];
                        if (o < strlen(final)){o++;}
        }     
    }
    
    free (final);

    //Continue..
    
    Node * nd = NULL;
    unsigned bl = 0;
    
    for (int i = tablex-1; i > -1; i--){    
        for (int j = 0; j < tabley; j++){     sum += sumtable[j][i] - 48;   }
        sum+= carry;
                sprintf(buffsum, "%d", sum);
        if (strlen(buffsum) == 1){ nd = Listin(nd, buffsum[0]); bl++; carry = 0;}
        if (strlen(buffsum) == 2){ nd = Listin(nd, buffsum[1]); bl++; carry =buffsum[0]-48; }
        
        if (i == 0 && strlen(buffsum) == 2) {nd = Listin(nd, buffsum[1]); bl++;nd = Listin(nd, buffsum[0]); bl++; carry = 0;}
        if (i == 0 && strlen(buffsum) == 1) { carry = 0;}
        
        sum = 0;
    }
    
    char *buff;
  buff = malloc(sizeof (char) * (bl+1));
    
    
    /* 
    //Output tablz
    for(unsigned i  = 0; i < szt1; i++){
         for(unsigned j  = 0; j < szt2; j++){
            printf("%c",tablz[i][j]);
        }
        printf("\n");
    }

   
      
    //Output final
    for (int i  = 0; i < strlen(final); i++ ){
        if (final[i] == '-'){i++; printf("\n");}
        printf("%c", final[i]);}
 */
 
    



 
return 0;
} 
