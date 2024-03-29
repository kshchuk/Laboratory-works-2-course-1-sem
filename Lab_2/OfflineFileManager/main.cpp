#include "OfflineFileManager.h"
#include <QtWidgets/QApplication>

#include "ModelSerializer_test.h"


int main(int argc, char *argv[])
{
    freopen("testing.log", "w", stdout);
    QTest::qExec(new ModelSerializer_test, argc, argv);

    QApplication a(argc, argv);
    QFile styleFile("res/css/Combinear.qss");
    styleFile.open(QFile::ReadOnly);
    QString style(styleFile.readAll());
    a.setStyleSheet(style);
    OfflineFileManager w;
    w.show();
    return a.exec();
}
