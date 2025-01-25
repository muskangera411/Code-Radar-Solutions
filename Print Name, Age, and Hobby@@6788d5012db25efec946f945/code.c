#include <stdio.h>
int main(){
    char a[10];
    int b;
    char c[10];
    scanf("%s %d %s",&a,&b,&c);
    printf("Name: %s\n",a);
    printf("Age: %d\n",b);
    printf("Hobby: %s\n",c);
    return 0;
}