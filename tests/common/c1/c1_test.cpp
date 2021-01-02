#include <QtTest>

#include<c1.h>
#include<QString>

class TestC1 : public QObject
{
		Q_OBJECT

private slots:
		void print_t();
};

void TestC1::print_t()
{
	QString str = print();
	QCOMPARE(str, QString("oi from C1 \n\n"));
}

QTEST_MAIN(TestC1)
#include "c1_test.moc"


