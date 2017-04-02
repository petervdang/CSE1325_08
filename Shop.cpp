#include "Shop.h"

void Shop :: create_new_robot_part(vector<Robot_part>& rob)
{
        string name;
        int model_number;
        string type;
        double cost;
        string description;
        string buffer;
	double power;
	double max_power;
	double power_available;
	double max_energy;
	int battery_compartments;
	int max_arms;

        cout << "Name?" << endl;
	getline(cin,name);
        cout << "Model Number?" << endl;
	getline(cin,buffer);
        model_number = atoi(buffer.c_str());
        cout << "Type?" << endl;
	getline(cin,type);
        cout << "Cost" << endl;
	getline(cin,buffer);
        cost = atof(buffer.c_str());
	cout << "Description" << endl;
        getline(cin,description);

	if (type == "head" || type == "Head")
	{
		cout << "What is the power?" << endl;
		getline(cin,buffer);
		power = atof(buffer.c_str());

		while (power < 0)
		{
			cout << "Not Valid" << endl;
                	cout << "What is the power?" << endl;
                	getline(cin,buffer);
        	        power = atof(buffer.c_str());
		}
	}
	
	if (type == "Locomotor" || type == "locomotor")
	{
		cout << "What is the Max Power?" << endl;
		getline(cin,buffer);
		max_power = atof(buffer.c_str());

		while (max_power < 0)
		{
			cout << "Not Valid" << endl;
                	cout << "What is the Max Power?" << endl;
        	        getline(cin,buffer);
	                max_power = atof(buffer.c_str());
		}
	}

	if (type == "Torso" || type == "torso")
	{
		cout << "How many Battery Compartments" << endl;
		getline(cin,buffer);
		battery_compartments = atoi(buffer.c_str());

		while (battery_compartments < 1 || battery_compartments > 3)
		{
			cout << "Not Valid Answer" << endl;
	                cout << "How many Battery Compartments" << endl;
        	        getline(cin,buffer);
                	battery_compartments = atoi(buffer.c_str());
		}

		cout << "How many Maximum Arms?" << endl;
		getline(cin,buffer);
		max_arms = atoi(buffer.c_str());

		while (max_arms < 0 || max_arms > 2)
		{
			cout << "Not Valid" << endl;
	                cout << "How many Maximum Arms?" << endl;
        	        getline(cin,buffer);
                	max_arms = atoi(buffer.c_str());
		}
	}

	if (type == "Battery" || type == "battery")
	{
		cout << "What is the Power Available?" << endl;
		getline(cin,buffer);
		power_available = atof(buffer.c_str());

		while (power_available < 0)
		{
			cout << "Not Valid" << endl;
                	cout << "What is the Power Available?" << endl;
        	        getline(cin,buffer);
	                power_available = atof(buffer.c_str());
		}

		cout << "What is the Maximum Energy?" << endl;
		getline(cin,buffer);
		max_power = atof(buffer.c_str());

		while (max_power < 0)
		{
			cout << "Not Valid" << endl;
	                cout << "What is the Maximum Energy?" << endl;
        	        getline(cin,buffer);
                	max_power = atof(buffer.c_str());

		}
	}

	if (type == "Arm" || type == "arm")
	{
		cout << "What is the Maximum Power?" << endl;
		getline(cin,buffer);
		max_power = atof(buffer.c_str());

		while (max_power < 0)
		{
			cout << "Not Valid" << endl;
                	cout << "What is the Maximum Power?" << endl;
        	        getline(cin,buffer);
	                max_power = atof(buffer.c_str());
		}
	}

        Robot_part robot_part(name,model_number,cost,description,type,power,max_power,power_available,max_energy,battery_compartments,max_arms);
        robot_parts.push_back(robot_part);

}



int Shop :: number_of_robot_parts()
{
        return robot_parts.size();
}


void Shop :: list_Robot_Parts(int input)
{
	int j = 1;
	
	for (int i = 0; i < robot_parts.size(); i++)
	{
		if (input == 1)
		{
                        if (robot_parts[i].getType() == "head" || robot_parts[i].getType() == "Head")
			{
				cout << j << ")" << endl;
				cout << "Type:         " << robot_parts[i].getType() << endl;
                                cout << "Name:         " << robot_parts[i].getName() << endl;
                                cout << "Model Number: " << robot_parts[i].getModel_number() << endl;
                                cout << "Cost:         " << robot_parts[i].getCost() << endl;
                                cout << "Description:  " << robot_parts[i].getDescription() << endl;
				cout << "Power:        " << robot_parts[i].getPower() << endl << endl;
				
				j++;
			}
		}

		if (input == 2)
		{
			if (robot_parts[i].getType() == "Locomotor" || robot_parts[i].getType() == "locomotor")
			{
                                cout << j << ")" << endl;
                                cout << "Type:         " << robot_parts[i].getType() << endl;
                                cout << "Name:         " << robot_parts[i].getName() << endl;
                                cout << "Model Number: " << robot_parts[i].getModel_number() << endl;
                                cout << "Cost:         " << robot_parts[i].getCost() << endl;
                                cout << "Description:  " << robot_parts[i].getDescription() << endl;
                                cout << "Max Power:    " << robot_parts[i].getMax_power() << endl << endl;

				j++;
			}
		}

		if (input == 3)
		{
			if (robot_parts[i].getType() == "Torso" || robot_parts[i].getType() == "torso")
			{
				cout << j << ")" << endl;
                                cout << "Type:                  " << robot_parts[i].getType() << endl;
                                cout << "Name:                  " << robot_parts[i].getName() << endl;
                                cout << "Model Number:          " << robot_parts[i].getModel_number() << endl;
                                cout << "Cost:                  " << robot_parts[i].getCost() << endl;
                                cout << "Description:           " << robot_parts[i].getDescription() << endl; 
				cout << "Battery Compartments:  " << robot_parts[i].getBattery_compartments() << endl;
				cout << "Maximum Arms:          " << robot_parts[i].getMax_arms() << endl << endl;

				j++;
			}
		}

		if (input == 4)
		{
			if (robot_parts[i].getType() == "Arm" || robot_parts[i].getType() == "arm")
			{
                                cout << "Type:         " << robot_parts[i].getType() << endl;
                                cout << "Name:         " << robot_parts[i].getName() << endl;
                                cout << "Model Number: " << robot_parts[i].getModel_number() << endl;
                                cout << "Cost:         " << robot_parts[i].getCost() << endl;
                                cout << "Description:  " << robot_parts[i].getDescription() << endl; 
                                cout << "Max Power:    " << robot_parts[i].getMax_power() << endl << endl;

				j++;
			}
		}

		if (input == 5)
		{
			if (robot_parts[i].getType() == "Battery" || robot_parts[i].getType() == "battery")
			{
                                cout << "Type:             " << robot_parts[i].getType() << endl;
                                cout << "Name:             " << robot_parts[i].getName() << endl;
                                cout << "Model Number:     " << robot_parts[i].getModel_number() << endl;
                                cout << "Cost:             " << robot_parts[i].getCost() << endl;
                                cout << "Description:      " << robot_parts[i].getDescription() << endl;
				cout << "Power Available:  " << robot_parts[i].getPower_available() << endl;
				cout << "Max Energy:       " << robot_parts[i].getBattery() << endl;

				j++;
			}
		}
	}
}












