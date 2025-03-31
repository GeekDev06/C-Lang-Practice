#include <stdio.h>
int main (){
    int, num, count;
    int fact=1;
    printf ("Enter a number to find its factorial\n");
    scanf ("%d",&num);
    for (count=1; count<=num; count++){
        fact= fact*count;
    }
    printf ("Factorial if %d is %d \n", num, fact);
    return 0;
}