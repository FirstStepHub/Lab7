#include <iostream>
#include <string>
using namespace std;

string name ;
string movie ;
string freeDay ;
string string1 ;
int id ;
int calGear = 12 ;
int gear ;

int main()
{
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << "\n" ;
    cout << "?????: " ;
    getline(cin, name) ;
    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << "\n" ;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << "\n" ;
    cout << name << ": " ;
    cin >> id ;
    cin.ignore();

    while (id >= 100) {
        id = id / 10 ;
    }

    gear = id - calGear ;

    cout << "Fahsai: I think you may be GEAR " << gear << ". I have a free movie ticket for you." << "\n" ;
    cout << "Fahsai: Let's go to the cinema together!!!" << "\n" ;
    cout << "Fahsai: What movie do you want to watch?" << "\n" ;
    cout << name << ": " ;
    getline(cin, movie) ; 
    
    cout << "Fahsai: So....which day are you free to go with me?" << "\n" ;
    cout << name << ": " ;
    getline(cin, freeDay) ; 
    cout << "Fahsai: " << freeDay << "....that is OK!!! I'm looking forward to watching " << movie << " with you." << "\n" ;
    cout << name << ": " ;
    getline(cin, string1) ; 
    cout << "Fahsai: 555+ see you " << freeDay << ". Bye Bye \\(^ ^)/" ;

}