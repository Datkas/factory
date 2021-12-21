#include "chicagostyleveggiepizza.h"

ChicagoStyleVeggiePizza::ChicagoStyleVeggiePizza()

{
    name = "Chicago Style Viggie Pizza";
    dough = "Thick Crust Dough";
    sauce = "Plum Tomato Sauce";

    toppings.push_back("Mozzarella Cheese");
}

void ChicagoStyleVeggiePizza::cut() {
    cout << "Cutting the pizza into square slices" << endl;
}
