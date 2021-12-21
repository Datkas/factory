#include "nystylepepperonipizza.h"

NYStylePepperoniPizza::NYStylePepperoniPizza()
{
    name = "NY Style Pepperoni Pizza";
    dough = "Thin Crust Dough";
    sauce = "Marinara Sauce";

    toppings.push_back("Grated Reggianoo Cheeze");
}

void NYStylePepperoniPizza::cut() {
    cout << "Cutting the pizza into square slices" << endl;
}
