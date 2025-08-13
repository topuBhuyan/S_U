class Student {
	String name;
	int age;
	
	// Parameterized constructor
	Student(String n, int a ) {
		name = n;
		age = a;
	}
	void display() {
		System.out.println(name + " is " + age + " years old ");
	}
 }
 
 public class Main {
 	public static void main(String[] args) {
 		Student s1 = new Student("Topu", 22); 	// object with values
 		s1.display();
 	}

 }
