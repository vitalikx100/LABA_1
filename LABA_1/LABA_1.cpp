#include <iostream>
using namespace std;
int main()
{
	cout << "Perfect numbers" << endl;
	int input_int; //входное значение
	int to_input; //Перебор до числа
	int dividers;//Делители числа
	while(true)
	{
	
		
		cout << "Input a positive integer>";
		cin >> input_int;
		cout << "Perfect numbers:";
		for (to_input=1; to_input<input_int; to_input++)//Цикл перебирает все числа, лежащие до заданного числа
		{
			
			int dividers_summ=0; //сумма делителей
			for (dividers=1; dividers<to_input;dividers++)//поиск делителей числа на очереди
			{
				if(to_input%dividers==0)
				{
					dividers_summ += dividers;
				}
			}
			if (dividers_summ == to_input)
			{
				cout  << " "<< to_input;
			}
		}

		cout << endl;
		cout << "Continue? (Y/N)>";
		string end_point;  //переменная для завершения выполнения при вводе N
		cin >> end_point;
		cout << "\n";

		
		while (end_point != "Y" and end_point != "N")//проверка ввода 
		{
			cout << "Error" << endl;
			cout << "Continue? (Y/N)>";
			cin >> end_point;
			cout << endl;
			if (end_point == "Y" || end_point == "N")
			{
				break;
			}
		}
		
		if (end_point == "N")
		{
			break;
		}
	}
	
	return 0;
}

