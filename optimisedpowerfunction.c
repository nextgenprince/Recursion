#include <stdio.h>

int power(int a, int b) {

    if(b==1)
    return a;
    int x = power(a,b/2);
    if(b%2 == 0)
    return x*x;
    else
    return x*x*a;
 
}

int main() {
    int a,b;
    printf("Enter the number a: ");
    scanf("%d", &a);
    printf("Enter the number b: ");
    scanf("%d", &b);

    int result = power(a,b);
    printf("%d", result);
}