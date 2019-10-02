//--------------------------------------------------------
// Classes
//--------------------------------------------------------
class myArray {

	// Private data mebmbers
	int* array;
	int n;

	// Public data members, overloaded operators and functions
	public:
		myArray();
		myArray(int n);
		~myArray();
		void fillArray(int n);
		void zeroArray(int n);
		void setValue(int index, int value);
		void print();
		void push(int newValue);
		int getValue(int index);
		myArray operator+(myArray Y);
};