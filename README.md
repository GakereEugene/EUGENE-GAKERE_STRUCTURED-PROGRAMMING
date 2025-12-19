A normal variable stores an actual Data value such as an integer, float or a character. The data value is stored directly in the memory and accessed through the variable name. The value is therefore read by the variable name and modified by assigning a new value to the variable, while a pointer stores the memory address of another variable and the actual value itself. Its memory address is accessed through the pointer and read through dereferencing the pointer using the operator (*). The value is then modified by dereferencing the pointer and assigning another value.


Variable declaration tells the compiler that a variable exists and tells it its name or value and definition allocates memory for the variable and optionally assigns a value to the variable, while pointer declaration refers to specifing that the variable will store an address. The * operator tells the compiler that the variable is a pointer while the operator & is used to obtain the address of another variable.


Dereferencing a pointer refers to accessing the value stored at the memory address held by the pointer. This is done using the * operator.
	Int x = 10;
	Int *p = &x;
	Accessing the value:
	Printf(“%d”, *p);
	Modification of a value using dereferencing. This changes the p value of x to 25
*p = 25;	


Pointers are preferred when direct access to memory is required, efficient data handling and sharing data between functions.
	Case 1. Modifying variables inside functions. (Call by reference) 
	Pointers allow the modification of variables outside the function.
	Void swap (int *a, int *b) {
		Int temp = *a;
		*a = *b;
		*b = temp;
	}
	Case 2. Dynamic memory Allocation
	Pointers are essential for handling memory allocated at runtime
	Int *arr;
	Arr = (int *)malloc(5 * sizeof(int));


Limitations: 
	Complexity in code: pointers make programs harder to read and debug
	Manual Memory management: Pointers often require explicit malloc/free calls, increasing the chances of mistakes
	Harder maintenance: Code with heavy pointer use is more difficult to maintain compared to variable based
Risks:
	Dangling Pointers: Occurs when a pointer references freed memory which leads to crashing when access to it is attempted
	Buffer Overflows: Writing beyond Allocated memory corrupts adjacent data
	Memory leaks: Forgetting to free dynamically allocated memory wastes resources.


Call by value creates a copy of the variable and passes it to the function without affecting the original variable
	Void change (int x) {
		X = 20
	}
	Int main() {
		Int a = 10;
		Change(a);
	}
Call by reference works by passing the address of the variable to the function and the original variable is affected
	Void change(int *x) {
		*x = 20;
	}
	Int main() {
		Int a = 10;
		Change(&a);        // a is now 20



Call by Value:
When performing simple calculations
	int square(int x) {
		Return x * x;
	}
Call by Preference 
When updating multiple Values
	void calculate(int *sum, int *products, int a, int b) {
		*sum = a + b;
		*product = a * b;
	}   
