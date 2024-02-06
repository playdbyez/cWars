#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
int x = 124;
int y = 69;
size_t xlen = floor(log10(x))+1;
size_t ylen = floor(log10(y))+1;

char buffx[xlen];
char buffy[ylen];

sprintf(buffx ,"%d",x);
sprintf(buffy ,"%d",y);

char final[(strlen(buffx))*4];

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


for (int i = strlen(buffy) ; i > 0 ; i--){       expo = buffy[strlen(buffy)-m] -48;
    
    for (int j = strlen(buffx) ; j > 0 ; j--){
        
                                                bas  = buffx[strlen(buffx)-n] -48;
        sum  = expo * bas;
        printf("expo is = %d\n", expo);
        printf("bas is = %d\n", bas);
        sum+= carry;
        
        printf("%d\n", sum);
        sprintf(buffsum,"%d", sum);
        
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
                    final[o]  = buffsum[0];
                    o++;
            }
        }
        
        if (j == 1 ){
            
        final[o] = buffsum[0];o++;
        final[o] = buffsum[1];o++;
        }            
        n++;
    }
    final[o] = ' ';
    carry = 0;
    o++;
    n =1;
    m++;
}

printf("\n\n%s", final);

return 0;
}
