/*This is an example of use of a constructur when defining a class*/

#include <iostream>
using std::cout;
using std::endl;
using std::string;

// This is the class bread
class Bread
{

public:
    string Name;
    double Yeast;       // Yeast per kilogram of flour
    double Hydratation; // of water per kilgram of flour
    string Preferment;  // Preferment used (None,Biga,Poolish, etc.)

    // Constructor
    Bread(string name, double yeast, double hydratation, string preferment)
    {
        Name = name;
        Yeast = yeast;
        Hydratation = hydratation;
        Preferment = preferment;
    }

    // This function print the recipe
    void recipe()
    {
        double water_vol = Hydratation * 1000; // ml of water per kilogram of flour

        cout << "To prepare a " << Name << " you will need to add:" << endl;
        cout << water_vol << " mL of water for 1kg of flour" << endl;
        cout << Yeast << " grams of yeast." << endl;
        cout << Preferment << " preferment is needed" << endl;
    }
};

int main()
{
    Bread bread1 = Bread("Focaccia", 10, 0.7, "No");
    bread1.recipe();

    cout << endl;

    Bread bread2 = Bread("Ciabbata", 3, 0.8, "Biga");
    bread2.recipe();
}
