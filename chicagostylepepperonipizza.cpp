#include "chicagostylepepperonipizza.h"


ChicagoStylePepperoniPizza::ChicagoStylePepperoniPizza()
{
    name = "Chicago Style Pepperoni Pizza";
    dough = "Thick Crust Dough";
    sauce = "Plum Tomato Sauce";

    toppings.push_back("Mozzarella Cheese");
}

void ChicagoStylePepperoniPizza::cut() {
    cout << "Cutting the pizza into square slices" << endl;
}
