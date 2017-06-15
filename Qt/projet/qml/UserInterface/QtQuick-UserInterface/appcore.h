#ifndef APPCORE_H
#define APPCORE_H


#include <QObject>

#include "candidat.h"


class AppCore : public QObject
{
    Q_OBJECT
    Q_PROPERTY(CandidatModel *candidatModel READ candidatModel CONSTANT)
    Q_PROPERTY(CandidatSearchModel *candidatSearchModel READ candidatSearchModel CONSTANT)

public:
    explicit AppCore(QObject *parent = 0);

    CandidatModel *candidatModel() const;


    Q_INVOKABLE void loadBDD(QString data);
    Q_INVOKABLE void deleteCandidat(int index);
    Q_INVOKABLE void deleteAllCandidat();
    Q_INVOKABLE void saveBDD();

    Q_INVOKABLE QString getPropertyOfCandidat(int index, int id_property);
    Q_INVOKABLE void setPropertyOfCandidat(int index, int id_property, QString Value);


    // search windows function
    CandidatSearchModel *candidatSearchModel() const;
    Q_INVOKABLE void deleteAllListSearchCandidat();
    Q_INVOKABLE int getIDsearchCandidat(int index);

signals:

public slots:
    void addCandidat(QString newFirstName, QString newLastName, QString newAge, QString newProfil, QString newSexe);

    int searchCandidat(QString v_nom, QString v_prenom, QString v_profil);

private:
    CandidatModel *m_candidatModel;

    CandidatSearchModel *m_candidatSearchListModel;

};

#endif // APPCORE_H
