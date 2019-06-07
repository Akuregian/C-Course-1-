#include <iostream>
#include <vector>
#include <string>

/*
    program inputs x amount of customers and their total purchase price, 
    then computes the best customer who had the highest purchase price
*/

using namespace std;

void best_customer_name(vector<double> sales_price, vector<string> customers)
{
    int index = 0;
    //find the largest value in the vector
    double largest_value = sales_price[0];
    for(int i = 0; i < sales_price.size(); i++){
        if(sales_price[i] > largest_value){
            largest_value = sales_price[i];
            index = i;
        }
    }
    cout << endl;
    cout << "The Top Customer was, " << customers[index] << " with the Top sale of: " << sales_price[index] << endl;
}

int main()
{
    vector<double> sales_price;
    vector<string> customers_name;
    int sentinel = 0;
    bool loop = false;

    //user input for sale price, then name
    double price;
    string name;
    while(!loop) {
        cout << "Enter Customers Sale Price: ";
        cin >> price;
        if(price == sentinel){
            break;
        }
        sales_price.push_back(price);
        cout << endl << "Enter Customers Name: ";
        cin >> name;
        customers_name.push_back(name);
    }

    // print out top sales customer
    best_customer_name(sales_price, customers_name);
    
}