#include<iostream>
using namespace std;

class Drinking
{
public:
	virtual void Boil() = 0;
	virtual void Brew() = 0;
	virtual void PourInCup() = 0;
	virtual void PutSomething() = 0;

	void MakeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

class Coffee :public Drinking
{
public:
	virtual void Boil()
	{
		cout << "天然水を沸かす" << endl;
	}
	virtual void Brew()
	{
		cout << "コーヒーを入れる" << endl;
	}
	virtual void PourInCup()
	{
		cout << "カップに注ぐ" << endl;
	}
	virtual void PutSomething()
	{
		cout << "牛乳を入れる" << endl;
	}
};
class Tea :public Drinking
{
public:
	virtual void Boil()
	{
		cout << "天然水を沸かす" << endl;
	}
	virtual void Brew()
	{
		cout << "お茶を入れる" << endl;
	}
	virtual void PourInCup()
	{
		cout << "コップに注ぐ" << endl;
	}
	virtual void PutSomething()
	{
		cout << "シュガーを入れる" << endl;
	}
};
void DoWork(Drinking* drink)
{
	drink->MakeDrink();
	delete drink;
}
void test_3()
{
	DoWork(new Coffee);
	printf("-----------\n");
	DoWork(new Tea);
}
int main()
{
	test_3();

	return 0;
}