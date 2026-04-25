#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class MovieTicket {
    unordered_map<int, unordered_set<int>> booked;
public:
   string BOOK(int X, int Y) {
     if(booked[Y].size() >= 100) return "false";
     if(booked[Y].count(X)) return "false";
        booked[Y].insert(X);
      return "true";
    }
    string CANCEL(int X, int Y) {
        if(!booked[Y].count(X)) return "false";
        booked[Y].erase(X);
        return "true";      }
    string IS_BOOKED(int X, int Y) {
        if(booked[Y].count(X)) return "true";
        return "false";
    }
    int AVAILABLE_TICKETS(int Y) {
        return 100-booked[Y].size();
    }
};
int main() {
    int Q;
    cin>>Q;
    cin.ignore();
  MovieTicket m;
    string query;
    while(Q--) {
        string p;
        cin>>p;
     if(p=="BOOK") {
            int x, y;
            cin>>x>>y;
       cout<<m.BOOK(x,y)<<endl;
     }
       else if(p=="CANCEL") {
            int x,y;
            cin>>x>>y;
            cout<<m.CANCEL(x,y)<<endl;
        }
        else if(p=="IS_BOOKED") 
     {       int x,y;
            cin>>x>>y;
            cout<<m.IS_BOOKED(x,y)<<endl;}
        else if(p=="AVAILABLE_TICKETS") {
            int y;
            cin>>y;
            cout<<m.AVAILABLE_TICKETS(y)<<endl;  }
    }
    return 0;
}
