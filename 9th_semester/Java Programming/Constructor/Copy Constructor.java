class Student {
String name;

	// parameterizea constructor
	Student(String n) {
		name = n;
	}
	// Copy constructor
	Student(Student s) {
		name = s.name;
	}
	void display() {
		System.out.println("Name: " + name);
	}
}

public class Main {
	public static void main (String[] args) {
		Student s1 =  new Student("Topu");
		Student s2 = new Student(s1);  // copy construcotor call
		
		s1.display();
		s2.display();
	}
}
