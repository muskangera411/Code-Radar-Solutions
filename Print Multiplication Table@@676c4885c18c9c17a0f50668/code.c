#include <stdio.h>
int main(){
    int a;
    printf("");
    scanf("%d",&a);
    int i;
    for(i=1;i<=10;i++){printf("%dX%d=%d",a,i,a*i);}
}