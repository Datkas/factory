#include "pizza.h"
#include "nystylecheezepizza.h"
#include "pizzastore.h"
#include "nystylepizzastore.h"
#include "chicagostylecheesepizza.h"
#include "chicagostylepizzastore.h"
#include <conio.h>

int main()
{
    PizzaStore *nyStore = new NYStylePizzaStore();
    PizzaStore *chicagoStore = new ChicagoStylePizzaStore();


    Pizza *pizza = nyStore->orderPizza("cheese");
    Pizza *pizza2 = chicagoStore->orderPizza("cheese");
    //p->prepare();

    return 0;
}
