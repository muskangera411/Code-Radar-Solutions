#include <stdio.h>
int main(){
    int num,a;
    scanf("%d %d",&num,&a);
    printf("%d",num|(1<<a));
    return 0;
}