#include <stdio.h>

void reverse(int arr[], int start, int end){
    int temp;

    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }

}

int main(){

    int num_input[50],num,start,end;

    printf("number of elements in series: ");
    scanf("%d", &num);

    start = 0;
    end = num-1;

     for(int n=0 ;n < num ;n++){
        printf("enter your element: ");
        scanf("%d",&num_input[n]);
    }
    reverse(num_input,start,end);

    for(int i = 0; i < num; i++){
    printf("%d ",num_input[i]);
    }
    return 0;
}