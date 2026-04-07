#include <stdio.h>

int main(){

    char string[50],temp;
    int n=0,start=0,end;

    printf("enter your string: ");
    fgets(string,sizeof(string),stdin);

    for(int i = 0; string[i] != '\0';i++){
    if(string[i] == '\n'){
        string[i] = '\0';
        break;
    }
        n++;
    }
    end = n-1;

    while(start < end){
        temp = string[start];
        string[start] = string[end];
        string[end] = temp;
        start++;
        end--;
    }

    printf("%s",string);

    return 0;
}