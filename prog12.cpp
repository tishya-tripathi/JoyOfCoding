#include<iostream>

using namespace std;

class Singleton
{
	
	private static Singleton obj;

	private Singleton();

	public static Singleton getInstance()
	{
		if(obj == NULL)
		{
			obj = new Singleton();
	
}
