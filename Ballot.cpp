#include <iostream>

class Ballot
{
	int candidate[50];
	int count[10];
	int n;

public:
	void initialize()
	{
		std::cout << " How many candidates do you want : ";
		std::cin >> n;
	}
	void input()
	{
		for (int i = 1; i <= 6; i++)
		{
			count[i] = 0;
		}

		std::cout << " Enter the candidates' number : " << std::endl;
		for (int i=1; i <= n; i++)
		{
			std::cin >> candidate[i];

			switch (candidate[i])
			{
			case 1:candidate[i] == 1;
				count[1]++;
				break;
			case 2:candidate[i] == 2;
				count[2]++;
				break;
			case 3:candidate[i] == 3;
				count[3]++;
				break;
			case 4:candidate[i] == 4;
				count[4]++;
				break;
			case 5:candidate[i] == 5;
				count[5]++;
				break;
			default:
				count[6]++;
				break;
			}
		}
	}
	void finalize()
	{
		for (int i = 1; i <= 5; i++)
		{
			std::cout << i << " has  " << count[i] << " votes " << std::endl;
		}
		std::cout << "There were "<< count[6] << " spoilt ballots" << std::endl;
	}
};

int main()
{
	Ballot r1;

	r1.initialize();
	r1.input();
	r1.finalize();

	std::cin.get();
}
