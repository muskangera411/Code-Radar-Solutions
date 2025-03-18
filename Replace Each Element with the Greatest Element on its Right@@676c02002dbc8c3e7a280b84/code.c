#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
    int nextGreater=-1;
        for(int j=i+1;j<a;j++){
            if(arr[j]>arr[i]){
                nextGreater=arr[j];
                
            }
        }
                
        printf("%d ",nextGreater);
    }
    return 0;
}
