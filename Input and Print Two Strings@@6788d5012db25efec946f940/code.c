#include <stdio.h>
int main(){
    char a[10],b[10];
    scanf("%s(^\n)%*c \n %s(^\n)%*c",&a,&b);
    printf("%s and %s",a,b);
    return 0;

}