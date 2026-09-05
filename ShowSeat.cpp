#include<string>
using namespace std;

class ShowSeats{
    private:
    Seat* seats;
    string status;
    
    public:
    ShowSeats(Seat* seats){
        this->seats=seats;
    }
    bool isAvailable(){}
    void book(){}
    void release(){}
    string getStaus(){}
};