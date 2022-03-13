#include<iostream>
#include<string>

namespace cmd
{

	void help()
	{
		std::cout << "-help to get usage\n" << std::endl;
		exit(0);
	}
	
	inline std::string parse(int argc, char* argv[],std::string option)
	{
		if (argc == 1) help();

		for (int i = 1; i < argc; i++)
		{
			if(!option.compare(argv[i])){ //if (option._Equal(argv[i])) { 

				if (argc <= (i + 1)) help();
				return argv[i + 1];
			}
		}
	}
	

}
