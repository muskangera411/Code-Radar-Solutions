#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }int p=0;
    for(int i=0;i<a/2;i++){
        if(arr[i]==arr[a-i-1]){
            p=1;
        }
        
    }
    if(p==1){printf("YES");}
    else{printf("NO");}
    return 0;
}
