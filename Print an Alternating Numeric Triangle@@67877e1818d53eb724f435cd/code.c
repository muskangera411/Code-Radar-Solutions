#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            m=(i+j)%2;
            printf("%d ",!m);
        }
        printf("\n");
    }
    return 0;
}