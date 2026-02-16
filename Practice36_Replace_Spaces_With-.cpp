
#include <iostream>
using namespace std;





int main()
{
	char input[200];
	cin.getline(input, 200);

	for (int character_index = 0; input[character_index] != '\0'; character_index++)
	{
		if (input[character_index] == ' ')
		{
			input[character_index] = '-';
		}
	}
	cout << input << endl;
	return 0;
}
