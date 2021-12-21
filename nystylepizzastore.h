#ifndef NYSTYLEPIZZASTORE_H
#define NYSTYLEPIZZASTORE_H

#include "pizza.h"
#include "pizzastore.h"
#include "nystylecheezepizza.h"
#include "nystylepepperonipizza.h"
#include "nystyleveggiepizza.h"
#include "nystyleclampizza.h"

class NYStylePizzaStore : public PizzaStore
{
public:
    NYStylePizzaStore();
    Pizza* createPizza(char* type);
};

#endif // NYSTYLEPIZZASTORE_H
