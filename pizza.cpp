#include "pizza.h"

Pizza::Pizza()
{
    name = new char [200];
    dough = new char [200];
    sauce = new char [200];
}

void Pizza::prepare() {
    cout << "Preparing " << name << endl;
    cout << "Tossing dough..." << endl;
    cout << "Adding sauce..." << endl;
    cout << "Adding toppings: " << endl;
    for (list <char*>::iterator it = toppings.begin(); it!=toppings.end(); ++it)
        cout << "\t" << *it << endl;
    }


void Pizza::bake() {
    cout << "Bake for 25 minutes at 350" << endl;
}

void Pizza::cut() {
    cout << "Cutting the pizza into diagonal slices" << endl;
}

void Pizza::box() {
    cout << "Place pizza in official PizzaStore box" << endl;
}

char* Pizza::getName() {
    return name;
}
