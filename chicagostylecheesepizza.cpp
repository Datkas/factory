#include "chicagostylecheesepizza.h"

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza()
{
    name = "Chicago Style Sauce and Cheeze Pizza";
    dough = "Thick Crust Dough";
    sauce = "Plum Tomato Sauce";

    toppings.push_back("Mozzarella Cheese");
}

void ChicagoStyleCheesePizza::cut() {
    cout << "Cutting the pizza into square slices" << endl;
}
