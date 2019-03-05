#include <iostream>

class IntPair 							// declare class. We use class name to create objects of that type (the class name)
{
										/* In general it's a good practice to make class variables private and class functions public
										   Anything not under 'public:' is considered private. So up here we would write private stuff...

										   The reason we can't put the two variables as private for this example is because of line 37
										*/
public:
										/*  The group of public members of a class are often referred to as a public interface.
											Because only public members can be accessed from outside of the class,
											the public interface defines how programs using the class will interact with the class.
										*/
	int key;							// declare variables we want to use
	int value;


	void set(int key, int value) 		// key and value delcared here only exist withn scope of the set function
	{
		IntPair::key = key; 			// equavelent to ' this.key = key ' in java?
		IntPair::value = key; 			// basically what we are saying is map the value of the function 'key' to the class 'key'
	}

	void print()
	{
		std::cout << "Pair("<< key << ", " << value <<")\n";
	}

};

int main()
{
	IntPair p1; // create object p1 of type 'IntPair'
	p1.set(1, 1); // set p1 values to (1, 1)

	IntPair p2{ 2, 2 }; // initialize p2 values to (2, 2)

	p1.print();
	p2.print();

	return 0;
}
