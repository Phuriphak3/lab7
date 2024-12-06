#include <iostream>  
#include <string>
using namespace std;
int main() {
    string name;
    string ID;
    
    
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: " ;
    getline(cin,name);
    
    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    cout << name << ": " ;
    cin >> ID;
    
    
    int gear = (ID[0] - '0') * 10 + (ID[1] - '0') - 12;
    cout << "Fahsai: I think you may be GEAR " << gear  ;
    cout << ". I have a free movie ticket for you." << endl;
    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;
    
    cin.ignore();
    string movie;
    string which;
    cout << name << ": " ;
    getline(cin,movie);
    
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << name << ": " ;
    getline(cin,which);
    
    string may;
    cout << "Fahsai: " << which << "....that is OK!!! I'm looking forward to watching " << movie << " with you." << endl;
    cout << name << ": " ;
    getline(cin,may);
    
    cout << "Fahsai: 555+ see you " << which << ". Bye Bye \\(^ ^)/";
    
    return 0;
}

    
    
    
    
    
    
    
    
    
    
    
    
    
    
