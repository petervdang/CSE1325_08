#include "Robot_part.cpp"

class Robot_model
{
	private:
		string name;
		int model_number;
		Robot_part torso(string _name, int _model_number, double _cost, string _description, string _type, double _power, double _max_power, double _power_available, double _max_energy, int _battery_compartments, int _max_arms);
		Robot_part head(string _name, int _model_number, double _cost, string _description, string _type, double _power, double _max_power, double _power_available, double _max_energy, int _battery_compartments, int _max_arms);
		Robot_part locomotor(string _name, int _model_number, double _cost, string _description, string _type, double _power, double _max_power, double _power_available, double _max_energy, int _battery_compartments, int _max_arms);
		Robot_part arm(string _name, int _model_number, double _cost, string _description, string _type, double _power, double _max_power, double _power_available, double _max_energy, int _battery_compartments, int _max_arms);
		Robot_part battery(string _name, int _model_number, double _cost, string _description, string _type, double _power, double _max_power, double _power_available, double _max_energy, int _battery_compartments, int _max_arms);
	
	public:
		Robot_model(string _name,int _model_number,Robot_part t) : name(_name), model_number(_model_number) {}
		double cost();
		double max_speed();
		double max_battery_life();
		

};
