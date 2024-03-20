//IN this file I'm learning Array's in c
/*-Arrays in c are the group of Homogeneous items that are stored in a variable. 

-Instead of declaring different variable's for various same values, we use Arrays to make them at one place.

-When we initialize an Array of certain type compiler gives it space in run time (dynamically-during compilation process)

-The assigned memory have some garbage value stored in it by random, we have to give the value to those memory locations to have 
meaning value particualar block.

-Compailer assigns the memory block to the array at one place, eg: if i need to strore an array of numbers of size 10, then compailer 
assigns memory for 10 blocks at one place each of size 4bytes total of 40 bytes*/




#include <stdio.h>
int n,s=0;
void reverseArray(int arr[n]){
    printf("\nReversed array is\n");
    for(int i = n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
}
int CreateAndPrintArray(){
    printf("Please enter number of elements you wanted to enter\n");
     scanf("%d",&n);
    
    int Arr1[n];
    //takes input for each index
    printf("Enter the values \n");
    for(int i=0; i<n ; i++){
      scanf("%d",&Arr1[i]);
    }
    
    printf("The desired array is ");
    //prints all the elements of the array
    for(int i=0; i <n; i++){
      printf("%d ", Arr1[i]);
      s+=Arr1[i];
    }
    return Arr1[n];
}
int main() {
   
   //1. Write a program to find the sum of all elements in an integer array.


    // CreateAndPrintArray();
    // printf("\nSum of all the elements in the Array is %d",s);



 // Implement a function to reverse an array in C.
 
 reverseArray(CreateAndPrintArray());
 
// Create a program to find the largest element in an array.

// Write a C program to merge two arrays into a third array.
// Implement a function to check if an array is sorted in ascending order.
// Create a program to remove duplicate elements from an array in C.
// Write a function to rotate an array to the right by a given number of positions.
// Implement a program to find the second largest element in an array.
// Write a C program to count the number of occurrences of a specific element in an array.
// Create a function to find the intersection of two arrays in C.
    
    
    
     //Implement a function to reverse array in C



    return 0;
}