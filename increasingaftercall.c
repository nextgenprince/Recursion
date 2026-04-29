#include <stdio.h>

void num(int n) {

    if(n==0)
    return;
    else
    num(n-1);
    printf("%d\n", n);
    return;
}
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    num(n);
    return 0;
}