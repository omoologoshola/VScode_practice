#include <stdio.h>
#include<conio.h>
int main (){
int i, n, sum=0;
float ave;
printf("average of n numbers of integers\n");
printf ("How many integers do you want to find their average?\n");
scanf("%d", &n);

for (i=1; i<=n; i++);
{
    printf("enter the %d integers\n", i);
    scanf("%f", &a);
    sum = sum+a;
}
ave = sum/n;
printf("Average is: %f", ave);

return 0;
}








