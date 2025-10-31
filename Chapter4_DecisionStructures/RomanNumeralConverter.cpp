#include <iostream>

int main()
{
	int number{0};
	//Do-while loop to not quit program when invalid number is input.
	do {
		std::cout << "Enter a numer 1-7: ";
		std::cin >> number;
		if (number < 1 || number >7)
		{
			std::cout << "That number is invalid please try again\n";
		}
	} while (number < 1 || number >7);
	
	
	
	
	switch (number)
	{
	case 1:
		std::cout << "I";
		break;
	case 2:
		std::cout << "II";
		break;
	case 3:
		std::cout << "III";
		break;
	case 4:
		std::cout << "IV";
		break;
	case 5:
		std::cout << "V";
		break;
	case 6:
		std::cout << "VI";
		break;
	case 7:
		std::cout << "VII";
		break;
	default:
		std::cout << "that is not witnin the range.";
}

	return 0;
}
