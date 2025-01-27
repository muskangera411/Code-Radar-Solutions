#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=0;j<a-i;){
            printf("%c ",'A'+1);
        }
        printf("\n");
    }
    return 0;
}