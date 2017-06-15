#ifndef LIST_H
#define LIST_H

#include <QObject>

#include <QAbstractListModel>
#include <QStringList>

//![0]
class Candidat
{
public:
    Candidat(const QString &nom, const QString &prenom);
//![0]

    QString nom() const;
    QString prenom() const;

private:
    QString m_nom;
    QString m_prenom;
//![1]
};

class CandidatModel : public QAbstractListModel
{
    Q_OBJECT
public:
    enum ListRole {
        NomRole = Qt::UserRole + 1,
        PrenomRole
    };

    CandidatModel(QObject *parent = 0);
//![1]

    void addCandidat(const Candidat &candidat);

    int rowCount(const QModelIndex & parent = QModelIndex()) const;

    QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const;

protected:
    QHash<int, QByteArray> roleNames() const;
private:
    QList<Candidat> m_candidat;
//![2]
};
//![2]

#endif // LIST_H
