#include <stdio.h>
int main() {
    int a,b,c;
    printf("");
    scanf("%d %d %d ",&a,&b,&c);
    if(a==b && b==c && a==c){printf("Equilateral");}
    else if((a==b && b!=c && a!=c) || (a==c && a!=b && b!=c) ||(a==b && a!=c && b!=c)){printf("Isosceles");}
    else{printf("Scalane");}

    return 0;
}