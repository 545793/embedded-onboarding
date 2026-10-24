#include <stdio.h>
#include <stdlib.h>
// This is teh code that contains Exercises 1,2,3 from embedded onboarding

//FizzBuzz function as described in the instructions
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

//Main function prints hello world! and then fizzbuzz 
int main() {     
    printf("Hello, World!\n");

    int *arr = malloc(20*sizeof(int));

    //populate array with numbers from 1 to 20
    for (int i=1; i<=20; i++){
        arr[i]=i;
    }



    printf("FizzBuzz on array\n");
    for (int i=1; i<=20; i++){
        printf("%d: ",arr[i]);
        FizzBuzz(arr[i]);
    }

    printf("\nFizzBuzz from 1 to  30\n");
    
    for (int i=1; i<=30; i++){
        printf("%d: ",i);
        FizzBuzz(i);
    }  
    return 0;
}
