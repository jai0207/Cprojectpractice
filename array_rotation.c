#include <stdio.h>

void leftRotate(int arr[], int n){
    int temp,i;
        temp = arr[0];
    for(  i = 0; n-1>i; i++ ){

        arr[i] = arr[i+1];
        }
        arr[n-1] = temp;

       /* if (rotate > 0){
            leftRotate(arr ,  n ,rotate);
            rotate--;
        }*/
}

int main(){

    int num_input[50],num,i,rotate;

    printf("number of elements in series: ");
    scanf("%d", &num);

    printf("Enter the amount of times this should be rotated: ");
    scanf("%d", &rotate);

    if( rotate>num){
        rotate = rotate % num;
    }

    for(int n=0 ;n < num ;n++){
        printf("enter your element: ");
        scanf("%d",&num_input[n]);
    }

    printf("your series is: \n");
    for (int i = 0;i < num; i++ ){
        printf("%d ",num_input[i]);
    }printf("\n");

    for(int i = 0; i < rotate; i++){
    leftRotate(num_input, num);
}
    for( i = 0 ; i < num; i++){
    printf("%d ",num_input[i]);
    }

    return 0;
}