#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
int main()
{
/*
unsigned x = 1000;
unsigned y = 1012;
 
int xlen = log10(x)+1;
int ylen = log10(y)+1;
 
 
char buffx[xlen+1];
char buffy[ylen+1];
 
sprintf(buffx ,"%d",x);
sprintf(buffy ,"%d",y);
 
 */
char *buffx = "34570005056892984637486820";
char *buffy = "40820245540029171906865204";
//calcs went wrong from the buffy[7] * buffx[24] 
// fixed with char length  from *16 to * 100;
// Target result = "1411156094742421775373509194368931047469571066611280";
 
 
unsigned long long xlen = strlen(buffx);
unsigned long long ylen = strlen(buffy);
 
unsigned long long bas;     
unsigned long long expo;
bool zrz = false;
char buffsum[3];
char buffs1[3];
char buffs2[3];
 
 
unsigned long long sum    = 0;
unsigned long long carry  = 0;
unsigned long long n = 1; 
unsigned long long m = 1;
unsigned long long t = 1; 
unsigned long long o = 0;
 
 
char final[xlen*100];
 
 
 
 
for (unsigned long long i = strlen(buffy) ; i > 0 ; i--){       expo = buffy[strlen(buffy)-m] -48;
 carry = 0;
    for (unsigned long long j = strlen(buffx) ; j > 0 ; j--){
 
                                                bas  = buffx[strlen(buffx)-n] -48;
        sum  = expo * bas;
        //printf("expo is = %d\n", expo);
        //printf("bas is = %d\n", bas);
        zrz = false;
        if (sum == 0){zrz = true;}
        sum= carry+sum;
        //printf("sum is = %d\n", sum);
        sprintf(buffsum,"%d", sum);
        if (zrz == true ){carry = 0;}
        if(j != 1){
            if(strlen(buffsum) > 1){
                    buffs1[0] = buffsum[0];
                    buffs2[0] = buffsum[1];
                    if (strlen(buffsum) > 1)carry     = buffs1[0]-48;
                    final[o]  = buffs2[0];
                    o++;
            }
 
            if (strlen(buffsum) == 1){
 
                    if (strlen(buffsum) > 1){carry  = buffs1[0]-48;}
                    if (strlen(buffsum) == 1){carry  = 0;}
                    final[o]  = buffsum[0];
                    o++;
 
            }
        }
 
        if (j == 1 ){
            if (strlen(buffsum) > 1){
        final[o] = buffsum[1];o++;
        final[o] = buffsum[0];o++;
            }
            if (strlen(buffsum) == 1){final[o] = buffsum[0];o++;}
        }            
        n++;
    }
    if (i != 1)final[o] = '-';
    carry = 0;
    o++;
    n =1;
    m++;
}
 
 
 memset( final+strlen(final), '\0', 0 );
 
 
    unsigned long long incd = 0;
    unsigned long long inct = 0;
    unsigned long long maxx = 0;
    unsigned long long maxy = 0;
    while(incd < strlen(final))
    {
        inct++;
        if (final[incd] == '-' && final[incd+1] > '9' || final[incd] == '-' && final[incd+1] < '0' )
        {memset(final+incd, '\0', strlen(final)); break;}
 
        if (final[incd] == '-'){ if (inct > maxx ){maxx = inct;} maxy++; inct = 0;}
        incd++;
    }
maxy++;
incd = 0;
inct = 0;
 
    //char tabler[maxx][maxy];
    //printf("\n%d  & %d", maxx, maxy);
 
    char* tabler[maxx];
    for (unsigned i = 0; i < maxx; i++)
        *(tabler + i) = (char*)calloc(maxy, sizeof(char));
 
 
    //Output Tabler
    for (unsigned i = 0; i < maxy; i++){
     for (unsigned j = 0; j < maxx; j++){
        printf("%d", tabler[i][j]);
 
     }
        printf("\n");
    }
 
printf("\n\n%s", final);
 
 
return 0;
} 
