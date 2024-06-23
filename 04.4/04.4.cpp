#include <iostream>
#include <Windows.h>
#include <cmath>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include <vector>

template <typename array>
void Print(array arr, int size);

template <typename array>
void Auto(array arr, int size);

template <typename array>
void User(array arr, int size);

bool way(int bullchoose);

template <typename array>
void DecreasingSort(array arr, int size);

template <typename array>
void IncreasingSort(array arr, int size);


int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int choice, bchoice;
	const int size = 10;
	float arr[size]{};

	while (true)
	{
		do
		{
			system("cls");
			std::cout << "\t\t\tПрограмма по работе с массивом\n\n";
			std::cout << "1 - заполнить иассив вручную\n2 - заполнить иассив автоматически\n0 - выход из программы\n";
			std::cout << "Ваш выбор: ";
			std::cin >> choice;
			system("cls");

		} while (choice < 0 || choice > 2);

		if (choice == 0)
		{
			system("cls");
			std::cout << "\t\t\tGoodBye!\n";
			break;
		}

		else if (choice == 1)
		{
			system("cls");
			std::cout << "Вы выбрали 'заполнить массив вручную'\n";
			User(arr, size);
			system("cls");
			std::cout << "Ваш массив:\n\n";
			Print(arr, size);
			std::cout << "\n";
			system("pause");
		}

		else if (choice == 2)
		{
			system("cls");
			Auto(arr, size);
			std::cout << "Ваш массив: \n\n";
			Print(arr, size);
			std::cout << "\n";
			system("pause");
		}

		if (choice == 1 || choice == 2)
		{
			std::cout << "\n";
			do
			{
				system("cls");
				std::cout << "Ваш массив: \n\n";
				Print(arr, size);
				std::cout << "\n";
				std::cout << "Как отсортировать массив\n";
				std::cout << "1 - по возрастанию";
				std::cout << "\n2 - по убывнию\n";
				std::cout << "3 - не изменять\n";
				std::cout << "Ваш выбор: ";
				std::cin >> bchoice;
				system("cls");

			} while (bchoice < 1 || bchoice > 3);

			if (bchoice == 3)
			{
				system("cls");
				std::cout << "Ваш массив:\n\n";
				Print(arr, size);
				std::cout << "\n";
				system("pause");
			}

			else if (bchoice == 2)
			{
				system("cls");
				std::cout << "Отсортированный массив по убыванию:\n";
				std::cout << "\n";
				DecreasingSort(arr, size);
				Print(arr, size);
				std::cout << "\n";
				system("pause");
			}

			else if (bchoice == 1)
			{
				system("cls");
				std::cout << "Отсортированный массив по возрастанию:\n";
				std::cout << "\n";
				IncreasingSort(arr, size);
				Print(arr, size);
				std::cout << "\n";
				system("pause");
			}

			do
			{
				std::cout << "\n" << "Продолжить работу с программой?\n1 - да\n2 - нет\nВаш выбор: ";
				std::cin >> choice;
				system("cls");
			} while (choice < 1 || choice > 2);
			if (choice == 1)
			{
				continue;
			}
			else
			{
				system("cls");
				std::cout << "\t\t\tGoodBye!\n";
				break;
			}

		}
	}



	return 0;
}


template <typename array>
void Print(array arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

template <typename array>
void Auto(array arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}

template <typename array>
void User(array arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << "Введите " << i + 1 << " элемент: ";
		std::cin >> arr[i];
	}
}

template <typename array>
void DecreasingSort(array arr, int size)
{
	float temp;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

template <typename array>
void IncreasingSort(array arr, int size)
{
	float temp;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
