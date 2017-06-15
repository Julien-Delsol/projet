#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlEngine>
#include <QQmlContext>
#include <QQuickView>
#include <QList>

#include "fsfile.h"
#include "candidat.h"
#include "appcore.h"


int main(int argc, char *argv[])
{

    QGuiApplication app(argc, argv);

    QScopedPointer<FsFile> fsfile(new FsFile);

    QQmlApplicationEngine engine;

    AppCore *appCore = new AppCore();

    qRegisterMetaType<CandidatModel*>("candidatModel");
    qRegisterMetaType<CandidatSearchModel*>("candidatSearchModel");

    engine.rootContext()->setContextProperty("fsfile", fsfile.data());
    engine.rootContext()->setContextProperty("appCore", appCore);


    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
