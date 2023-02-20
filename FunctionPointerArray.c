#include <stdio.h>

typedef double (*pf)(double x);  /*this defines a type pf */

double f1(double x) { return(x+x);}
double f2(double x) { return(x*x);}

pf pa[] = {f1, f2};

main()
{
    pf p;
    p = pa[0];
    printf("%f\n", p(3.0));
    p = pa[1];
    printf("%f\n", p(3.0));
}