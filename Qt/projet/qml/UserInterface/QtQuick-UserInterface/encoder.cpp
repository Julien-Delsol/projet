#include <QList>
#include "encoder.h"
#include "appcore.h"
#include "candidat.h"

QString encoder(QList<Candidat*> data)
{
    QString temp = "";
    int countList = 0;

    countList  = data.count();

    for(int i = 0; i < countList; i++)
    {
        temp = temp + "nom:";
        temp = temp + data.at(i)->m_nom;
        temp = temp + ";";
        temp = temp + "prenom:";
        temp = temp + data.at(i)->m_prenom;
        temp = temp + ";";
        temp = temp + "age:";
        temp = temp + data.at(i)->m_age;
        temp = temp + ";";
        temp = temp + "profil:";
        temp = temp + data.at(i)->m_profil;
        temp = temp + ";";
        temp = temp + "sexe:";
        temp = temp + data.at(i)->m_sexe;
        temp = temp + ";\n";
    }


     return temp;
}
