
#include<string>
#include "Customer.cpp";
#include "Booking.cpp";

using namespace std;

class BookingService{
    public:
        void bookTicket(Customer customer,Show show){}
        bool cancelTicket(){}
        void processPayment(Booking* booking){}
};