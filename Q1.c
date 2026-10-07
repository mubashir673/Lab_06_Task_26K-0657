#include <stdio.h>

int main() {
    
    int highest,lowest,difference,sum,avg,count;
    int signals[12];
    highest = 0;
    lowest = 10000;
    sum = 0;
    int temp,temp2;

    for( int i = 0 ; i <= 12 ; i++ ){
        printf("\n Enter no of cars waiting: ");
        scanf("\n %d" , &signals[i]);
    }

    for( int i = 0 ; i <= 12 ; i++ ){
        sum += signals[i];
    }
    avg = sum / 10;
    printf("\n The average cars at the signals are %d" , avg);

    for( int i = 0 ; i <= 13 ; i++ ){

        if( signals[i] > avg ){
            count += 1;
            printf("\n Signal %d is overloaded." , i);
        }

        if( signals[i] > highest ){
            highest = signals[i];
            temp = i;
        }

        if( signals[i] < lowest ){
            lowest = signals[i];
            temp2 = i;
        }

    }

    difference = highest - lowest;
    printf("\n Difference between the highest and lowest cars is: %d " , difference);

    return 0;
}