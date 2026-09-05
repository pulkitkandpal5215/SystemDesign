
#include<string>
#include<vector>
#include "Show.cpp";
#include "ShowSeat.cpp";

using namespace std;

class Booking{
    private:
        static int nextBookingId;
        string bookingId;
        Show* show;
        vector<ShowSeats*>seats;
        double totalAmount;
        string status;
    public:
        Booking(Show* show){
            this->show=show;
        }
        void addSeats(){}
        void setTotalAmount(){}
        void confirm(){}
        void cancel(){}
        string getBookingID(){}
        double getBookingAmount(){}

};