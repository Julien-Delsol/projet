
#include <QDebug>
#include <QString>
#include <QStringList>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "fsfile.h"
#include "candidat.h"

#include <QStringList>
#include "appcore.h"

QStringList parser(QString data)
{
      QStringList parseList;
      QString temp = "";
      QStringList dataTemp;

      int nbrElem = 0;
      int  i = 0;

      // on parse le contenu du fichier à l'aide du caractere ';'
      parseList = data.split(";");

      // on recupere le nombre d'element dans la liste
      nbrElem = parseList.count();

      qDebug() << "nombre d'element : " << nbrElem;

      // on stocke les donnée dans les listes associées
      // tant qu'on a pas atteind le nombre d'élément total de la liste
      while(i < (nbrElem-1))
      {
           temp = parseList.at(i);

           qDebug() <<"(1)" << parseList.at(i);

           if(temp.contains("prenom:"))
           {
               temp.replace("prenom:", "");

               dataTemp.append(temp);

               qDebug() <<"(2)" << dataTemp.at(i) ;

           }
          else if(temp.contains("nom:"))
          {
              temp.replace("nom:", "");

             dataTemp.append(temp);

              qDebug() <<"(2)" << dataTemp.at(i);


          }
          else if(temp.contains("age:"))
          {
              temp.replace("age:", "");

              dataTemp.append(temp);

              qDebug() <<"(2)" << dataTemp.at(i) ;


          }
          else if(temp.contains("profil:"))
          {
              temp.replace("profil:", "");

              dataTemp.append(temp);

              qDebug() <<"(2)" << dataTemp.at(i);

          }
          else if(temp.contains("sexe:"))
          {
              temp.replace("sexe:", "");

              dataTemp.append(temp);

              qDebug() <<"(2)" << dataTemp.at(i);

           }

          i++;
      }


        return dataTemp;
}


