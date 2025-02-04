#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int sort=0;
    for(i=0;i<a-1;i++){
        if(arr[i]<arr[i+1]){sort=1;}
        else if(arr[i]>arr[i+1]){sort=0;}
    }if(sort==0){printf("Not Sorted");}
    else{printf("Sorted");}
    return 0;
}