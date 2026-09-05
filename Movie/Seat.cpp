#include<string>
using namespace std;

class Seat{
    private:
        string number;
        string type;
        double price;
    public:
        Seat(string number,string type){
            this->number=number;
            this->type=type;
        }
        string getNumber(){}
        string gettype(){}
        double getPrice(){}
};