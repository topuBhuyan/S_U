// create class
public class Car {
    String color;
    int speed;

    // Method
    void drive() {
        System.out.println("The car is driving.");
    }
}
// Creating an object of the Car class
public class Main {
    public static void main(String[] args) {
        Car myCar = new Car();

        myCar.color = "Red";
        myCar.speed = 100;
        // Accessing object method
        myCar.drive();
    }
}
