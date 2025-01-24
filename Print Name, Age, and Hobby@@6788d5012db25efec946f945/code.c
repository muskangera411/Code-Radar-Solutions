#include <stdio.h>
int main(){
    char a[15];
    int b;
    char c[15];
    scanf("%s(^\n)%*c %d %s(^\n)%*c",&a,&b,&c);
    printf("Name: %s\n",a);
    printf("Age: %d\n",b);
    printf("Hobby: %s\n",c);
    return 0;
}