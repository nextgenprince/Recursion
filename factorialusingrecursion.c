#include <stdio.h> 

int factorial(int n)
{
    if(n == 0) // base case
    return 1;
    else 
    return n * factorial(n-1); // recursive calling
    
}
int main() {

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Factorial = %d", factorial(num));
    return 0;
}