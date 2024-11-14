#include <iostream>

using namespace std;

class GuessingGame {
private:
    int randomNumber;

public:
    // Constructeur qui initialise le jeu et génère un nombre aléatoire entre 1 et 100
    GuessingGame() {
        randomNumber = rand() % 100 + 1;
    }

    // Méthode pour démarrer le jeu
    void play() {
        int guess;
        cout << "Guess the number (between 1 and 100): ";

        do {
            cin >> guess;
            if (guess > randomNumber) {
                cout << "Too high! Try again: ";
            } else if (guess < randomNumber) {
                cout << "Too low! Try again: ";
            }
        } while (guess != randomNumber);

        cout << "Congratulations! You guessed it!" << endl;
    }
};

int main() {
    GuessingGame game; // Crée une instance du jeu
    game.play(); // Lance le jeu
    return 0;
}
