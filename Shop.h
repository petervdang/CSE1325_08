#include "Robot_model.cpp"

class Shop
{
	private:
		vector<Robot_part> robot_parts;

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

};
