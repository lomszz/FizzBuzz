#include <iostream>
#include <string>
using namespace std;


// FizzBuzz function which takes 2 parameters, start and end. Iterates till end while checking if i is divisible with 3 and 5. If this returns true
// output will be "FizzBuzz". Continues to another loop checking if it's divisible with 3, this returns Fizz if it is. Third if loop checks if i is divisible with 5, returns Buzz if it is.
// Lastly, if it's not divisible either of integers. We print that number.
void fizzBuzz(int start, int end) {
	string output = "";
	for (int i = start; i < end; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			output = "FizzBuzz";
		}
		else if (i % 3 == 0) {
			output = "Fizz";
		}
		else if (i % 5 == 0) {
			output = "Buzz";
		}
		else {
			output = to_string(i);
		}
	cout << output << endl;
	}
}

int main()
{
	fizzBuzz(1, 101);
}


