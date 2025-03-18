#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int minDiff=0;
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if((arr[i]-arr[j]<minDiff)||(arr[j]-arr[i]<minDiff)){
                minDiff=arr[i]-arr[j];
            printf("%d %d",arr[i],arr[j]);
            }
        }
    }
    
}