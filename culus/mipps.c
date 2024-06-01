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
