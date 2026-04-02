#include <stdio.h>

    //Given an array, find the second largest element without sorting.
    void second_max(int num[], int n){
        int num_max,i,num_second_max,found = 0;
        num_max = num[0];
        num_second_max = num[0];

            for(i=1; i<n; i++){
                if(num[i] > num_max){
                    num_second_max = num_max;
                    num_max = num[i];
                    found = 1;
                }
                else if(num[i] != num_max && (num_second_max == num_max || num[i] > num_second_max)){
                    num_second_max = num[i];
                    found = 1;
                }
            }
            if(found == 0){printf("no second largest");}

           else{ printf("you3 second larget number is %d",num_second_max); }
    }
 
int main() {
    int num[50],i=0,num_input,n=0;

    printf("Enter how many numbers you want to feed ");
    scanf("%d",&num_input);

    for(i = 0;i < num_input;i++){
    printf("Enter you array input: ");
    scanf("%d", &num[i]);
    }

    if(num_input < 2){
    printf("Not enough elements\n");
    return 0;
    }

second_max( num, num_input);
    return 0;
}