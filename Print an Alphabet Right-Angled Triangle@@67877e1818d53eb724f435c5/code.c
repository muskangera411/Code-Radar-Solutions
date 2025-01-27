#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=65+a;j++){
            printf("%X",j);
        }
        printf("\n");
    }
    return 0;
}