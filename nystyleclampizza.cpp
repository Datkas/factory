#include "nystyleclampizza.h"

NYStyleClamPizza::NYStyleClamPizza()
{
    name = "NY Style Clam Pizza";
    dough = "Thin Crust Dough";
    sauce = "Marinara Sauce";

    toppings.push_back("Grated Reggianoo Cheeze");
}

void NYStyleClamPizza::cut() {
    cout << "Cutting the pizza into square slices" << endl;
}
