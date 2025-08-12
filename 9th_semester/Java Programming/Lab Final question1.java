interface EngineControl{
	void startEngine();
}

class car implements EngineControl{
	public void startEngine(){
		System.out.println("Car Engin Started");
	}
}

class motorbike implements EngineControl{
	public void startEngine(){
		System.out.println("motorbike engine started");
	}
}

public class question1{
	public static void main(String[] args) {
		motorbike m = new motorbike();
		m.startEngine();
		
		car c = new car();
		c.startEngine();
	}
}
