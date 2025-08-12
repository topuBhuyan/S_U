interface printTable {
	void print();
 }
 
 interface showTable {
 	void show();
 }
 
 class A implements printTable, showTable { 
 	public void print() { 
 		System.out.println("Printing...");
 	}
 	
 	public void show() {
 		System.out.println("Showing");
 	}
 } 
 
 public class Main {
 	public static void main(String[] args) {
 		A  obj = new A();
 		obj.print();
 		obj.show();
 	}
 }
 
 
