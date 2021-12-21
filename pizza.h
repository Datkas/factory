#ifndef PIZZA_H
#define PIZZA_H

#include <list>
#include <iostream>
using namespace std;

class Pizza
{
protected:
    char* name;
    char* dough;
    char* sauce;
    list <char*> toppings;
public:
    Pizza();
    void prepare();
    void bake();
    void cut();
    void box();
    char* getName();
};

#endif // PIZZA_H
