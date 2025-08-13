abstract class Animal {
	abstract void sound(); // abstract method
	
	void sleep() {
		System.out.println("Sleeping...");
	}
}
class Dog extends Animal {
	void sound() {
		System.out.println("Dog barks");
	}
}
class Cat extends Animal {
	void sound() {
		System.out.println("Cat meows");
	}
}

public class Main {
	public static void manin(String[] args) {
		Animal d = new Dog();
		Animal c = new Cat();
		
		d.sound();
		c.sound();
		
		d.sleep();
	}
}
