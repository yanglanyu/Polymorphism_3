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
		cout << "�V�R���𕦂���" << endl;
	}
	virtual void Brew()
	{
		cout << "�R�[�q�[������" << endl;
	}
	virtual void PourInCup()
	{
		cout << "�J�b�v�ɒ���" << endl;
	}
	virtual void PutSomething()
	{
		cout << "����������" << endl;
	}
};
class Tea :public Drinking
{
public:
	virtual void Boil()
	{
		cout << "�V�R���𕦂���" << endl;
	}
	virtual void Brew()
	{
		cout << "����������" << endl;
	}
	virtual void PourInCup()
	{
		cout << "�R�b�v�ɒ���" << endl;
	}
	virtual void PutSomething()
	{
		cout << "�V���K�[������" << endl;
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