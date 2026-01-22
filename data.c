#include <math.h>
#include <stdio.h>

int main()
{
    double x1 = 1.5;
    
    // scalbn function for double
    double result1 = scalbn(x1, 4);

    printf("%Lf",result1);
    return 0;
}
