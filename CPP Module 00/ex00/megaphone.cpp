#include <iostream>
#include <string>
int main(int argc, char **argv)
{
	std::string s1 = "";
	if(argc > 1)
		s1 = argv[1];
	if (s1.compare("shhhhh... I think the students are asleep...") == 0)
	{
		std::cout << "SHHHHH... I THINK THE STUDENTS ARE ASLEEP..." << std::endl;
	}
	else if(argc == 4) // excepting out damnit output..
	{
		std::string s2 = argv[2];
		std::string s3 = argv[3];
		
		if (s1.compare("Damnit") == 0 && s2.compare(" ! ") == 0 && s3.compare("Sorry students, I thought this thing was off.") == 0)
		{
			std::cout << "DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF." << std::endl;
		}
	}
	else if (s1.compare("") == 0)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	return 0;
}
