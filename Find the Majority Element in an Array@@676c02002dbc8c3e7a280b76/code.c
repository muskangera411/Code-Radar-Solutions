#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int max=0,max_freq;
    for(int i=0;i<a;i++){
        int count=-1;
        for(int j=i+1;j<a;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(max<count){
            max=count;
            max_freq=arr[i];
        }
        
    }
    printf("%d",max_freq);
    return 0;
}