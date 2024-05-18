#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
 
int main()
{
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
                    o++;q++;
                final =  realloc (final, q*sizeof (char));
            }
 
           if (strlen(buffsum) == 1){
                    carry  = 0;
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
 memset( final+strlen(final), '\0', sizeof (char) );

int flen = q;
 
 
free (buffsum);
free (buffs2);
o = 0;

    

   char tablz [gig][gig*2];  
    int szt1 = sizeof tablz/ sizeof tablz[0];
    int szt2 = sizeof tablz[0]/ sizeof tablz[0][0];
    
    
// Fill SumTable with Zeros
    for (int i  = 0; i < szt1; i++ ){for (int j  = 0; j < szt2; j++ ){ tablz[i][j] = '0';}    }

    
// Transfer values in reverse to SumTable    
  o = 0;   
    for (int i  = 0; i < szt1; i++ ){
        for (int j  = szt2-1; j > -1; j-- ){
                        if (final[o] == '-'){o++; break;}
            tablz[i][j] = final[o];
                        if (o < strlen(final)){o++;}
        }     
    }
    
    free (final);
    

// No idea..    
    buffsum = malloc (sizeof(char)*6);
    buffs2 = malloc (sizeof(char)*6);
    char mander[szt2+1];
    o     = 0;
    sum   = 0;
    carry = 0;
    zrz   = 0;
    
    
    
    
    //Continue..
    
    //printf("%d", strlen(mander));
    
    
    
     
    //Output tablz
    for(unsigned i  = 0; i < szt1; i++){
         for(unsigned j  = 0; j < szt2; j++){
            printf("%c",tablz[i][j]);
        }
        printf("\n");
    }

    
   /*
    //Output final
    for (int i  = 0; i < strlen(final); i++ ){
        if (final[i] == '-'){i++; printf("\n");}
        printf("%c", final[i]);}
   */
 
return 0;
} 
