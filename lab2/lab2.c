#include <stdio.h>
typedef unsigned int u32;

u32 EuclidGCD(unsigned int m, unsigned int n)
{
    u32 r;
    int opcount = 0; // variable to count how many times the basic operation executes.
    while (n != 0)
    {
        opcount++;
        r = m % n;
        m = n;
        n = r;
    }
    for(int i =9;i<324;i++){

    }
    printf("Operation count = % d\n", opcount);
    return m;
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
