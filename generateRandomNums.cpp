#include<iostream>;
#include<fstream>;
int main()
{
	srand((unsigned)time(NULL));
	int counter =0;
	std::ofstream file_out;
	file_out.open("randomNumsUpTo10k.txt");
	while (counter < 10'000) {
		int random_num = rand();
		random_num = (1 + random_num % 200);
		file_out << random_num;
		file_out << ' ';
		counter++;
	}
	file_out.close();
	return 0;
}