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

	const double porog_skidka = 1000.0;
	while (true)
	{
		system("cls");
		std::cout << "\tДобро пожаловать в магазин Соки Александра\n\n";
		std::cout << "1 - Фруктовые соки\n";
		std::cout << "2 - Овощные соки\n";
		std::cout << "3 - Чаи\n";
		std::cout << "4 - Настойка\n";
		std::cout << "5 - Корзина и оплата\n";
		std::cout << "0 - Выход\n";
		std::cout << "Ввод:\n";
		std::cin >> menu;


		if (menu == 1)
		{
			while (true)
			{
				system("cls");
				std::cout << "\t======Фруктовые соки======\n";
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
					if (litr_n_boyar > 0)
					{
						int choose_1 = 0;
						std::cout << "Внимание! Покупка фруктового сока анулирует вашу покупку настойку боярышника!\n";
						std::cout << "Продолжить?(1- да, 0- нет): ";
						std::cin >> choose_1;
						if (choose_1 == 1)
						{
							litr_n_boyar = 0;
						}
						else
						{
							continue;
						}
					}

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
				std::cout << "\n\t======Овощные соки======\n";
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
				std::cout << "\n\t======Чаи======\n";
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
				std::cout << "\n\t=====Настойка======\n";
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
					int fruit_total = litrapple + litrorange + litrabrikos + litrgrusha;
					int choose_2 = 0;
					if (fruit_total > 0)
					{
						std::cout << "Ошибка: вы не можете купить настойку юоярышника, так как вы уже купили фруктовый сок!\n";
						std::cout << "Нажмите 1 чтобы выйти\n";
						std::cin >> choose_2;
						if (choose_2 == 1)
						{
							break;
						}
					}

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
			while (true)
			{
				system("cls");
				std::cout << "\n======Ваш чек======\n\n";

				double total = litrapple * pr_apple +
					litrorange * pr_orange +
					litrabrikos * pr_abrikos +
					litrgrusha * pr_grusha +
					litrtomat * pr_tomat +
					litronion * pr_onion +
					litrcucumber * pr_cucumber +
					litr_t_garlik * pr_t_garlik +
					litr_t_petrush * pr_t_petrush +
					litr_n_boyar * pr_n_boyar;

				//скидка на чай 5%
				double cost_petrush = litr_t_petrush * pr_t_petrush;
				double skidka_petrush = 0.0;
				if (litr_t_petrush >= 3)
				{
					skidka_petrush = litr_t_petrush * 0.05;
				}
				double petrush_fin_cost = litr_t_petrush - skidka_petrush;
				total += petrush_fin_cost;


				//луковый суп 4л
				int oplach_onion = litronion - (litronion / 4);
				int free_onion = litronion / 4;
				double cost_onion = oplach_onion * pr_onion;
				total += cost_onion;

				if (litrapple > 0)
				{
					std::cout << "Яблочный сок: " << litrapple << " л\n";
				}
				if (litrorange > 0)
				{
					std::cout << "Апельсиновый сок: " << litrorange << " л\n";
				}
				if (litrabrikos > 0)
				{
					std::cout << "Абрикосовый сок: " << litrabrikos << " л\n";
				}
				if (litrgrusha > 0)
				{
					std::cout << "Грушевый сок: " << litrgrusha << " л\n";
				}
				if (litrtomat > 0)
				{
					std::cout << "Томатный сок: " << litrtomat << " л\n";
				}
				if (litronion > 0)
				{
					std::cout << "Луковый сок: " << litronion << " л\n";
				}
				if (litrcucumber > 0)
				{
					std::cout << "Огуречный сок: " << litrcucumber << " л\n";
				}
				if (litr_t_garlik > 0)
				{
					std::cout << "Чесночный чай: " << litr_t_garlik << " л\n";
				}
				if (litr_t_petrush > 0)
				{
					std::cout << "Петрушевый чай: " << litr_t_petrush << " л\n";
				}
				if (litr_n_boyar > 0)
				{
					std::cout << "Настойка боярышника: " << litr_n_boyar << " л\n";
				}
				if (total == 0)
				{
					std::cout << "Ваша корзина пуста\n";
				}


				if (free_onion > 0)
				{
					std::cout << "Скидка по акции на луковый сок: " << free_onion * pr_onion << " руб\n";
				}
				if (skidka_petrush > 0)
				{
					std::cout << "Скидка 5% на петрушевый чай: " << skidka_petrush << " руб\n";
				}


				double all_skidka = 0.0;
				if (total > porog_skidka)
				{
					all_skidka = total * 0.13;
					std::cout << "\nСкидка 13% на весь чек: " << all_skidka << " руб\n";
				}
				double final_price = total - all_skidka;

				std::cout << "\nИТОГО К ОПЛАТЕ: " << final_price << " руб\n";

				system("pause");
				break;
			}
		}

		else
		{
			break;
		}

	}
	return 0;
}