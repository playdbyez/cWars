#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
int x = 124;
int y = 29;
size_t xlen = floor(log10(x))+1;
size_t ylen = floor(log10(y))+1;


int res=0;


unsigned n = 1; // base incrementr
unsigned m = 1; // exponent incrementr
unsigned o = 0;
unsigned q = 0;


int bas;     // last char of multiplicand X
int expo;    // last char of multipliyer Y
char buffx[xlen];
char buffy[ylen];

sprintf(buffx ,"%d",x);
sprintf(buffy ,"%d",y);


char buffsum[3];
int sum = 0;
int sumtemp = 0;
int carry =0;
char final[(strlen(buffx))*4][strlen(buffy)];


for (int i = strlen(buffy); i > -1; i--){       expo = buffy[strlen(buffy)-m] -48;
    
    for (int j = strlen(buffx); j > -1; j--){
        
                                                bas  = buffx[strlen(buffx)-n] -48;
        
        
        sum  = expo * bas;
        
        sumtemp = sum + carry;
        printf("%d\n", sumtemp);
        sprintf(buffsum,"%d", sumtemp);
        
        if(j != 0){
                    final[q][o]= buffsum[1];q++;
                    carry = buffsum[0]-48;
        }
        
        if (j == 0 ){
         final[q][o] = buffsum[1]; q++;
         final[q][o]= buffsum[0];
         carry = 0;
        }            
                    
        
        n++;
    }
    n =1;
    q = 0;
    o++;
    m++;
}


/*
for (int i = 0; i < sizeof final / sizeof final[0]; i++){
    for (int j =0; j < sizeof final; j++){
printf("%c ",final[i][j]);

}
printf("\n");
}
*/


//printf("%s\n%s",buffy,buffx);

    
return 0;
}
