#include <stdio.h>
int main(){
    char a[20],b[20];
    scanf("%s(^\n)%*c \n %s(^\n)%*c",&a,&b);
    printf("%s and %s",a,b);
    return 0;

}