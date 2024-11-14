#include <iostream>
using namespace std;

class Calculatrice {
public:
    static double Addition(double a, double b) {
        return a + b;
    }

    static double Soustraction(double a, double b) {
        return a - b;
    }

    static double Multiplication(double a, double b) {
        return a * b;
    }

    static double Division(double a, double b) {
        if (b == 0) {
            cout << "Erreur : Division par zéro !" << endl;
            return 0;
        } else {
            return a / b;
        }
    }
};

int main() {
    int operation = 0;
    double a = 0, b = 0;

    while (operation != 4) {
        cout << "Saisir le premier nombre : ";
        cin >> a;
        cout << "Saisir le second nombre : ";
        cin >> b;

        cout << "Choisir l'operation souhaitée :" << endl;
        cout << "0: Addition" << endl;
        cout << "1: Soustraction" << endl;
        cout << "2: Multiplication" << endl;
        cout << "3: Division" << endl;
        cout << "4: Quitter" << endl;
        cin >> operation;

        switch (operation) {
            case 0:
                cout << "Vous avez choisi l'addition : " << Calculatrice::Addition(a, b) << endl;
                break;
            case 1:
                cout << "Vous avez choisi la soustraction : " << Calculatrice::Soustraction(a, b) << endl;
                break;
            case 2:
                cout << "Vous avez choisi la multiplication : " << Calculatrice::Multiplication(a, b) << endl;
                break;
            case 3:
                cout << "Vous avez choisi la division : " << Calculatrice::Division(a, b) << endl;
                break;
            case 4:
                cout << "Terminé !" << endl;
                break;
            default:
                cout << "Choix invalide" << endl;
                break;
        }
    }

    return 0;
}
