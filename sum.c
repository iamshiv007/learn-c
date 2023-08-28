// Sum of to numbers
// #include <stdio.h>

// int main() {

//     int num1 = 10;
//     int num2 = 20;
//     int sum = num1 + num2;

//     // Write C code here
//     printf("The sum of %d and %d is %d\n", num1, num2, sum);

//     return 0;
// }


// Sum of numbers given by user

// #include <stdio.h>

// int main()
// {
//     int numCount, i;
//     int total = 0;

//     printf("Enter the count of numbers: ");
//     scanf("%d", &numCount);

//     printf("Enter %d numbers:\n", numCount);

//     for (i = 0; i < numCount; i++)
//     {
//         int num;
//         scanf("%d", &num);
//         total += num;
//     }

//     printf("The sum of the entered numbers is: %d\n", total);

//     return 0;
// }


// Sum of all numbers given by user
#include <stdio.h>

int main() {
    int num, total = 0;

    printf("Enter numbers separated by spaces (end with -1):\n");

    do{
        scanf("%d", &num);
        
       if(num != -1){
        total += num;
       }
       
    } while(num != -1);

    printf("The sum of the entered numbers is: %d\n", total);

    return 0;
}