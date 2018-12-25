#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std; 

int fibonacci(int fibNum)
{
	if(fibNum <= 2)
		return 1;
		
	return fibonacci(fibNum - 1) + fibonacci(fibNum -2);
}

int main()
{
	int fibNum; 
	cin >> fibNum;
	cout << fibonacci(fibNum); 
}
