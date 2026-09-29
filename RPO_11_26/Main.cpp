#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));
	
	const int row = 3, col = 4;

	int nam[row][col];

	for (int i = 0; i < row;i++)
	{
		for (int j = 0; j < col; j++)
		{
			nam[i][j] = rand() % 10 + 1;
			std::cout << nam[i][j] << " ";
		}
		std::cout << "\n";
	}
	
	std::cout << "123";

	return 0;
}



/*
	типы данных
	bool -- true/false 0 - false
	char -- '+'  43

	short -- 123	-32768 - 32768
	unsingned short -- 123	0 - 65535
	int -- 123456	 -2147483648 - 2147483647
	unsingned int -- 123456		0 - 4294967295
	long long int -- 123456789	a lot

	float -- 123.456	+-(3.4E-38 ... 3.4E+38)
	double -- 123456.4567	+-(1.7E-308 ... 1.7E+308)
	long long -- no comment		+-(1.4E-4932 ... 1.7E+4932)

	Операторы
	математические: + - * / = ++ -- += -= *= /= % // **
	сравнительные: > < <= >= == !=  <=>
	логические: && (и)	|| (или)	!(не)

	ТАБУ:	goto	and or not		int имяПППП
	===
		SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	double a = 0;

	std::cin >> a;

	if (a > 0)
	{
		std::cout << "Фарит";
	}
	else if (a < 0)
	{
		std::cout << "Привет";
	}
	else
	{
		std::cout << "Пока";
	}
	return 0;
	===
		SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int c = 0;
	while (c < 5)
	{
		std::cout << "Hello" << c << "\n";
		c++;
		if (c == 3)
		{
			continue;
		}
		std::cout << "world\n";
	}
	return 0;
	=
		int Number;
	int sum;
	std::cout << "\nВведите любое число:\n" << "\nВвод 0 показывает сумму всех набронных чисел\n\n";
	for (int Number = 0;)
	{
		std::cin >> Number;
		continue;
	}
	while (int Number = 0)
	{
		break;
		std::cout << "Сумма чисел" << sum;
	}
	return 0;
	===
	randomNumber = rand() % 10;
	std::cout << randomNumber << "\n";
	system("pause");
	===
	еще исправить


#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	srand(time(NULL));

	int choose = 0, hp = 0, number = 0, randomNumber = 0;
	int maxHp = 25, maxHpHard = 25, chance = 30;
	while (true)
	{
		system("cls");

		std::cout << "\n\nПривет! Добро пожаловать в игру" << "\n\n\t === \"УГАДАЙ ЧИСЛО\" ===\n\n";
		std::cout << "\t1 - Начать игру\n" << "\t2 - Настройки\n" << "\t0 - Выход\n\n";
		std::cout << "\nВвод -- ";
		std::cin >> choose;

		if (choose == 1)
		{

			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\tВыберите уровень сложности\n\n\n" << "1 - Лёгкий :) (1 - 500)\n" << "2 - Сложный (1 - 500)\n";
				std::cout << "0 - Выход в меню\n\n" << "\nВвод -- ";
				std::cin >> choose;

				if (choose == 1)
				{
					randomNumber = rand() % 500 + 1;
					hp = maxHp;
					while (true)
					{
						system("cls");
						std::cout << "\nКоличество жизней: " << hp << "\n";
						std::cout << "\nВведите число от 1 до 500 -- ";
						std::cin >> number;

						if (number == randomNumber)
						{
							std::cout << "\n\nПОЗДРАВЛЯМ! ВЫ ВЫИГРАЛИ UWU!!!\n";
							std::cout << "\nОстальные жизней -- " << hp << "\n";
							system("pause");
							break;
						}
						else if (number < 1 || number > 500)
						{
							std::cout << "\n\n\tОШИБКА! ВЫ ВЫШЛИ ЗА ЛИМИТЫ!!\n\n";
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "Вы поиграли!\nЧисло компьютера было: " << randomNumber << "\n";
								system("pause");
								break;
							}
							std::cout << "\nНе угадали\n";
							std::cout << "\nКоличество жизней: " << hp << "\n";
							std::cout << "\nВзять подсказку за одну жизнь?\n";
							std::cout << "\n1 - Да\nЛюбое число - Нет\n\n";
							std::cout << "Ввод -- ";
							std::cin >> choose;

							if (choose == 1)
							{
								hp--;
								if (hp <= 0)
								{
									std::cout << "Вы поиграли!\nЧисло компьютера было: " << randomNumber << "\n";
									system("pause");
									break;
								}
								if (number < randomNumber)
								{
									std::cout << "\nВваше число меньше числа комьютера\n";
								}
								else
								{
									std::cout << "\nВваше число больше числа комьютера\n";
								}
								Sleep(1700);
							}
							else
							{
								std::cout << "Отказ от подсказки\n";
								Sleep(1700);
							}
						}

					}

				}
				else if (choose == 2)
				{
					randomNumber = rand() % 5000 + 1;
					hp = maxHpHard;
					while (true)
					{
						system("cls");
						std::cout << "\nКоличество жизней: " << hp << "\n";
						std::cout << "\nВведите число от 1 до 5000 -- ";
						std::cin >> number;

						if (number == randomNumber)
						{
							std::cout << "\n\nПОЗДРАВЛЯМ! ВЫ ВЫИГРАЛИ UWU!!!\n";
							std::cout << "\nОстальные жизней -- " << hp << "\n";
							system("pause");
							break;
						}
						else if (number < 1 || number > 5000)
						{
							std::cout << "\n\n\tОШИБКА! ВЫ ВЫШЛИ ЗА ЛИМИТЫ!!\n\n";
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "\nВы поиграли!\nЧисло компьютера было: " << randomNumber << "\n";
								system("pause");
								break;
							}
							std::cout << "\nНе угадали\n";
							std::cout << "\nКоличество жизней: " << hp << "\n";
							std::cout << "\nВзять подсказку за одну жизнь?\n";
							std::cout << "\n1 - Да\nЛюбое число - Нет\n\n";
							std::cout << "\nВвод -- ";
							std::cin >> choose;

							if (choose == 1)
							{
								if (rand() % 100 + 1 <= chance)
								{
									std::cout << "Бесплатная подсказка\n";
									Sleep(1000);
								}
								else
								{
									hp--;
									if (hp <= 0)
									{
										std::cout << "Вы поиграли!\nЧисло компьютера было: " << randomNumber << "\n";
										system("pause");
										break;
									}

								}
								if (number < randomNumber)
								{
									std::cout << "\nВваше число меньше числа комьютера\n";
								}
								else
								{
									std::cout << "\nВваше число больше числа комьютера\n";
								}
								Sleep(1700);
							}
							else
							{
								std::cout << "Отказ от подсказки\n";
								Sleep(1700);
							}
						}

					}

				}
				else if (choose == 0)
				{
					break;
				}
				else
				{
					std::cout << "\nОШИБКА! Некорректный ввод\n\n";
					Sleep(1700);
				}
			}

		}
		else if (choose == 2)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\t === НАСТРОЙКИ ИГРЫ ===\n\n\n";
				std::cout << "\n1 - Изменить количество жизней для лёгкой игры\n";
				std::cout << "\n2 - Изменить количество жизней для сложной игры\n";
				std::cout << "\n3 - Изменить вероятность бесплатной подсказки для своей игры\n";
				std::cout << "\n0 - Вход в меню\n\n";
				std::cin >> choose;

				if (choose == 1)
				{
					while (true)
					{
						system("cls");
						std::cout << "\nВведите количество жизней для лёгкой игры:";
						std::cin >> choose;
						if (choose < 1 || choose > 100)
						{
							std::cout << "\nДопустимые значения от 1 до 100 -- ";
							Sleep(2000);
						}
						else
						{
							maxHp =
						}

					}


				}
				else if (choose == 2)
				{

				}
				else if (choose == 3)
				{

				}
				else if (choose == 0)
				{

				}

			}
		}
		else if (choose == 0)
		{
			system("cls");
			std::cout << "\n\n\n СПАСИБО ЗА ИГРУ!! :) \n\n";
			break;
		}
		else
		{
			std::cout << "\nОШИБКА! Некорректный ввод\n\n";
			Sleep(1700);
		}

	}

	return 0;
	==============================================================================================================
	#include <iostream>
	#include <Windows.h>

	int main()
	{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);


	int nam[10];
	int plus = 0, minus = 0, sum = 0;

	std::cout << "\nМасив:\n\n";

	const int size = 10;

	for (int i = 0; i < size; i++)
	{
		nam[i] = rand() % 21 - 10;
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << nam[i] << " ";
		if (nam[i] > 0)
		{
			plus += nam[i];
		}
		else
		{
			minus += nam[i];
		}
	}

	std::cout << "\n" << ;

	return 0;
	}

	}
========================================================
#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	const int row = 3, col = 4;

	int nam[row][col];

	for (int i = 0; i < row;i++)
	{
		for (int j = 0; j < col; j++)
		{
			nam[i][j] = rand() % 10 + 1;
			std::cout << nam[i][j] << " ";
		}
		std::cout << "\n";
	}


	return 0;
}

*/
