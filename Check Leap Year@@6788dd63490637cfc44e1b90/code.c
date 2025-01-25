#include <stdio.h>
int main() {
    int a;
    printf("");
    scanf("%d",&a);
    (a%4==0 && a%100==0 || a%400==0)?printf("Leap Year"):printf("Not a Leap Year");
    return 0;
}