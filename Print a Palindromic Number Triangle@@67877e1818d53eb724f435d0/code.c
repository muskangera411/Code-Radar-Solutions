#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        for(j=0;j<a-i;j++){printf(" ");}
        for(j=1;j<i+1;j++){printf("%d",j);}
        for(j=i-1;j>=1;j--){printf("%d",j);}
        printf("\n");
    }
    return 0;
}