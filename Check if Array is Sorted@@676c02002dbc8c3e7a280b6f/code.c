#include <stdio.h>
int main(){
    int a; int arr[a];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int sort=0;
    for(i=0;i<a;i++){
        if(arr[i]<=arr[i+1]){sort=1;}
        else{sort=0;}
    }if(sort==1){printf("Sorted");}
    else{printf("Not Sorted");}
    return 0;
}