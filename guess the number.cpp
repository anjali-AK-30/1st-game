#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    std::srand(std::time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (std::rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    // Guessing loop
    do {
        std::cout << "Guess the number: ";
        std::cin >> guessed;

        if (guessed > randomNumber) {
            std::cout << "Lower number please\n";
        } else if (guessed < randomNumber) {
            std::cout << "Higher number please\n";
        } else {
            std::cout << "Congrats!!\n";
        }

        no_of_guesses++;
    } while (guessed != randomNumber);

    std::cout << "You guessed the number in " << no_of_guesses << " guesses.\n";

    return 0;
}
