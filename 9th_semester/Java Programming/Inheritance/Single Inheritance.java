// parent class
class Animal{
    void eat(){
        System.out.println("Animal is eating");
    }
}

// child class
class Dog extends Animal{
    void bark(){
        System.out.println("DOg is bark");
    }
}

// main class
class Main {
    public static void main(String[] args) {
       Dog d = new Dog();
       d.eat();
       d.bark();
    }
}
