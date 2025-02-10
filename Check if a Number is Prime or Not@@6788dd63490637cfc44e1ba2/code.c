#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<=1){
        printf("Not Prime");
        return 0;
    }
    int prime=1;
    for(int i=2,a<a-i,i++){
        if(a%i==0){prime=0;break;}
    }
    if(prime){printf("Prime");}
    else{printf("Not Prime");}
    return 0;
    
}