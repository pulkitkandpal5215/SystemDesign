#include<vector>
#include<string>
#include "Seat.cpp"
using namespace std;

class Screen{
    private:
        int screenNumber;
        vector<Seat> seat;
    public:
    Screen();
    Screen(int screenNumber){
        this->screenNumber=screenNumber;
    }
    void addSeat(Seat seat){}
    void showSeats(){}
    Seat getSeat(string number){}
};