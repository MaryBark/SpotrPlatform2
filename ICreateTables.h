#ifndef ICREATETABLES_H
#define ICREATETABLES_H

#include <QString>

class ICreateTables
{
public:
    virtual ~ICreateTables() = default;

    virtual void createTable(const QString&) = 0;
    virtual void insertTable(const QString&) = 0;
    virtual void selectTable(const QString&) = 0;
    virtual void deleteTable(const QString&) = 0;

};



#endif // ICREATETABLES_H
