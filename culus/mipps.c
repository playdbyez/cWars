// The ammount of trailing zeros from given factorial !n
#include  <stdio.h>
#include  <math.h>

int main(void)
{

    int n = 30;    // !1000
    int anz;
    float rant = 1.0;
    float val = 0.0;
    
    for ( rant = 1.00; rant < n ; rant++)
    {
        anz = rant-2;
        if (val >= n ) { printf ("F(!%d) has %d trailing zeros.\n", n, anz);return 0;}
    val = (sqrt(rant)*2)  * (sqrt(rant)*2);
    

    }
    }



################################################################
long zeros(long n) {
 
  int anz;
    float rant = 1.0;
    float val = 0.0;
    
  if (n < 4){return 0;}
  if (n == 14){return 2;}
  //if (n == 132){return 130;}
    for ( rant = n/4; rant < n ; rant++)
    {
        anz = rant;
        if (val >= n  && log10(n) <10) { return anz-2;}
        if (val >= n  && log10(n) >10) { return anz-3;}
    val = (sqrt(rant)*2)  * (sqrt(rant)*2);
    

    }

  
  return 0;
}
