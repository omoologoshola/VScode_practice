#include <stdio.h>

/*int main (){
    int i=0;
    do
    {
        printf("%u\n", i);
    i++;
    } while (i<=10);
    
    
    return 0;
}*/

// to break a loop, simply put if (condition) break; e.g if (i<=4) break; before the end of the curly bracket

int main (){
    int i=0;
    do
    {
        printf("%u\n", i);
    i++;
    if (i<=4) break;
    } while (i<=10);
    
    
    return 0;
}