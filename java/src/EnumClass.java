
public enum EnumClass {
	person1("He is ________","25","male"),	
	person2 ("he is _______","48","male"),
	person3("she is________","30","female"),
	person4("he is_________","52","male"),
	person5("she is________","21","female");
	
	private final String name;private final String age;private final String gender;
	
	 EnumClass (String na,String ag,String ge) {
		 name=na;age=ag;gender=ge;
		
	}
String getname() {return name;}
String getage() {return age;}
String getgender(){return gender;}
}
