// parent clas
class Animal{
    void eat(){
        System.out.println("Animal is eating");
    }
}
// 1st child calsss
class Cat extends Animal{
    void mew(){
        System.out.println("Cat is meow");
    }
}
//2nd child class
class Dog extends Animal{
    void bark(){
        System.out.println("Dog is bark");
    }
}


// main class
class Main {
    public static void main(String[] args) {
      Cat c = new Cat();
      c.eat();
      c.mew();
      
      Dog d = new Dog();
      d.eat();
      d.bark();
    }
}
