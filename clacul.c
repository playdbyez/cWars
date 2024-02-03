
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
int x = 124;
int y = 29;
size_t xlen = floor(log10(x))+1;
size_t ylen = floor(log10(y))+1;


char buffx[xlen];
char buffy[ylen];

sprintf(buffx ,"%d",x);
sprintf(buffy ,"%d",y);
printf("%s\n%s",buffy,buffx);
    
    
    
    
}
