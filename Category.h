#ifndef CATEGORY_H
#define CATEGORY_H


class Category
{
public:
    Category();
    Category(const Category& old);
    ~Category(){}

    void setAge(const int & age) { _age = age; }
    void setWeight(const double & weight){_weight = weight; }

    int age() const { return _age; }
    double weight() const { return _weight; }

private:
    int _age;
    double _weight;
};

#endif // CATEGORY_H
