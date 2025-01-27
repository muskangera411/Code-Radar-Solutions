#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=a;j>=0;j--){
            printf("%d",j)
        }
        printf("\n");
    }
    return 0;
}