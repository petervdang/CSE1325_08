#include "Order.cpp"
//#include "Robot_model.cpp"

class Shop
{
	private:
		vector<Robot_part> robot_parts;
		vector<Robot_model> robot_model;

        public:
                void create_new_robot_part(vector<Robot_part>& rob);
                void create_new_robot_model();
                void create_new_customer();
                void create_new_sales_associate();
                void create_new_order();
                void save(string filename);
                void open(string filename);
                int number_of_robot_parts();
                void list_Robot_Parts(int input);
                int headCount();
                int locomotorCount();
                int torsoCount();
                int batteryCount();
                int armCount();

};
