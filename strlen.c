#include <stdio.h>

int main(){
    char string[50];
    int n=0;

    printf("enter your string: ");
    fgets(string,sizeof(string),stdin);

    for(int i = 0; string[i] != '\0';i++){
    if(string[i] == '\n'){
        string[i] = '\0';
        break;
    }
        n++;
    }
    printf("length of your string is: %d",n);
    return 0;
}