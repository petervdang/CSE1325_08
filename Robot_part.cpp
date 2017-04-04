#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Robot_part
{
	protected:
		string name;
		int model_number;
		double cost;
		string description;
		string type;
		string image_filename;
		double power;
		double max_power;
		double power_available;
		double max_energy;
		int battery_compartments;
		int max_arms;
	public:
		Robot_part(string _name, int _model_number, double _cost, string _description, string _type, double _power, double _max_power, double _power_available, double _max_energy, int _battery_compartments, int _max_arms) : name(_name), model_number(_model_number), cost(_cost), description(_description), type(_type), power(_power), max_power(_max_power), power_available(_power_available), max_energy(_max_energy), battery_compartments(_battery_compartments), max_arms(_max_arms) {}


		virtual void component(){}
		string getName() {return name;}
		int getModel_number() {return model_number;}
		double getCost() {return cost;}
		string getDescription() {return description;}
		string getImage_filename() {return image_filename;}
		string getType() {return type;}
		double getPower() {return power;}
		double getMax_power() {return max_power;}
		double getMax_energy() {return max_energy;}
		double getPower_available() {return power_available;}
		int getBattery_compartments() {return battery_compartments;}
		int getMax_arms() {return max_arms;}

};




/*
class Arm : public Robot_part
{
	public:
		void component()
		{
			
		}
	
};

class Battery : public Robot_part
{

};

class Torso : public Robot_part
{

};

class Locomotor : public Robot_part
{

};

class Head : public Robot_part
{

};

*/




