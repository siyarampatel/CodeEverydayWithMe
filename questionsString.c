//Q1=>Reverse a string
#include<stdio.h>
int main(){
    char str[20];
    char str1[20];
    printf("Enter your string: ");
    scanf("%s",str);
   
    int n = strlen(str);
    for(int i=0; str[i]!='\0'; i++){
        str1[i]=str[n-i-1];
    }
    str1[n]='\0';
    
    printf("%s",str1);
}

// Q2=>Palindrome 

#include<stdio.h>
int main(){
    char str[20];
    printf("Enter your string: ");
    scanf("%s",str);
    int isP=0;
    int n = strlen(str);
    for(int i=0; i<n/2; i++){
        if(str[i]==str[n-i-1]){
            isP=1;
        }
    }
    if(isP){
        printf("It's an palindrome");
    }
    else{
        printf("Not an palindrome");
    }
}
//Q3-> Remove duplicates from a string
#include<stdio.h>
int main(){
    char str[20];
    char str1[20];
    int i,j,k=0;
    int found;
    printf("Enter your string: ");
    scanf("%s",str);
    for(i=0; str[i]!='\0';i++){
        found = 0;
        for(int j=0; j<k; j++){
        if(str[i]==str1[j]){
            found=1;
        }
    }
    if(!found){
        str1[k]=str[i];
        k++;
    }
}
    str1[k]='\0';
    printf("The modified string is:%s",str1);
}
