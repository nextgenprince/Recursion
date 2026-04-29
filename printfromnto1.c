#include <stdio.h>

void num(int n) {

    if(n==0)
    return;
    else
    printf("%d\n", n);
    num(n-1);
    return;
}
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    num(n);
    return 0;
}