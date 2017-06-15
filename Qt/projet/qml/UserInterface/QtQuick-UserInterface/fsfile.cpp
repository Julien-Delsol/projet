#include <QDebug>
#include <QFile>
#include <QQmlListProperty>
#include <QString>
#include <QStringList>

#include "fsfile.h"
#include "parser.h"
#include "candidat.h"


FsFile::FsFile(QObject *parent) : QObject(parent)
{
    m_dir.cd(QDir::currentPath());

    pathFile = m_dir.filePath("files/");

    qDebug() << "constructeur Qfile OK";

    qDebug() << pathFile;



}


bool FsFile::openFile(QString name, unsigned char mode)
{

    fileName =  "files/" + name;

    file.setFileName(fileName);

    switch(mode)
    {
        // ouverture du fichier en mode lecture
        case 1:
            if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
            {
                qDebug() << "impossible d'ouvrir le fichier";

            }
            else
            {
                qDebug() << "ouverture du fichier : " << fileName << "reussi";

                return true;

            }
            break;

        // ouverture du fichier en mode ecriture
        case 2 :
            if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
            {
                qDebug() << "impossible d'ouvrir le fichier";

            }
            else
            {
                qDebug() << "ouverture du fichier : " << fileName << "reussi";

                QTextStream out(&file);

                return true;

            }
            break;
    }

    return false;
}


QString FsFile::readFile()
{
    if(file.isOpen())
    {

        file_content = "";

        QTextStream in(&file);

        while(!in.atEnd()){

            // lecture du contenu ligne par ligne
            QString line = in.readLine();

            // on stock le contenu dans l'instance file_content de l'objet file
            file_content = file_content + line;

        }

        // fermeture du fichier
        file.close();
    }

    return file_content;
}



void FsFile::writeFile(QString w_data)
{
    if(file.isOpen())
    {
        file_content = w_data;

        QTextStream out(&file);

        out << file_content;

        // fermeture du fichier
        file.close();
    }

}



