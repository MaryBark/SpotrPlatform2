#ifndef CREATETABLES_H
#define CREATETABLES_H

#include "ICreateTables.h"
#include <QVariantList>

class CreateTables : public ICreateTables
{
public:
    CreateTables();

    QVariantList structTable();

    virtual void createTable(const QString&);

};

#endif // CREATETABLES_H
