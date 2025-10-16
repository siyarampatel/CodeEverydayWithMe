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
// Q4=> 4. Sort an array of 0s, 1s and 2s (Dutch National Flag Problem)

#include<stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int arr[] ,int n){
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(&arr[low],&arr[mid]);
            low++;
            mid++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(&arr[mid],&arr[high]);
            high--;
        }
    }
}
void printArray(int arr [],int n){
        for(int i=0; i<n; i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
int main(){
    int arr [111];
    int n;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    printf("Enter %d elements(only 0 or 1 or 2)\n",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Before sorting\n");
    printArray(arr,n);
    sortArray(arr,n);
    printf("After sorting\n");
    printArray(arr,n);

    return 0;

}
// Q5=> Move all negative numbers to beginning and positive to end

#include<stdio.h>
int main(){
    int arr [111];
    int n;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int j=0;
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            arr[j]=arr[i];
        }
        j++;
    }
    for(int i=0; i<n; i++){
        if(arr[i]>0){
            arr[j]=arr[i];
        }
        j++;
    }

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

}

//Q6 => Find Union and Intersection of two arrays

#include<stdio.h>
int main(){
    int n;
    int a1[100];
    int a2[100];
    int a3[100];
    int a4[100];
    int i,j,k=0,l=0;
    int found;
    printf("Enter size of arrays: ");
    scanf("%d",&n);
    printf("Enter element in first array: \n");
    for(int i=0; i<n; i++){
        scanf("%d",&a1[i]);
    }
    printf("Enter elements in second array: \n");
    for(int i=0; i<n; i++){
        scanf("%d",&a2[i]);
    }
  //Union of array
    for(i=0; i<n; i++){
        a3[k++]=a1[i];              //copying of first array in a3 
    }
    for(int i=0; i<n; i++){
        found = 0;
        for(int j=0; j<k; j++){     //comparing elements of second array and first if equal then ignore them
            if(a2[i]==a3[i]){
                found = 1;
                break;
            }

        }
        if(found = 0){
            a3[k++]=a2[i];           //inserting elements of a2 which are different 
        }
    }

    printf("The union of arrays is: ");
    for(i=0; i<n; i++){
        printf("%d ",a3[i]);
    }
    printf("\n");

    //Intersection of array
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(a1[i] == a2[j]){
                a4[l++]=a1[i];
                break;
            }
        }
    }
printf("The intersection of arrays is: ");
    for(i=0; i<n; i++){
        printf("%d ",a4[i]);
    }
    printf("\n");
}
