#include <stdio.h>
int main(){
    char a[100],b[100];
    scanf("%s(^\n)%*c \n %s(^\n)%*c",&a,&b);
    printf("%s and %s",a,b);
    return 0;

}