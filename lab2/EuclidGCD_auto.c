#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned int u32;

typedef struct _res_
{
    int opc;
    u32 mpn;
} Result;
Result *new()
{
    Result *r = (Result *)malloc(sizeof(Result));
    r->mpn = 0;
    r->opc = 0;
    return r;
}
Result *EuclidGCD(unsigned int m, unsigned int n)
{
    Result *k = new();
    u32 r;
    int opcount = 0; // variable to count how many times the basic operation executes.
    while (n != 0)
    {
        opcount++;
        r = m % n;
        m = n;
        n = r;
    }
    printf("Operation count = % d\n", opcount);

    k->mpn = m;
    k->opc =  opcount;
    return k;
}
void EuclidGCD_auto()
{
    
}
int main()
{
    u32 m = 0, n = 0;
    printf("Enter the two numbers whose GCD has to be calculated");
    scanf("%d", &m);
    scanf("%d", &n);
    printf("GCD of two numbers using Euclid's method is % d",
           EuclidGCD(m, n));
    return 0;
}
