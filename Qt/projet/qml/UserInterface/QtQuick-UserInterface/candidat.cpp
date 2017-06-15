#include "candidat.h"

/*_____________________________________________________________________________


    Candidat

_______________________________________________________________________________*/
Candidat::Candidat(QString nom, QString prenom, QString age, QString profil, QString sexe)
{
    m_nom = nom;
    m_prenom = prenom;
    m_age = age;
    m_profil = profil;
    m_sexe = sexe;

}


Candidat::Candidat(unsigned int id, QString nom, QString prenom, QString age, QString profil, QString sexe)
{
    m_id = id;
    m_nom = nom;
    m_prenom = prenom;
    m_age = age;
    m_profil = profil;
    m_sexe = sexe;
}

QString Candidat::nom() const
{
    return m_nom;
}

QString Candidat::prenom() const
{
    return m_prenom;
}

QString Candidat::age() const
{
    return m_age;
}

QString Candidat::profil() const
{
    return m_profil;
}

QString Candidat::sexe() const
{
    return m_sexe;
}


unsigned int Candidat::id() const
{
    return m_id;
}






/*_____________________________________________________________________________


    Candidat Model

_______________________________________________________________________________*/
CandidatModel::CandidatModel(QObject *parent)
    : QAbstractListModel(parent)
{


}


void CandidatModel::addCandidat(QString firstName, QString lastName, QString age, QString profil, QString sexe)
{

    //Candidat *dataObject = new Candidat(firstName, lastName, age, profil, sexe);

    Candidat *dataObject = new Candidat(m_candidat.size(), firstName, lastName, age, profil, sexe);

    // tell QT what you will be doing
    beginInsertRows(QModelIndex(), m_candidat.size(), m_candidat.size());

    m_candidat.append(dataObject);

    // tell QT you are done
    endInsertRows();

    emit dataChanged(this->index(m_candidat.size()), this->index(m_candidat.size()));

}



int CandidatModel::rowCount(const QModelIndex & parent) const {
    Q_UNUSED(parent);

    return m_candidat.size();
}

QVariant CandidatModel::data(const QModelIndex & index, int role) const {



    //--- Return Null variant if index is invalid
       if(!index.isValid())
           return QVariant();

       //--- Check bounds
       if(index.row() > (m_candidat.size() - 1))
           return QVariant();

       Candidat *dobj = m_candidat.at(index.row());


       switch (role)
       {
           case /*Roles::*/NomRole:
               return QVariant::fromValue(dobj->m_nom);

           case /*Roles::*/PrenomRole:
               return QVariant::fromValue(dobj->m_prenom);

           case /*Roles::*/AgeRole:
               return QVariant::fromValue(dobj->m_age);

           case /*Roles::*/ProfilRole:
               return QVariant::fromValue(dobj->m_profil);

           case /*Roles::*/SexeRole:
               return QVariant::fromValue(dobj->m_sexe);

           default:
               return QVariant();
       }


}


QHash<int, QByteArray> CandidatModel::roleNames() const {
    QHash<int, QByteArray> roles;
    roles[NomRole] = "nom";
    roles[PrenomRole] = "prenom";
    roles[AgeRole] = "age";
    roles[ProfilRole] = "profil";
    roles[SexeRole] = "sexe";
    return roles;
}



// fonction delete object candidat
void CandidatModel::deleteCandidat(int index)
{
    beginRemoveRows(QModelIndex(), index, index);

    m_candidat.removeAt(index);

    endRemoveRows();

}


void CandidatModel::deleteAllCandidat()
{
    beginRemoveRows(QModelIndex(), 0, m_candidat.size());

    m_candidat.clear();

    endRemoveRows();

}



QList<Candidat*> CandidatModel::getListCandidat() const
{
    return m_candidat;
}


Candidat* CandidatModel::getCurrentSelectCandidat(int index) const
{
    return m_candidat.at(index);
}

void CandidatModel::modifySelectCandidat(int index, int property, QString Value)
{

    switch(property)
    {
        case ID_NOM:
            m_candidat.at(index)->m_nom = Value;
            break;

        case ID_PRENOM:
            m_candidat.at(index)->m_prenom = Value;
            break;

        case ID_AGE:
            m_candidat.at(index)->m_age = Value;
            break;

        case ID_PROFIL:
            m_candidat.at(index)->m_profil = Value;
            break;

        case ID_SEXE:
            m_candidat.at(index)->m_sexe = Value;
            break;

        default:

            break;
    }


    emit dataChanged(this->index(index), this->index(index));
}













/*_____________________________________________________________________________


    Candidat Search Model

_______________________________________________________________________________*/
CandidatSearchModel::CandidatSearchModel(QObject *parent)
    : QAbstractListModel(parent)
{


}

void CandidatSearchModel::addSearchCandidat(Candidat *dataObject)
{
    Candidat *obj = new Candidat(dataObject->id(), dataObject->nom(), dataObject->prenom(), dataObject->age(), dataObject->profil(), dataObject->sexe());

    // tell QT what you will be doing
    beginInsertRows(QModelIndex(), listSearchCandidat.size(), listSearchCandidat.size());


    listSearchCandidat.append(obj);

    // tell QT you are done
    endInsertRows();

    emit dataChanged(this->index(listSearchCandidat.size()), this->index(listSearchCandidat.size()));

}


QList<Candidat*> CandidatSearchModel::getTempCandidat() const
{

    return listSearchCandidat;
}


void CandidatSearchModel::deleteAllListCandidatSearch()
{
    beginRemoveRows(QModelIndex(), 0, listSearchCandidat.size());

    listSearchCandidat.clear();

    endRemoveRows();

}


int CandidatSearchModel::rowCount(const QModelIndex & parent) const {
    Q_UNUSED(parent);

    return listSearchCandidat.size();
}

QVariant CandidatSearchModel::data(const QModelIndex & index, int role) const {



    //--- Return Null variant if index is invalid
       if(!index.isValid())
           return QVariant();

       //--- Check bounds
       if(index.row() > (listSearchCandidat.size() - 1))
           return QVariant();

       Candidat *dobj = listSearchCandidat.at(index.row());


       switch (role)
       {
           case /*Roles::*/NomRole:
               return QVariant::fromValue(dobj->m_nom);

           case /*Roles::*/PrenomRole:
               return QVariant::fromValue(dobj->m_prenom);

           case /*Roles::*/AgeRole:
               return QVariant::fromValue(dobj->m_age);

           case /*Roles::*/ProfilRole:
               return QVariant::fromValue(dobj->m_profil);

           case /*Roles::*/SexeRole:
               return QVariant::fromValue(dobj->m_sexe);

           default:
               return QVariant();
       }


}


QHash<int, QByteArray> CandidatSearchModel::roleNames() const {
    QHash<int, QByteArray> roles;
    roles[NomRole] = "nom";
    roles[PrenomRole] = "prenom";
    roles[AgeRole] = "age";
    roles[ProfilRole] = "profil";
    roles[SexeRole] = "sexe";
    return roles;
}




