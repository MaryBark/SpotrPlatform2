#ifndef CONNECTDATABASE_H
#define CONNECTDATABASE_H

#include <QString>
#include <QtSql/QSqlDatabase>

class parametrsDataBase
{
protected:
    QString m_driver;
    QString m_host;
    int m_port;
    QString m_rawName;
    QString m_name;
    QString m_user;
    QString m_password;
    QString m_options;

public:
    parametrsDataBase();
    parametrsDataBase(const QString &_driver,
                    const QString &_host,
                    const int _port,
                    const QString &_name,
                    const QString &_user,
                    const QString &_password,
                    const QString &_options = QString());


    inline QString driver() const   {   return m_driver;             }
    inline QString host() const     {   return m_host;               }
    inline int port() const         {   return m_port;               }
    inline QString rawName() const  {   return m_rawName;            }
    inline QString name() const     {   return m_name;               }
    inline QString user() const     {   return m_user;               }
    inline QString password() const {   return m_password;           }
    inline QString options() const  {   return m_options;            }
    inline bool hasOptions() const  {   return !m_options.isEmpty(); }
    inline bool hasPort() const     {   return m_port >= 0;          }


    inline parametrsDataBase& setDriver(const QString &driver)  {   m_driver = driver; return * this;   }
    inline parametrsDataBase& setHost(const QString &host)     {   m_host = host; return * this;   }
    inline parametrsDataBase& setPort(const int port)     {   m_port = port; return * this;   }
    inline parametrsDataBase& setName(const QString &name)     {   m_name = name; return * this;   }
    inline parametrsDataBase& setUser(const QString &user)     {   m_user = user; return * this;   }
    inline parametrsDataBase& setPassword(const QString &password)     {   m_password = password; return * this;   }
    inline void setRawName(const QString &rawName)     {   m_rawName = rawName;    }
    inline void setOptions(const QString &options)     {   m_options = options;    }

};


class connectDataBase
{
public:
    bool _isConnected;


    // Функция установки соединения с БД
    //	driverName	- наименование драйвера программы
    //  hostName	-
    //  DBName		-
    //  userName	-
    //	password	-
    //	options		-
    //  port		-
    virtual bool _createConnection(const parametrsDataBase&);
};




#endif // CONNECTDATABASE_H
