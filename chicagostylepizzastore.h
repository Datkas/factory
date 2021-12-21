#ifndef CHICAGOSTYLEPIZZASTORE_H
#define CHICAGOSTYLEPIZZASTORE_H

#include "pizza.h"
#include "pizzastore.h"
#include "chicagostylecheesepizza.h"
#include "chicagostylepepperonipizza.h"
#include "chicagostyleveggiepizza.h"
#include "chicagostyleclampizza.h"

class ChicagoStylePizzaStore : public PizzaStore
{
    public:
        ChicagoStylePizzaStore();
        Pizza* createPizza(char* type);
};

#endif // CHICAGOSTYLEPIZZASTORE_H
