#include <stdio.h>

int path(int n) {
    if(n==0 || n==1)
    return 1;
    else if(n==2)
    return 2;
    else
    return path(n-1)+path(n-2)+path(n-3);
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int result = path(n);
    printf("The no. of possible ways is %d", result);
    return 0;
}