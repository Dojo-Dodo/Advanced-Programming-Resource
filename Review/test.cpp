#include <iostream>
#include <string>

using namespace std;

class technology{
    private:
        int budget = 0;
        int spending = 0;
        string projectName;

        void spend_money(int n){
            spending += n;
            budget -= n;
            cout << "total spending :" << spending << endl;
        }

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
        
        void get_money_left(){
            cout << "Money left :" << budget << endl;
        }
};
int main(int argc, char* argv[]){
    technology *p = new technology;
    (*p).set_name("Project 1");
    p->set_name("Project 1");

    p->get_projectName();
    return 0;
}