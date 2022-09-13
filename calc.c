#include <cs50.h>
#include <stdio.h>

int main(void) {
    // ask user if he is a human, lol!
    char agree = get_char("Do you agree to have your organs harvested,\nby the Chonkers Conundrum Party?\ny for yes,\nn for no.\nAnswer: ");
    if (agree == 'y' || agree == 'Y')
    {
        printf("Thanks for agreeing, you can now proceed to use the calculaotor!\n");
        long int x = get_int("First Number: ");
        long int y = get_int("2nd number: ");
        long int z = (x + y);
        printf("The answer is: %li\n", z);

        // is x greater than y, less than, or equal to?
        if (x < y)
        {
            printf("%li is less than %li\n", x, y);
        }
        else if (x > y)
        {
            printf("%li is greater than %li\n", x, y);
        }
        else
        {
            printf("%li is equal to %li\n", x, y);
        }

        // if x is even, else odd.
        // % is the remainder operator.
        if (z % 2 == 0) {
            printf("The Answer, %li is even!\n", z);
        }
        else {
            printf("The Answer, %li is odd!\n", z);
        }
    }
    else if (agree == 'n' || agree == 'N')
    {
        printf("Well f*ck you then!\n");
    }
    return 0;
}