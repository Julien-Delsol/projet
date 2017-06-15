#include "appWin.h"

AppWin::AppWin(QObject *parent) : QObject(parent)
{
    // init component
    index_a = 0;
    index_fn = 0;
    index_n = 0;
    index_p = 0;
    index_s = 0;

}


void AppWin::addName(QString data)
{
    dataListName.append(data);
}

void AppWin::addFirstName(QString data)
{
    dataListFirstName.append(data);
}

void AppWin::addAge(QString data)
{
    dataListAge.append(data);
}

void AppWin::addJobs(QString data)
{
   dataListJobs.append(data);
}

void AppWin::addSex(QString data)
{
    dataListSex.append(data);
}

void AppWin::incrementIndex(QString ref)
{
    if(ref == "nom")
    {
         index_n++;
    }
    else if(ref == "prenom")
    {
         index_fn++;
    }
    else if(ref == "age")
    {
         index_a++;
    }
    else if(ref == "profession")
    {
         index_p++;
    }
    else if(ref == "sexe")
    {
         index_s++;
    }
    else;

}

int AppWin::getIndex(QString ref)
{
    if(ref == "nom")
    {
        return index_n;
    }
    else if(ref == "prenom")
    {
        return index_fn;
    }
    else if(ref == "age")
    {
        return index_a;
    }
    else if(ref == "profession")
    {
        return index_p;
    }
    else if(ref == "sexe")
    {
        return index_s;
    }
    else;

    // erreur :  type inconnu
    return -1;
}




QString AppWin::getName(int index)
{
   return dataListName.at(index);
}

QString AppWin::getFirstName(int index)
{
  return dataListFirstName.at(index);
}

QString AppWin::getAge(int index)
{
    return dataListAge.at(index);
}

QString AppWin::getJobs(int index)
{
    return dataListJobs.at(index);
}

QString AppWin::getSexe(int index)
{
    return dataListSex.at(index);
}


QStringList AppWin::getListName()
{
    return dataListName;
}

QStringList AppWin::getListFirstName()
{
    return dataListFirstName;
}

QStringList AppWin::getListAge()
{
    return dataListAge;
}

QStringList AppWin::getListJobs()
{
    return dataListJobs;
}

QStringList AppWin::getListSexe()
{
    return dataListSex;
}
