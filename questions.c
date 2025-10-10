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
//Q2=> Reverse an array in place

#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //for revresing of array

    int temp;
    for(int i=0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
        
    }
    //Printing of array 
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}

//Q3 => Find the 'Kth' max and min element of an array

#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //Sorting of array
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++)
        if(arr[i]>arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    //for kth maximum number 
        printf("For kth maximum and minimum number choose an number from 1 to %d: ",n);
        int k; 
        scanf("%d",&k);
        printf("The %dth minimum is %d\n",k,arr[k-1]);
        printf("The %dth maximum is %d",k,arr[n-k]);
}


