using namespace std;

class Author{
private:
    string name;
    string email;
    char gender;
public:
    Author();
    Author(string, char, string);
    string getEmail();
    void setEmail(string);
    string getName();
    char getGender();
    string toString();

};
