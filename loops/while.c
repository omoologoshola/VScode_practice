#include <stdio.h>
/* to increas where i<10 means 10 will not be included, to include 10 use i<=10
int main (){
    int i=0;
    while (i<10)
    {
    printf("%u\n", i);
    i++;
    }
    
    return 0;
}
int main (){
    int i=0;
    while (i<=10)
    {
    printf("%u\n", i);
    i++;
    }
    
    return 0;
}*/
// to descend using while loop i>0 or i>=o only indicates the stoping point

/*int main (){
    int i=10;
    while (i>0)
    {
    printf("%u\n", i);
    i--;
    }
    
    return 0;
}

int main (){
    int i=10;
    while (i>0)
    {
    printf("%u\n", i);
    i= i-2;
    }
    
    return 0;
}*/

/*int main (){
    int i=0;
    while (i<=10)
    {
    printf("%u\n", i);
    i=i+ 2;
    }
return 0;
   
}*/
// last program increases at an interval

/*int main (){
    int i=0;
    while (i<=10)
    {
    printf("%u\n", i);
    i=i+ 2;
    if (i==6) break;
    }
return 0;
   
} */

// the program above helps break out of loop by using if (i==6) break;
// the program below helps continue in the loop by using the syntax if (i==4) {continue};


int main(){
for (int i = 0; i < 10; i++) {
  printf("%d\n", i);
  if (i == 4) {
     continue;
  }
}
return 0;
}