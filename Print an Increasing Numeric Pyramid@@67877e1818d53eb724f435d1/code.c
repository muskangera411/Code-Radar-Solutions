#include <stdio.h>
int main(){
    int a;
    scanf("5d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=2*(n-i-1);j++){
            printf(" ");
        }
        for(int k=1;k<=2*i+1;k++){
            printf("%d ",k)
        }printf("\n");
    }
    return 0;
}