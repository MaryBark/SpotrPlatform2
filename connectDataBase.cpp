#include "connectDataBase.h"

parametrsDataBase::parametrsDataBase() :
    m_driver(QString::fromUtf8("QPSQL")),
    m_host(),
    m_port(-1),
    m_name()
{}

parametrsDataBase::parametrsDataBase(const QString& _driver,
                 const QString& _host,
                 const int _port,
                 const QString& _name,
                 const QString& _user,
                 const QString& _password,
                 const QString& _options)
    : m_driver(_driver),
      m_host(_host),
      m_port(_port),
      m_name(_name),
      m_user(_user),
      m_password(_password),
      m_options(_options)
{}

bool connectDataBase::_createConnection(const parametrsDataBase & params)
{
//    QSqlDatabase db = QSqlDatabase::addDatabase( "QPSQL" );
//    if (!QSqlDatabase::isDriverAvailable(params.driver()))
//    {
//        return false;
//    }

//    QSqlDatabase db = QSqlDatabase::addDatabase(params.driver());
//    db.setHostName(params.host());
//    db.setDatabaseName(params.name());
//    db.setUserName(params.user());
//    db.setPassword(params.password());

//    if(params.hasOptions())
//        db.setConnectOptions(params.options());

//    if(params.hasPort())
//        db.setPort(params.port());

//    if (!db.open())
//    {
//        return false;
//    }

//    _isConnected = true;

//    return true;
}
