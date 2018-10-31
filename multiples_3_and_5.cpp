
#include <iostream>

using namespace std;

int main()
{

	int somme=0;
	for (int loop = 0; loop < 1000; loop++)
	{
		if (loop % 3 == 0 || loop % 5 == 0)
		{
			somme += loop;
		}
	}
	cout << somme << endl;
		
	
    return 0;
}