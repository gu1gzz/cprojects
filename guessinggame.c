#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define nummin 1
#define nummax 100

int random_number(int min, int max){
    srand(time(NULL));
    return (rand() % (max - min +1 )) + min;
}

int main (){
    printf("Welcome to Guessing number\n");
    int player_number;
    int number_min = nummin;
    int number_max = nummax;
    int try_counter = 0;
    int result = random_number(number_min,number_max);
    do
    {
        printf("Enter a number between 1 and 100:\n");
        scanf("%d", &player_number);
        if (player_number > result){
            printf("Wrong, guess a smaller number\n");
        }
        if (player_number < result){
            printf("Wrong, guess a larger number\n");
        }
        try_counter++;
    } while (player_number != result);
    printf("Congrats, the number was %d\n Number of try: %d\n", result, try_counter);
}