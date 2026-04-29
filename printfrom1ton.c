#include <stdio.h>

void increasing(int x, int n) {

    if(n==0)
    return;
    else
    printf("%d\n", x);
    increasing(x+1, n-1);
    return;
   /*if(x>n)
    return;
    else
    printf("%d\n",x);
    num(x+1,n);
    return;*/
}


int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    increasing(1,n);
    return 0;
}