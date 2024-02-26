#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
 
 
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
int zrz = 0;
char buffsum[3];
char buffs1[3];
char buffs2[3];
 
 
unsigned long long sum    = 0;
unsigned long long carry  = 0;
unsigned long long n = 1; 
unsigned long long m = 1;
unsigned long long t = 1; 
unsigned long long o = 0;
unsigned long long q = 0;
 
 
char final[xlen*xlen];
 

for (unsigned long long i = strlen(buffy) ; i > 0 ; i--){       expo = buffy[strlen(buffy)-m] -48;
 carry = 0;
    for (unsigned long long j = strlen(buffx) ; j > 0 ; j--){
 
                                                bas  = buffx[strlen(buffx)-n] -48;
        sum  = expo * bas;
        //printf("expo is = %d\n", expo);
        //printf("bas is = %d\n", bas);
        zrz = 0;
        if (sum == 0){zrz = 1;}
        sum= carry+sum;
        //printf("sum is = %d\n", sum);
        sprintf(buffsum,"%lld", sum);
        if (zrz == 1 ){carry = 0;}
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
    int spcline[xlen];
    spcline[0] = 0;    
    o = 0;
    q = 1;
    while(o < strlen(final))
    {
        inct++;
        if (final[o] == '-' && final[o+1] > '9' || final[o] == '-' && final[o+1] < '0' )
        {memset(final+o, '\0', strlen(final)); break;}
 
        if (final[o] == '-')
        { 
        if (inct > maxx )
        {maxx = inct;} 
 
        maxy++;
        inct = 0;
        incd++;
            
            spcline[q] = incd;
            q++;
 
        }
        o++;
    }
maxy++;
maxx+=incd; 

char *tabler[maxx][maxy];
 
printf("\n\n");
    for (unsigned i = 0; i < maxy; i++){
     for (unsigned j = 0; j < maxx; j++){
        printf("%d ", tabler[i][j]);
 
     }
        printf("\n");
    } 
 

 
    end= clock();

// 1.0 seconds
// 0.1 = tenth of a second
// 0.01 = hundreth of a second
// 0.001 = thousandth of a second = milisecond
// 0.000001 = milionth of a second = microsecond
printf("\n%f ms", (double) (end-start)  / CLOCKS_PER_SEC);
 
return 0;
} 
 
  
 
    
 

