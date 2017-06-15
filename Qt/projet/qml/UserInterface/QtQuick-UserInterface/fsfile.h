#ifndef FILE_H
#define FILE_H

#include <QObject>
#include <QFile>
#include <QDir>
#include <QStringList>
#include <QTextStream>
#include <QQmlListProperty>

#define READ_FILE_MODE 1
#define WRITE_FILE_MODE 2
#define FILE_NAME "ListCandidat.txt"

class FsFile : public QObject
{
    Q_OBJECT
public:
    explicit FsFile(QObject *parent = 0);

    Q_INVOKABLE bool openFile(QString name, unsigned char mode);
    Q_INVOKABLE QString readFile();

    void writeFile(QString w_data);

signals:

public slots:

private :

    QFile file;

    QString pathFile;

    QString fileName;

    QString file_content;

    QDir m_dir;

};

#endif // FILE_H
