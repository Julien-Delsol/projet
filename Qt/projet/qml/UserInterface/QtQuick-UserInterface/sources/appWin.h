#ifndef APPWIN_H
#define APPWIN_H

#include <QObject>
#include <QString>
#include <QQmlListProperty>
#include <QStringList>

class AppWin : public QObject
{
    Q_OBJECT
public:
    explicit AppWin(QObject *parent = 0);

    Q_INVOKABLE QString getName(int index);
    Q_INVOKABLE QString getFirstName(int index);
    Q_INVOKABLE QString getAge(int index);
    Q_INVOKABLE QString getJobs(int index);
    Q_INVOKABLE QString getSexe(int index);

     QStringList getListName();
     QStringList getListFirstName();
     QStringList getListAge();
     QStringList getListJobs();
     QStringList getListSexe();

    void addName(QString data);
    void addFirstName(QString data);
    void addAge(QString data);
    void addJobs(QString data);
    void addSex(QString data);

    void incrementIndex(QString ref);

    int getIndex(QString ref);

public:
    QStringList dataListName;
    QStringList dataListFirstName;
    QStringList dataListAge;
    QStringList dataListJobs;
    QStringList dataListSex;

private:
    int index_n;
    int index_fn;
    int index_a;
    int index_p;
    int index_s;


signals:

public slots:
};


#endif // APPWIN_H
