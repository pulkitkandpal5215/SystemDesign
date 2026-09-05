#include<string>

using namespace std;

class Customer{
    private:
        string name;
        string phone;
    public:
        Customer(string name,string phone){
            this->name=name;
            this->phone=phone;
        }
        string getName(){}
        string getPhone(){}
};