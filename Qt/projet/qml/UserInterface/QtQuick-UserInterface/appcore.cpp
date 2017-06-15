#include <QDebug>

#include "appcore.h"
#include "candidat.h"
#include "parser.h"
#include "fsfile.h"
#include "encoder.h"



AppCore::AppCore(QObject *parent) : QObject(parent)
{
    m_candidatModel = new CandidatModel(this);

    m_candidatSearchListModel = new CandidatSearchModel(this);

}




CandidatModel *AppCore::candidatModel() const
{
    return m_candidatModel;

}



void AppCore::addCandidat(QString newFirstName, QString newLastName, QString newAge, QString newProfil, QString newSexe)
{
    m_candidatModel->addCandidat(newFirstName, newLastName, newAge, newProfil, newSexe);

}



// fonction load BDD
void AppCore::loadBDD(QString data)
{
    int nbrElement = 0;
    int i = 0;
    QStringList candidatLoading;

    FsFile loadFile;

    if(loadFile.openFile(FILE_NAME, READ_FILE_MODE))
    {

        candidatLoading = parser(data);

        nbrElement = candidatLoading.count();

        while(i < (nbrElement-1))
        {
          m_candidatModel->addCandidat(candidatLoading.at(i),candidatLoading.at(i+1), candidatLoading.at(i+2), candidatLoading.at(i+3), candidatLoading.at(i+4));

          qDebug() <<"(3)" << "ajout du Candidat : " << candidatLoading.at(i) << ";" << candidatLoading.at(i+1) << ";" << candidatLoading.at(i+2) << ";" << candidatLoading.at(i+3) << ";" << candidatLoading.at(i+4);

          i = i + NBR_PARAMETRE_CANDIDAT;
        }
    }
    else
    {
        qDebug() << "Echec du chargement de la BDD";
    }

}

// fonction Delete Candidat
void AppCore::deleteCandidat(int index)
{
    m_candidatModel->deleteCandidat(index);
}


// fonction Delete All Candidat
void AppCore::deleteAllCandidat()
{
    m_candidatModel->deleteAllCandidat();
}

// fonction Save BDD
void AppCore::saveBDD()
{
    QString temp = "";

    FsFile saveFile;

    if(saveFile.openFile(FILE_NAME, WRITE_FILE_MODE))
    {
        temp = encoder(m_candidatModel->getListCandidat());

        saveFile.writeFile(temp);
    }
    else
    {
        qDebug() << "echec de la sauvegarde de la BDD";
    }

}



QString AppCore::getPropertyOfCandidat(int index, int id_property)
{
    QString result = "";

    Candidat *currentObj = m_candidatModel->getCurrentSelectCandidat(index);

    switch(id_property)
    {
        case ID_NOM:
            result = currentObj->m_nom;
            break;

        case ID_PRENOM:
            result = currentObj->m_prenom;
            break;

        case ID_AGE:
            result = currentObj->m_age;
            break;

        case ID_PROFIL:
            result = currentObj->m_profil;
            break;

        case ID_SEXE:
            result = currentObj->m_sexe;
            break;

        default:
            result = "NULL";
            break;
    }

    return result;
}




void AppCore::setPropertyOfCandidat(int index, int id_property, QString Value)
{

    m_candidatModel->modifySelectCandidat(index, id_property, Value);

    qDebug() << "candidat n° : " << index << " / id property : " << id_property << " / property value : " << Value;
}


int AppCore::searchCandidat(QString v_nom, QString v_prenom, QString v_profil)
{
    int res = 0;

    int i = 0;

    bool b_flagCopy = false;

    unsigned char nbrParametre = 0;


    // recuepration du nombre de parametre
    if(v_nom != "" && v_prenom != "" && v_profil != "")
    {
        nbrParametre = 3;
    }
    else if((v_nom != "" && v_prenom != "") || (v_nom != "" && v_profil != "") || (v_prenom != "" && v_profil != ""))
    {
        nbrParametre = 2;
    }
    else if((v_nom != "") || (v_prenom != "") || (v_profil != ""))
    {
        nbrParametre = 1;
    }
    else
    {
        nbrParametre = 0;
    }





    for (i = 0; i < m_candidatModel->getListCandidat().count(); i++)
    {
        switch(nbrParametre)
        {
            case 3 :
                // recherche nom + prenom + profil
                if((m_candidatModel->getCurrentSelectCandidat(i)->nom() == v_nom) && (m_candidatModel->getCurrentSelectCandidat(i)->prenom() == v_prenom)
                        && (m_candidatModel->getCurrentSelectCandidat(i)-> profil() == v_profil))
                {
                    b_flagCopy = true;

                }
                break;

            case 2 :
                // recherche nom + prenom
                if((m_candidatModel->getCurrentSelectCandidat(i)->nom() == v_nom) && (m_candidatModel->getCurrentSelectCandidat(i)->prenom() == v_prenom))
                {
                    b_flagCopy = true;

                }
                // recherche nom + profil
                else if((m_candidatModel->getCurrentSelectCandidat(i)->nom() == v_nom) && (m_candidatModel->getCurrentSelectCandidat(i)->profil() == v_profil))
                {
                    b_flagCopy = true;

                }
                // recherche prenom + profil
                else if((m_candidatModel->getCurrentSelectCandidat(i)->prenom() == v_prenom) && (m_candidatModel->getCurrentSelectCandidat(i)->profil() == v_profil))
                {
                    b_flagCopy = true;

                }
                break;

            case 1 :
                if(m_candidatModel->getCurrentSelectCandidat(i)->nom() == v_nom)
                {
                    b_flagCopy = true;

                }
                else if(m_candidatModel->getCurrentSelectCandidat(i)->prenom() == v_prenom)
                {

                    b_flagCopy = true;

                }
                else if(m_candidatModel->getCurrentSelectCandidat(i)-> profil() == v_profil)
                {
                    b_flagCopy = true;

                }
                break;

            case 0:
                break;

            default :
                break;
        }

        if(b_flagCopy){
            // ajout du candidat dans la list
            //temp_Listcandidat.append(m_candidatModel->getListCandidat().at(i));
            m_candidatSearchListModel->addSearchCandidat(m_candidatModel->getListCandidat().at(i));

            qDebug() << "id candidat trouve : " << QString::number(m_candidatSearchListModel->getTempCandidat().at(res)->id());

            b_flagCopy = false;
            res++;

        }

    }


    // affichage debug :  resultat list candidat conforme a la recherche
    //for (i = 0; i < temp_Listcandidat.size(); i++)
    for (i = 0; i < m_candidatSearchListModel->getTempCandidat().size(); i++)
    {
//        qDebug() << QString::number(i) << " : " << temp_Listcandidat.at(i)->nom() << " ; " << temp_Listcandidat.at(i)->prenom() << " ; "  << temp_Listcandidat.at(i)->profil();
        qDebug() << QString::number(i) << " : " << m_candidatSearchListModel->getTempCandidat().at(i)->nom()
                 << " ; " << m_candidatSearchListModel->getTempCandidat().at(i)->prenom() << " ; "
                 <<  m_candidatSearchListModel->getTempCandidat().at(i)->profil();
    }



    return res;
}


CandidatSearchModel *AppCore::candidatSearchModel() const
{
    return m_candidatSearchListModel;

}

// fonction Delete All List Candidat Search
void AppCore::deleteAllListSearchCandidat()
{
    m_candidatSearchListModel->deleteAllListCandidatSearch();
}

//fonction get ID searchCandidat
int AppCore::getIDsearchCandidat(int index)
{
    return m_candidatSearchListModel->getTempCandidat().at(index)->id();
}


