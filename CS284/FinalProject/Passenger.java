/*
	@author John Spicer
*/
public class Passenger extends Person 
{

	private int origin;
	private int species;
	private int dangerLevel;
	private int isThreat;

	/*
		@param f: firstName
		@param l: lastName
		@param a: age
		@param g: gender
		@param o: origin
		@param s: species
		@param dL: dangerLevel
		@param isT: isThreat
	*/
	public Passenger(String f, String l, int a, int g, int o, int s, int dL, int isT) 
	{
		firstName = f;
		lastName = l;
		age = a;
		gender = g;
		origin = o;
		species = s;
		dangerLevel = dL;
		isThreat = isT;
	}
		
	/*
		@return origin of Passenger
	*/
	public int getOrigin() 
	{
		return origin;
	}
	
	/*
		@return species of Passenger
	*/
	public int getSpecies() 
	{
		return species;
	}
	
	/*
		@return dangerLevel of Passenger
	*/
	public int getDangerLevel() 
	{
		return dangerLevel;
	}
	
	/*
		@return isThreat of Passenger
	*/
	public int getIsThreat() 
	{
		return isThreat;
	}
	
	/*
		@param pass: passenger object
		@return positive if this.getDangerLevel()is higher than pass.getDangerLevel(), negative if this.getDangerLevel()is lower than pass.getDangerLevel(), zero if this.getDangerLevel()is equal to pass.getDangerLevel()
	*/
	public int compareTo(Passenger pass) 
	{
		//System.out.println(this.toString());
		//System.out.println(pass.toString());
		return (this.getDangerLevel() - pass.getDangerLevel());
	}

	/*
		@return first and last name of passenger
	*/
	public String toString()
	{
		return this.firstName + " " + this.lastName;
	}

	/*
		@return index of Passenger
	*/
	public int getIndex()
	{
		return this.age - this.gender + this.origin + this.species; 
	}

}
