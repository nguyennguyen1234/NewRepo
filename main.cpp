
#include <QtGlobal>

int testQt() {
    quint32 a;
    return a+5;
}

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);
    qint32 a =testQt();
    cout << a;

    return 0;
}
