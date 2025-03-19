#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int freq[a];
    int count=1;
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if(arr[i]==arr[j]){
                count++;
                
            }
            freq[count++]=count;
    for(int k=0;k<a;k++){
        int max=0;
        if(freq[k]>max){
            max=freq[k];
        }
    }
        }
    }
}