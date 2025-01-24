#include <stdio.h>
int main(){
    char a[10];
    int b;
    char c[10];
    scanf("%s(^\n)%*c %d\n",&a,&b);
    scanf("%s(^\n)%*c",&c);
    printf("Name: %s\n",a);
    printf("Age: %d\n",b);
    printf("Hobby: %s\n",c);
    return 0;
}