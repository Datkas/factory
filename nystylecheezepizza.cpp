#include "nystylecheezepizza.h"

NYStyleCheezePizza::NYStyleCheezePizza()
{
    name = "NY Style Cheeze Pizza";
    dough = "Thin Crust Dough";
    sauce = "Marinara Sauce";

    toppings.push_back("Grated Reggianoo Cheeze");
}

void NYStyleCheezePizza::cut() {
    cout << "Cutting the pizza into square slices" << endl;
}
