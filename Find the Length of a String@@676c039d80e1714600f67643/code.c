#include <stdio.h>
int main(){
    char a[15];
    scanf("%s",&a);
    length=sizeof(a)/sizeof(a[0]);
    printf("%d",length);
    return 0;
}