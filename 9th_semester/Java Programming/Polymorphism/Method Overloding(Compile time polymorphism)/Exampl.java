class Calculator {
int add ( int a, int b ) {  // Method 1 : 2 int parameter
	return a + b;
 }
// Method 2 : 3 int parameter
int add(int a, int b, int c) {
	return a + b + c;
}
//method 3 : 2 double parameter
double add(double a, double b){
	return a + b;
      }
}

public class Main {
	public static void main(String[] args){
	Calculator cal = new Calculator();
	
	System.out.println("Sum of 2 int: " + cal.add(5, 10));
	System.out.println("sum of 3 int: " + cal.add(3, 5,6));
	System.out.println("Sum of 2 double: " + cal.add(3.4, 2.6));
	
	}
}
