#include<string>
#include "Screen.cpp"
#include "Movie.cpp"
using namespace std;

class Show{
    private:
        Movie movie;
        Screen screen;
        string startTime;
        vector<ShowSeats> showSeats;
    public:  
        Show(Movie movie,Screen screen,string startTime){
            this->movie=movie;
            this->screen=screen;
            this->startTime=startTime;

        }
        void showSeatsLayout(){}
        bool isSeatsAvailable(string seatNumber){}
        void bookSeat(string seatNumber){}
        void releaseSeat(string seatNumber){}
};