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
				cout << "Max Energy:       " << robot_parts[i].getMax_energy() << endl;

				j++;
			}
		}
	}


}



void Shop :: create_new_robot_model()
{
	int j = 1;
	int k = 1;

	if (headCount() == 0 || locomotorCount() == 0 || torsoCount() == 0 || armCount() == 0 || batteryCount() == 0)
	{
		cout << "Not enough Components" << endl << endl;
		return;
	}

	cout << "What is the Model Name:  ";
	string name;
	getline(cin,name);

	cout << "What is the Model Number:  ";
	int model_number;
	cin >> model_number;
	cin.ignore();

	cout << "Select a Torso" << endl;

        for (int i = 0; i < robot_parts.size(); i++)
        {
                if (robot_parts[i].getType() == "Torso" || robot_parts[i].getType() == "torso")
                {
	                cout << j << ")" << endl;
                        cout << "Type:                  " << robot_parts[i].getType() << endl;
                        cout << "Name:                  " << robot_parts[i].getName() << endl;
                        cout << "Model Number:          " << robot_parts[i].getModel_number() << endl;
                        cout << "Cost:                  " << robot_parts[i].getCost() << endl;
                        cout << "Description:           " << robot_parts[i].getDescription() << endl;
			cout << "Max Arms:              " << robot_parts[i].getMax_arms() << endl;
                        cout << "Battery_compartments:  " << robot_parts[i].getMax_power() << endl << endl;

                        j++;
                }
        }

	int torso;		// torso Number
	cout << "Input:  ";
	cin >> torso;
	cin.ignore();
	cout << endl;

        for (int i = 0; i < robot_parts.size(); i++)
        {
                if (robot_parts[i].getType() == "Torso" || robot_parts[i].getType() == "torso")
                {
                        if (k == torso)
                        {
                                torso = i;
                                break;
                        }
                        else
                        {
                                k++;
                        }
                }
        }




        cout << "Select a Head" << endl;

        for (int i = 0; i < robot_parts.size(); i++)
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

        

        int head;              // head Number
        cout << "Input:  ";
        cin >> head;
        cin.ignore();
        cout << endl;


        k = 1;
        for (int i = 0; i < robot_parts.size(); i++)
        {
                if (robot_parts[i].getType() == "Head" || robot_parts[i].getType() == "head")
                {
                        if (k == head)
                        {
                                head = i;
                                break;
                        }
                        else
                        {
                                k++;
                        }
                }
        }



        cout << "Select a Locomotor" << endl;

        
        for (int i = 0; i < robot_parts.size(); i++)
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


        int locomotor;              // locomotor Number
        cout << "Input:  ";
        cin >> locomotor;
        cin.ignore();
        cout << endl;


        k = 1;
        for (int i = 0; i < robot_parts.size(); i++)
        {
                if (robot_parts[i].getType() == "Locomotor" || robot_parts[i].getType() == "locomotor")
                {
                        if (k == locomotor)
                        {
                                locomotor = i;
                                break;
                        }
                        else
                        {
                                k++;
                        }
                }
        }


        cout << "Select an Arm" << endl;

        
        for (int i = 0; i < robot_parts.size(); i++)
        {
                if (robot_parts[i].getType() == "arm" || robot_parts[i].getType() == "Arm")
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


        int arm;              // arm Number
        cout << "Input:  ";
        cin >> arm;
        cin.ignore();
        cout << endl;


        k = 1;
        for (int i = 0; i < robot_parts.size(); i++)
        {
                if (robot_parts[i].getType() == "Arm" || robot_parts[i].getType() == "arm")
                {
                        if (k == arm)
                        {
                                arm = i;
                                break;
                        }
                        else
                        {
                                k++;
                        }
                }
        }


        cout << "Select an Battery" << endl;

        
        for (int i = 0; i < robot_parts.size(); i++)
        {
                if (robot_parts[i].getType() == "Battery" || robot_parts[i].getType() == "battery")
                {
                        cout << j << ")" << endl;
                        cout << "Type:            " << robot_parts[i].getType() << endl;
                        cout << "Name:            " << robot_parts[i].getName() << endl;
                        cout << "Model Number:    " << robot_parts[i].getModel_number() << endl;
                        cout << "Cost:            " << robot_parts[i].getCost() << endl;
                        cout << "Description:     " << robot_parts[i].getDescription() << endl;
			cout << "Max Energy:      " << robot_parts[i].getMax_energy() << endl;
                        cout << "Power Available: " << robot_parts[i].getPower() << endl << endl;

                        j++;
                }
        }

        int battery;              // battery Number
        cout << "Input:  ";
        cin >> battery;
        cin.ignore();
        cout << endl;

	k = 1;
	for (int i = 0; i < robot_parts.size(); i++)
	{
		if (robot_parts[i].getType() == "Battery" || robot_parts[i].getType() == "battery")
		{
			if (k == battery)
			{
				battery = i;
				break;
			}
			else
			{
				k++;
			}
		}
	}

	Robot_part t = robot_parts[torso];
	Robot_part h = robot_parts[head];
	Robot_part l = robot_parts[locomotor];
	Robot_part a = robot_parts[arm];
	Robot_part b = robot_parts[battery];

	Robot_model robot_model(name,model_number,t);

	
}


int Shop :: headCount()
{
	int count = 0;

	for (int i = 0; i << robot_parts.size(); i++)
	{
		if (robot_parts[i].getType() == "head" || robot_parts[i].getType() == "Head")
		{
			count++;
		}
	}
	
	return count;
}

int Shop :: locomotorCount()
{
	int count = 0;
	
	for (int i = 0; i << robot_parts.size(); i++)
        {
                if (robot_parts[i].getType() == "locomotor" || robot_parts[i].getType() == "Locomotor")
                {
                        count++;
                }
        }

        return count;

}


int Shop :: torsoCount()
{
        int count = 0;
        
        for (int i = 0; i << robot_parts.size(); i++)
        {
                if (robot_parts[i].getType() == "torso" || robot_parts[i].getType() == "Torso")
                {
                        count++;
                }
        }

        return count;

}

int Shop :: armCount()
{
        int count = 0;
        
        for (int i = 0; i << robot_parts.size(); i++)
        {
                if (robot_parts[i].getType() == "arm" || robot_parts[i].getType() == "Arm")
                {
                        count++;
                }
        }

        return count;

}

int Shop :: batteryCount()
{
        int count = 0;
        
        for (int i = 0; i << robot_parts.size(); i++)
        {
                if (robot_parts[i].getType() == "Battery" || robot_parts[i].getType() == "battery")
                {
                        count++;
                }
        }

        return count;

}







