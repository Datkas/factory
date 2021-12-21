#include "chicagostyleclampizza.h"

ChicagoStyleClamPizza::ChicagoStyleClamPizza()
{
    name = "Chicago Style Clam Pizza";
    dough = "Thick Crust Dough";
    sauce = "Plum Tomato Sauce";

    toppings.push_back("Mozzarella Cheese");
}

void ChicagoStyleClamPizza::cut() {
    cout << "Cutting the pizza into square slices" << endl;
}
