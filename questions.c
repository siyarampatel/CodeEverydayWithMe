//Q1=>Find the maximum and minimum element in an array        

#include<stdio.h>
int main(){
    printf("Enter size of array: ");
     int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in array:");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int max = a[0];
    for(int i=0; i<n; i++) {
        if(a[i]>max){
            max = a[i];
        }
        
    }
    printf("The maximum element is %d\n",max);
    int min = a[0];
    for(int i=0; i<n; i++) {
        if(a[i]<min){
            min = a[i];
        }
        
    }
    printf("The minimum element is %d",min);

}
