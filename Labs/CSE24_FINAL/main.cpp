
/*
	============
	Introduction
	============

	This activity must be completed exclusively in CodeSync. You may not work elsewhere and then copy and paste your completed solution here. Every single keystroke involved in generating the solution must be typed into CodeSync.

	Create a folder on the root of your workspace called "final_part2"

	Inside the "final_part2" folder, create a file called "driver.cpp". This is the file where you should write everything.

	Start your driver program by including iostream and string, using namespace std, and creating an empty main function that returns 0. You may copy and paste this part from somewhere if you wish. From this point on, you may not copy and paste anything external into your file. You can copy and paste lines or bits of text from within your own file to other places in your file, not from external places. The logs of CodeSync show all this.

	Also in the "final_part2" folder, create another honor pledge text file, with the same content as last time, and make sure it is included in your commits.

	Your final commit must arrive by 2:45 pm today, or 3:30 pm if you have an accommodations letter giving you extra time.

	=====
	Tasks
	=====

	Think of some item that is or was special to you. Today's activity is to create a struct that represents this item. It should be a physical object that has characteristics that can be represented by variables, and it should be able to perform one or more actions or we should be able to perform actions with it.

	For example, if we are representing a "ToyCar", we might choose to represent the "color" of the car, the "scale" of it, and the "year" it was manufactured. There are many other actions that can be performed, depending on what variables you have chosen to include in your struct. For example, if you include a "location" variable, which is a string, you could have an action called "moveTo(string newLocation)", which would simply change the value of the "location" variable, to represent the fact that your object has moved. You could start out with having "location" set to "Basement" and call moveTo("Attic"). The actions are basically functions that change the values of variables in the struct. 

	Needless to say, you may not use the above example for your struct. Think of something else, and make it something that other people are not likely to think of.

	- [5 points] As a comment in your file write a description of the object you are designing. Explain what features/attributes/actions of it are relevant to you for this application, and what features/attributes/actions you are omitting. The decisions are all up to you.

	- [5 points] Create at least two more variables that are relevant for your object. They can be anything you want, as long as its relevant. 

	- [5 points] Your struct should also be able to perform at least one action, which you implement as a function inside your struct. It can be anything relevant to your struct, and you can decide on what the signature should be. You can make as many functions as you want but there must be at least one.

	- [5 points] I have to be able to create your object without passing any arguments, so you must have a default constructor.

	- [5 points] I should also be able to cout your object. Overload the << operator for your struct in a meaningful way.

	Once you are done with making the struct, go to your main function and do the following:

	- [10 points] Set aside enough memory on the heap for two instances of your struct, and put two separate objects of your struct in there.

	- [5 points] Print out the address of each one of your objects.

	- [5 points] Free up the memory occupied by your objects before your program ends.

	- [5 points] Produce an executable from your code. You can use "g++ driver.cpp -o driver" when you're in your "final_part2" folder. Make sure to commit that executable, which will serve as evidence that you actually ran your code at least once.
*/


#include <iostream>
#include <string>


using namespace std;

/* this will be a representation of my laptop for general purposes
*
* my laptop has a manufacturer and model, it also has a CPU and an amount of RAM in GB's
*
* it turns on and off
*/


struct Laptop{
	string manufacturer;
	string model;
	string cpu;
	int ram_in_gb;


Laptop(string manu = "Dell", string mod = "G7", string cp = "i7-10750H", int ram = 16){
	this->manufacturer = manu;
	this->model = mod;
	this->cpu = cp;
	this->ram_in_gb = ram;
}

void turn_on() const{
	cout << "Turning" << manufacturer << " " << model << "ON" << endl;
}

void turn_off() const{
	cout << "Turning" << manufacturer << " " << model << "ON" << endl;
}

friend ostream &operator<<(ostream& o, const Laptop &laptop){
	o << "Laptop from " << laptop.manufacturer << " named " << laptop.model << " with " << laptop.cpu << " and RAM " << laptop.ram_in_gb << " GB ";
	return o;
}
};


int main (){
	Laptop *l1 = new Laptop("Dell", "G7", "i7-10750H", 16);
	Laptop *l2 = new Laptop("HP", "Envy", "i9-10900K", 16);
	Laptop l3("Apple", "Macbook 13", "i3-10100u", 8);
	Laptop l4("HP", "Pavilion 15", "i5-9300H", 8);

	cout << "L1@" << l1 << endl;
	cout << "L2@" << l2 << endl;
	cout << "L3@" << &l3 << endl;
	cout << "L4@" << &l4 << endl;

	delete l1;
	delete l2;
	return 0;
	
}

