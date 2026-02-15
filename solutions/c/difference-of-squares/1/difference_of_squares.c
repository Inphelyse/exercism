#include "difference_of_squares.h"
unsigned int sum_of_squares(unsigned int number){
    unsigned int sum = 0;
    for(unsigned int i = 1; i <= number; i++){
        sum += i*i;
    }

    return sum;
}

unsigned int square_of_sum(unsigned int number){
    unsigned int sum = 0;
    for(unsigned int i = 1; i <= number; i++){
        sum += i;
    }
    unsigned int result = sum * sum;
    
    return result;
}
unsigned int difference_of_squares(unsigned int number){
    unsigned int sum = 0, first, second;
    first = sum_of_squares(number);
    second = square_of_sum(number);

    sum = second - first;
    return sum;
}