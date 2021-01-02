#include <QtTest>

#include<m1.h>
#include<QString>

class TestM1 : public QObject
{
		Q_OBJECT

private slots:
		void print_t();
};

void TestM1::print_t()
{
	QString str = print();
	QCOMPARE(str, QString("oi"));
}

QTEST_MAIN(TestM1)
#include "m1_test.moc"


