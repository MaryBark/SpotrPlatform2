#include "Category.h"

Category::Category():
    _age(0), _weight(0.0)
{}

Category::Category(const Category &old)
{
    _age = old._age;
    _weight = old._weight;
}
