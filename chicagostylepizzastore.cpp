#include "chicagostylepizzastore.h"

ChicagoStylePizzaStore::ChicagoStylePizzaStore()
{

}

Pizza* ChicagoStylePizzaStore::createPizza(char* type) {
    Pizza *pizza;
    if (strcmp(type, "cheese") == 0) {
        pizza = new ChicagoStyleCheesePizza();
    }
    else if (strcmp(type, "pepperoni") == 0) {
        pizza = new ChicagoStylePepperoniPizza();
    }
    else if (strcmp(type, "clam") == 0) {
        pizza = new ChicagoStyleClamPizza();
    }
    else if (strcmp(type, "veggie") == 0) {
        pizza = new ChicagoStyleVeggiePizza();
    }
    return pizza;
}
