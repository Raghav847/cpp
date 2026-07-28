#include <iostream>
using namespace std;

int main()
{   
    //std::string
    string s1 = "Hello"; 
    string s2 = "World";

    cout << s1.size() << endl;
    cout << s2.length() << endl;

    s1.append("there");
    cout << s1 << endl;

    string s3 = "HelloThere";
    if (s1.compare(s3) == 0)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    
    string sub = s1.substr(0, 5);
    cout << sub << endl;

    return 0;
}