/* Arith Ops using functions and arrays*/


#include <stdio.h>
#include <math.h>
//Add a function declaration here
int smallnumbercompare(int num1, int num2)
//Define or Implement that function here
int smallnumbercompare(int num1, int num2){
	int smaller = num1;
	if(num1 > num2){
		smaller = num2;
	}
	return smaller;
}
int main(){

	 int number1[] = {100, 35, 20, 1556, 17, 8};
	 int number2[] = {218, 435, 5, 100, 125, 2};
	 char op[] =  {'-', '%', '/', '+', '*', '^'};
	 int sz = sizeof(number1)/sizeof(int)
	 int i = 0;
	 for(i = 0; i< sz; i++) {
		printf("%d" "%c" "%d\n", number1[i], op[i], number2[i]);
	if (op[i] == '-') {
		printf("%d - %d = %d\n", number1[i], number2[i], number1[i]-number2[i]);
	}
	 else if (op[i] == '%') {
		printf("%d %% %d = %d\n", number1[i], number2[i], number1[i]%number2[i]);
	 }
	  else if (op[i] == '/') {
		printf("%d / %d = %d\n", number1[i], number2[i], number1[i]/number2[i]);
	 }
	  else if (op[i] == '+') {
		printf("%d + %d = %d\n", number1[i], number2[i], number1[i]+number2[i]);
	 }
	  else if (op[i] == '*') {
		printf("%d * %d = %d\n", number1[i], number2[i], number1[i]*number2[i]);
	 }
	  else if (op[i] == '^') {
		printf("%d^%d = %d\n", number1[i], number2[i], smallnumbercompare);
	 }
	 else{
	 }
	 }
	 return 0;
}
	 /* Use the arrays num1 and num2 to get the numbers for the same index and use the 
	 op array to perform the arithmetic op for that same index
	 For the operators
	 ^ indicates that the larger number from num1 and num2 
	 should be raised to the power of the smaller number
	 /, %  the larger number must be divided by the smaller number
	 Call the function declared and implemented above*/
	 
	 
	 
	 
	 /* Output required is shown below
	    100 - 218 = -118
		435 % 35 = 15
		20 / 5 = 4
		1556 + 100 = 1656
		8 ^ 2 = 64.000000 */