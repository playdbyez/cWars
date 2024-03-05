#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
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
 
 
    char *final; 
    final = (char*) malloc (gig * sizeof (char));
    q = gig;
 
 
for (unsigned long long i = strlen(buffy) ; i > 0 ; i--){  
    while (w < v){final[o] = '0';w++;o++;q++;final =  realloc (final, q*sizeof (char));}
    v++;
 
 expo = buffy[strlen(buffy)-m] -48;
 carry = 0;
    for (unsigned long long j = strlen(buffx) ; j > 0 ; j--){
 
                                                bas  = buffx[strlen(buffx)-n] -48;
        sum  = expo * bas;
        zrz = 0;
 
        sum= carry+sum;
        sprintf(buffsum,"%lld", sum);
        if (sum == 0 ){zrz = 1;}
        if (zrz == 1 ){carry = 0;}
        if(j != 1){
            if(strlen(buffsum) > 1){
                    buffs1[0] = buffsum[0];
                    buffs2[0] = buffsum[1];
                    if (strlen(buffsum) > 1)carry     = buffs1[0]-48;
                    final[o]  = buffs2[0];
                    o++;q++;
                final =  realloc (final, q*sizeof (char));
            }
 
            if (strlen(buffsum) == 1){
                    carry  = 0;
                    o++;q++;
                    final[o]  = buffsum[0];
                    o++;q++; 
                final =  realloc (final, q*sizeof (char));
 
            }
        }
 
        if (j == 1 ){
            if (strlen(buffsum) > 1){
        final[o] = buffsum[1];o++;q++;
                final =  realloc (final, q*sizeof (char));
        final[o] = buffsum[0];o++;q++;
                final =  realloc (final, q*sizeof (char));
            }
            if (strlen(buffsum) == 1){final[o] = buffsum[0];o++;q++;
                final =  realloc (final, q*sizeof (char));}
        }            
        n++;
    }
    if (i != 1){final[o] = '-';}
    carry = 0;
    o++;q++;
    final =  realloc (final, q*sizeof (char));
    n =1;
    m++;
    w=0;
}
 
//check if improvments are made by
//changing final[o] to pointer
 
int flen = q;
 
 
 
free (buffsum);
free (buffs2);
o = 0;
sum   = 0;
carry = 0;
    int fst = 0;
    int nodi = 0;
char finplus[strlen(final)/2];
 
    for(int i = 0; i < strlen(final); i++){
        carry = 0;
        for(int j = 0; j < strlen(final); j++){
            if (isdigit(final[j])) {nodi = 1;}
            if (j == 0 && fst == 0){sum+= final[j]-48;j++;j++; final[j-2] = '-';fst = 1;}
            if (final[j-1] == '-' && isdigit(final[j]) ){sum+=final[j]-48;j++;j++; final[j-2] = '-';}    
            if  (nodi == 0 && j == strlen(final)-1){nodi = 0;break;}
 
 
 
        }
        zrz = 0;
        sum= carry+sum;
        sprintf(buffsum,"%lld", sum);
        if (sum == 0 || strlen (buffsum) == 1){zrz = 1;}
        
        if (zrz == 1 ){carry = 0;}
 
 
        if (nodi == 0){break;}
        nodi = 0;
     //printf("%s", final);   
}    
 free (final);
 memset(final, '\0', flen);
 
 
    end= clock();
 
// 1.0 seconds
// 0.1 = tenth of a second
// 0.01 = hundreth of a second
// 0.001 = thousandth of a second = milisecond
// 0.000001 = milionth of a second = microsecond
printf("\n%f ms", (double) (end-start)  / CLOCKS_PER_SEC);
 
return 0;
} 
 
 
