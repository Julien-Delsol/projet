#include "candidat.h"


Candidat::Candidat(const QString &nom, const QString &prenom)
    : m_nom(nom), m_prenom(prenom)
{
}

QString Candidat::nom() const
{
    return m_nom;
}

QString Candidat::prenom() const
{
    return m_prenom;
}

CandidatModel::CandidatModel(QObject *parent)
    : QAbstractListModel(parent)
{
}

void CandidatModel::addCandidat(const Candidat &candidat)
{
    beginInsertRows(QModelIndex(), rowCount(), rowCount());
    m_candidat << candidat;
    endInsertRows();
}

int CandidatModel::rowCount(const QModelIndex & parent) const {
    Q_UNUSED(parent);
    return m_candidat.count();
}

QVariant CandidatModel::data(const QModelIndex & index, int role) const {
    if (index.row() < 0 || index.row() >= m_candidat.count())
        return QVariant();

    const Candidat &candidat = m_candidat[index.row()];
    if (role == NomRole)
        return candidat.nom();
    else if (role == PrenomRole)
        return candidat.prenom();
    return QVariant();
}

//![0]
QHash<int, QByteArray> CandidatModel::roleNames() const {
    QHash<int, QByteArray> roles;
    roles[NomRole] = "nom";
    roles[PrenomRole] = "prenom";
    return roles;
}
