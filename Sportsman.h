#ifndef SPORTSMAN_H
#define SPORTSMAN_H

#include <iostream>
#include <QString>
#include "Category.h"

class Sportsman
{
public:
    Sportsman();

    void setCategory(const Category& category) { _category = category;}
    void setName(const QString& name) { _name = name; }

    Category category()const { return _category;}
    QString setName()const { return _name; }


private:
    Category _category;
    QString _name;
};

#endif // SPORTSMAN_H
