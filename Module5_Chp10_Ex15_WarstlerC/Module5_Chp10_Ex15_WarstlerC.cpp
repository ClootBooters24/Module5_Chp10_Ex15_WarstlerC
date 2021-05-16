#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int randomNumber = 0;

void generateRandom(int min, int max)
{
	srand(static_cast<int>(time(0)));
	randomNumber = min + rand() % (max - min + 1);
}

//main function
int main()
{
	int mainMin, mainMax;
	int guessNumber;

	cout << "Enter the minimum number: ";
	cin >> mainMin;
	cout << "Enter the maximum number: ";
	cin >> mainMax;

	generateRandom(mainMin, mainMax);

	cout << "Guess the number: ";
	cin >> guessNumber;

	while (guessNumber != randomNumber)
	{
		cout << "Sorry Guess again:";
		cin >> guessNumber;
	}

	cout << "Yes the number is: " << randomNumber << endl;
}