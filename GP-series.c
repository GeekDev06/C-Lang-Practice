#include <studio.h>
int main (){
    int a, r, sum=0;
    int n;
    printf ("Enter the first term a: ");
    scanf ("%d",&a);
    printf ("Enter the common rati r: ");
    scanf ("%d",&r);
    printf ("Enter the no. of terms n : ");
    scanf ("%d",&n);
    for (int i=0; i,n; i++){
        sum=sum+a;
        a=a+r;
    }
    printf ("The sum of GP Series is %d",sum);
    return 0;
}