#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include "pizza.h"

class PizzaStore
{
public:
    PizzaStore();
    ~PizzaStore();
    Pizza* orderPizza(char* type);
    virtual Pizza* createPizza(char* type) = 0;
};

#endif // PIZZASTORE_H
