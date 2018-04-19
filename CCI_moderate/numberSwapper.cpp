#include <iostream>
#include <stdlib.h>

/*
*  Write a function to swap a number in place (without
*  using temporary variables). I have solved this with the
*  assumption the numbers are integers.
*/

void swap(int* a, int* b) {
    if (a == b) {
        // then the pointers are pointing at the same location so there is no swapping needed
        return;
    }

    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main(int argc, char *argv[]) {
    // argv[0] is the character array that is the name of the executable
    // argv[1 and 2] are the two values the user inputted, giving argc a value totaling 3
    if (argc != 3) {
        std::cout << "The number of inputs was incorrect, there should be three." << std::endl;
        return 0;
    }

    int numberOne = atoi(argv[1]);
    int nubmerTwo = atoi(argv[2]);

    int* a = &numberOne;
    int* b = &nubmerTwo;

    std::cout << "The two numbers to swap are " << numberOne << " and " << nubmerTwo
        << " which are at addresses " << a << " and " << b << " respectively." << std::endl;

    swap(a, b);

    std::cout << "The two numbers that were swapped are " << numberOne << " and " << nubmerTwo
        << " which are at addresses " << a << " and " << b << " respectively." << std::endl;

    return 0;
}