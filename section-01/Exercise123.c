#include <stdio.h>
#include <stdlib.h>
// This is teh code that contains Exercises 1,2,3 from embedded onboarding

//(Exercise 2):FizzBuzz function as described in the instructions
void FizzBuzz(int n){
    
    if (n%3==0 && n%5==0){
        printf("FizzBuzz\n");
    }

    else if (n%3==0){
        printf("Fizz\n");
    }

    else if (n%5==0){
        printf("Buzz\n");
    }
        
    else printf("\n");
}

int ComparisonFunction(const void *x_arg, const void *y_arg)
{
    int x = *(int *)x_arg;
    int y = *(int *)y_arg;

    if(x<y){
        return 1;
    }
    else if (x>y){
        return -1;
    }
    else return 0;
}

//Main function prints hello world! and then fizzbuzz 
// and then qsort
int main() {     
    printf("Hello, World!\n");

    int *arr = malloc(20*sizeof(int));

    //populate array with numbers from 1 to 20
    for (int i=0; i<20; i++){
        arr[i]=i+1;
    }

    printf("FizzBuzz on array\n");
    for (int i=0; i<20; i++){
        printf("%d: ",i+1);
        FizzBuzz(arr[i]);
    }

    printf("\nFizzBuzz from 1 to  30\n");
    
    for (int i=1; i<=30; i++){
        printf("%d: ",i);
        FizzBuzz(i);
    }  


    printf("\nQSORT algorithm:");
    qsort(arr, 20, sizeof(int), ComparisonFunction);
    
    for (int i=0; i<20; i++){
        printf("\na[%d]=%d", i+1, arr[i]);
        }

    return 0;
}