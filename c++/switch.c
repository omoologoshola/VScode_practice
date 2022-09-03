#include <stdio.h>
int main (){
    int num;
printf("what number do you want to check?\n");
scanf("%d", &num);

switch (num<0)
{
case 1:
    printf("Your number is negative");
    break;
case 0:
switch (num>0)
{
case 1:
    printf("Your number is positive");
    break;
case 0:
    printf("Your number is odo");
    break;
} 
break;
}
return 0;
}