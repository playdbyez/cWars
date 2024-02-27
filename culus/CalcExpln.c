//https://www3.cs.stonybrook.edu/~skiena/algorist/book/programs/bignum.c
//https://gmplib.org/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
int x = 24;
int y = 25;

size_t xlen = floor(log10(x))+1;
size_t ylen = floor(log10(y))+1;


char buffx[xlen+1];
char buffy[ylen+1];

sprintf(buffx ,"%d",x);
sprintf(buffy ,"%d",y);


int bas;     
int expo;

char buffsum[3];
char buffs1[3];
char buffs2[3];


int sum    = 0;
int carry  = 0;
unsigned n = 1; 
unsigned m = 1; 
unsigned o = 0;


char final[(strlen(buffx))*4];

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

printf("\n\n%s", final);


return 0;
} 
