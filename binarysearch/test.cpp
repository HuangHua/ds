#include <iostream>
#include <vector>
#include <algorithms/binarysearch.h>

int main()
{
	std::cout << "Init an sorted array, please input the number range: " << std::endl;
	int min = 0, max = 10;
	std::cin >> min >> max;
	if(min > max)
		std::swap(min, max);

	std::vector<int> vec;
	vec.reserve(max-min);
	for(int i = min; i < max; ++i)
	{
		vec.push_back(i);
	}

	std::cout << "Which number do you want to search?" << std::endl;

	int num = 3;
	std::cin >> num;
	int* pNum = Algorithm::Search::binarySearch<std::vector<int> >(vec, num);
	if(pNum)
		std::cout << "found " << num << std::endl;
	else
		std::cout << "not found " << num << std::endl;

	return 0;
}
