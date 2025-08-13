class Animal {
	void sound() {
		System.out.println("Animal make sound");
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
    public static void main(String[] args) {
        Dog d = new Dog();
        d.sound();
        
        Cat c = new Cat();
        c.sound();
    }
}
