#include <iostream>
#include <string>

using namespace std;

class department{
    private:
        string departmentName;
    public:
        void get_departmentName(){
            cout << departmentName << endl;
        }
        void set_departmentName(const string &s){
            departmentName = s;
        }
};

//Inheritance happened here
class technology: public department{
    private:
        int budget;
        int spending = 0;
        string projectName;
    public:
        void get_projectName(){
            cout << projectName << endl;
        }
        void set_name(const string& name){
            projectName = name;
        }
        void set_budget(int n){
            budget = n;
        }
        void spend_money(int n){
            spending += n;
            budget -= n;
            cout << "total spending :" << spending << endl;
        }
        void get_money_left(){
            cout << "Money left : " << budget << endl;
        }

        void do_research(){
            // Doing something....
            // very complex logic
            spend_money(100);
            spend_money(200);
            spend_money(300);
        }
};
int main(int argc, char* argv[]){
    
    return 0;
}