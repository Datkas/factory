#include "nystyleveggiepizza.h"

NYStyleVeggiePizza::NYStyleVeggiePizza()
{
    name = "NY Style Veggie Pizza";
    dough = "Thin Crust Dough";
    sauce = "Marinara Sauce";

    toppings.push_back("Grated Reggianoo Cheeze");
}

void NYStyleVeggiePizza::cut() {
    cout << "Cutting the pizza into square slices" << endl;
}
