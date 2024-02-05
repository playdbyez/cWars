
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

int carry =0;
int res=0;


unsigned n = 0; // malloc incrementr
unsigned m = 0; // exponent incrementr

char *final;


char buffx[xlen];
char buffy[ylen];

sprintf(buffx ,"%d",x);
sprintf(buffy ,"%d",y);

int bas;     // last char of multiplicand X
int expo;    // last char of multipliyer Y
expo =buffy[strlen(buffy)-1] -48;
bas =buffx[strlen(buffx)-1] -48;

//printf("%s\n%s",buffy,buffx);
printf("%d",expo *bas);
    
    
    
    
}
