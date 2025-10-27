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
