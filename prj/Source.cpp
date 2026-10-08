#include <iostream>
#include <windows.h>

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	std::cout << "Добро пожаловать в магазин Соки Александра";
	int menu = 0;
	const double pr_apple = 139.99, pr_orange = 149.99, pr_abrikos = 134.99, pr_grusha = 129.99;
	const double pr_tomat = 109.99, pr_onion = 99.99, pr_cucumber = 114.99;
	const double pr_t_garlik = 19.99, pr_t_petrush = 69.99;
	const double pr_n_boyar = 0;

	int litrapple = 0, litrorange = 0, litrabrikos = 0, litrgrusha = 0, litrtomat = 0, litronion = 0, litrcucumber = 0, litr_t_garlik = 0, litr_t_petrush = 0, litr_n_boyar = 0;
	while (true)
	{
		system("cls");
		std::cout << "\tДобро пожаловать в магазин Соки Александра\n";
		std::cout << "1 - Фруктовые соки\n";
		std::cout << "2 - Овощные соки\n";
		std::cout << "3 - Чаи\n";
		std::cout << "4 - Настойка";
		std::cout << "5 - Корзина и оплата\n";
		std::cout << "6 - Оставить отзыв\n";
		std::cout << "0 - Выход\n";
		std::cout << "Ввод:\n";
		std::cin >> menu;


		if (menu == 1)
		{
			while (true)
			{
				system("cls");
				std::cout << "\tФруктовые соки\n";
				std::cout << "1 - Яблочный (" << pr_apple << " руб/л) (В корзине: " << litrapple << " л)\n";
				std::cout << "2 - Апельсиновый (" << pr_orange << " руб/л) (В корзине: " << litrorange << " л)\n";
				std::cout << "3 - Абрикосовый (" << pr_abrikos << " руб/л) (В корзине: " << litrabrikos << " л)\n";
				std::cout << "4 - Грушевый (" << pr_grusha << " руб/л) (В корзине: " << litrgrusha << " л)\n";
				std::cout << "0 - Выход\n";
				std::cout << "Ввод:\n";
				int choose, littre;
				std::cin >> choose;
				if (choose == 0)
				{
					break;
				}
				else if (1 <= choose <= 4)
				{
					std::cout << "Введите кол-во литров: ";
					std::cin >> littre;
					if (littre > 0)
					{
						if (choose == 1)
						{
							litrapple += littre;
						}
						if (choose == 2)
						{
							litrorange += littre;
						}
						if (choose == 3)
						{
							litrabrikos += littre;
						}
						if (choose == 4)
						{
							litrgrusha += littre;
						}
					}
				}
			}

		}

		else if (menu == 2)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\tОвощные соки\"\n\n\n";
				std::cout << "1 - Томатный (" << pr_tomat << " руб/л) (В корзине: " << litrtomat << " л)\n";
				std::cout << "2 - Луковый (" << pr_onion << " руб/л) (В корзине: " << litronion << " л)\n";
				std::cout << "3 - Огуречный (" << pr_cucumber << " руб/л) (В корзине: " << litrcucumber << " л)\n";
				std::cout << "0 - Выход\n";
				std::cout << "Ввод:\n";
				int choose, littre;
				std::cin >> choose;
				if (choose == 0)
				{
					break;
				}
				else if (1 <= choose <= 3)
				{
					std::cout << "Введжите кол-во литров: ";
					std::cin >> littre;
					if (littre > 0)
					{
						if (choose == 1)
						{
							litrtomat += littre;
						}
						if (choose == 2)
						{
							litronion += littre;
						}
						if (choose == 3)
						{
							litrcucumber += littre;
						}
					}
				}
			}
		}

		else if (menu == 3)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\tЧаи\"\n\n\n";
				std::cout << "1 - Чесночный (" << pr_t_garlik << " руб/л) (В корзине: " << litr_t_garlik << " л)\n";
				std::cout << "2 - Петрушевый (" << pr_t_petrush << " руб/л) (В корзине: " << litr_t_petrush << " л)\n";
				std::cout << "0 - Выход\n";
				std::cout << "Ввод:\n";
				int choose, littre;
				std::cin >> choose;
				if (choose == 0)
				{
					break;
				}
				else if (1 <= choose <= 2)
				{
					std::cout << "Введжите кол-во литров: ";
					std::cin >> littre;
					if (littre > 0)
					{
						if (choose == 1)
						{
							litr_t_garlik += littre;
						}
						if (choose == 2)
						{
							litr_t_petrush += littre;
						}
					}
				}
			}
		}

		else if (menu == 4)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\tНастойка\"\n\n\n";
				std::cout << "1 - Боярышника (" << pr_n_boyar << " руб/л) (В корзине: " << litr_n_boyar << " л)\n";
				std::cout << "0 - Выход\n";
				std::cout << "Ввод:\n";
				int choose, littre;
				std::cin >> choose;
				if (choose == 0)
				{
					break;
				}
				else if (choose == 1)
				{
					std::cout << "Введжите кол-во литров: ";
					std::cin >> littre;
					if (littre > 0)
					{
						if (choose == 1)
						{
							litr_n_boyar += littre;
						}
					}
				}
			}
		}


		else if (menu == 5)
		{
			system("cls");
		}
	}
	return 0;
}