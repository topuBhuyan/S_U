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
// Grand child class
class Puppy extends Dog{
    void weep(){
        System.out.println("Puppy is wepping");
    }
}
// main class
class Main {
    public static void main(String[] args) {
       Puppy p = new Puppy();
       p.eat();
       p.bark();
       p.weep();
    }
}
