class Student {
	String name;
	
	// Default constructor
	Student() {
		name = "Unknown";
	}
	void display() {
		System.out.println("Name: " + name);
	}
}
public class Main {
	public static void main(String[] args) {
		Student s1 = new Student();	// default constructor call
		s1.display();
	}
}
