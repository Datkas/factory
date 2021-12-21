#include "nystylepizzastore.h"

NYStylePizzaStore::NYStylePizzaStore()
{

}

Pizza* NYStylePizzaStore::createPizza(char* type) {
    Pizza *pizza;
    if (strcmp(type, "cheese") ==0) {
        pizza = new NYStyleCheezePizza();
    }
    else if (strcmp(type, "pepperoni") ==0) {
        pizza = new NYStylePepperoniPizza();
    }
    else if (strcmp(type, "clam") ==0) {
        pizza = new NYStyleClamPizza();
    }
    else if (strcmp(type, "veggie") ==0) {
        pizza = new NYStyleVeggiePizza();
    }
    return pizza;
}
