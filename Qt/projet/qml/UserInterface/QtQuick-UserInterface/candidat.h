#ifndef CANDIDAT_H
#define CANDIDAT_H

#include <QObject>
#include <QString>
#include <QList>
#include <QAbstractListModel>
#include <QStringList>

#define NBR_PARAMETRE_CANDIDAT 5

#define ID_NOM 0
#define ID_PRENOM 1
#define ID_AGE 2
#define ID_PROFIL 3
#define ID_SEXE 4

/*_____________________________________________________________________________


   CLASS Candidat

_______________________________________________________________________________*/
class Candidat
{

public:

    Candidat(QString nom, QString prenom, QString age, QString profil, QString sexe);

    Candidat(unsigned int id, QString nom, QString prenom, QString age, QString profil, QString sexe);

    QString nom() const;
    QString prenom() const;
    QString age() const;
    QString profil() const;
    QString sexe() const;
    unsigned int id() const;

    QString m_nom;
    QString m_prenom;
    QString m_age;
    QString m_profil;
    QString m_sexe;
    unsigned int m_id;
    unsigned int current_id;

signals:


private:


public slots:
};




/*_____________________________________________________________________________


   CLASS Candidat Model

_______________________________________________________________________________*/

class CandidatModel : public QAbstractListModel
{
    Q_OBJECT

    enum CandidatRoles {
        NomRole = Qt::UserRole + 1,
        PrenomRole,
        AgeRole,
        ProfilRole,
        SexeRole
    };

public:

    CandidatModel(QObject *parent = 0);

    void addCandidat(QString firstName, QString lastName, QString age, QString profil, QString sexe);

    Q_INVOKABLE int rowCount(const QModelIndex & parent = QModelIndex()) const;

    QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const;

    void deleteCandidat(int index);
    void deleteAllCandidat();

    QList<Candidat*> getListCandidat() const;

    Candidat *getCurrentSelectCandidat(int index) const;

    void modifySelectCandidat(int index, int property, QString Value);

signals:


protected:
    QHash<int, QByteArray> roleNames() const;

private:
    //Q_DISABLE_COPY(CandidatModel);

    QList<Candidat*> m_candidat;



};








class CandidatSearchModel : public QAbstractListModel
{
    Q_OBJECT

    enum CandidatSearchRoles {
        NomRole = Qt::UserRole + 1,
        PrenomRole,
        AgeRole,
        ProfilRole,
        SexeRole
    };

public:

    CandidatSearchModel(QObject *parent = 0);

    Q_INVOKABLE int rowCount(const QModelIndex & parent = QModelIndex()) const;

    QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const;

    void addSearchCandidat(Candidat *dataObject);

    QList<Candidat *> getTempCandidat() const;

    void deleteAllListCandidatSearch();



protected:
    QHash<int, QByteArray> roleNames() const;

private:
    QList<Candidat*> listSearchCandidat;
};




#endif // CANDIDAT_H
