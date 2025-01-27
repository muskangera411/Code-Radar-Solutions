#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int prime=0;

    for(int i=2;i<a;i++){
        if(a%i!=0){prime=1;break;}
        }
    if(prime){printf("Prime");}
    else if(a==0 || a==1){printf("Not Prime");}
    else{printf("Not Prime");}
    return 0;
}