// Interface 1
interface A {
    void methodA();
}

// Interface 2
interface B {
    void methodB();
}

// Class C implements two interfaces (Multiple Inheritance using Interface)
class C implements A, B {
    public void methodA() {
        System.out.println("Method A from Interface A");
    }
    public void methodB() {
        System.out.println("Method B from Interface B");
    }
    void methodC() {
        System.out.println("Method C from Class C");
    }
}

// Class D extends class C (Multilevel Inheritance)
class D extends C {
    void methodD() {
        System.out.println("Method D from Class D");
    }
}

// Main Class
public class Main {
    public static void main(String[] args) {
        D obj = new D();
        obj.methodA();  // From Interface A
        obj.methodB();  // From Interface B
        obj.methodC();  // From Class C
        obj.methodD();  // From Class D
    }
}
