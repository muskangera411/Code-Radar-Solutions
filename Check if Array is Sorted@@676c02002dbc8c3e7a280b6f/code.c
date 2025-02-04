#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int sort=1;
    for(int i=0;i<a-1;i++){
        if(arr[i]>arr[i+1]){sort=0;break;}
        
    }if(sort==0){printf("Not Sorted\n");}
    else{printf("Sorted\n");}
    return 0;
}