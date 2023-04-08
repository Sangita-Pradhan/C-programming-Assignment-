#include<stdio.h>
#include<math.h>
int main()
{
    int n, i, total = 0, power;
    printf("Number of odd nums : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        total = total + (i*2-1);
    }
    printf("sum of first %d odd nums = %d\n",n,total);
    power = pow(n,2);
    printf("%d^2 = %d\n",n,power);
    
    if(total == power)
        printf("Condition satisfied");
    else
        printf("Condition not satisfied");
    return 0;
}