# include <iostream>
using namespace std;
int main()
{

    // Functional initialization
    int apple_count(200);
    int apple_countI{4430};

    //information lost. less safe than brace initializers
    int narrowing_conversion_function(34.09);

    cout << apple_count << "\n" << apple_countI << "\n" <<
     narrowing_conversion_function<< endl;


string myFirstName = "Elijah";
string myLastName = "Boahen";
int age = 29;
    cout << "Hello " << myFirstName<<"." << " You're " << age <<" years old."<<endl;
   
   
    cout << "       /|" << endl;
    cout << "      / |" << endl;
    cout << "     /  | " << endl;
    cout << "    /   |" <<endl;
    cout << "   /    |" <<endl;
    cout << "  /     |" <<endl;
    cout << " /      |" <<endl;
    cout << "/_______|" <<endl;


    return 0;
   
}

