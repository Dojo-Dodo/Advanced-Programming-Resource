#include <iostream>

using namespace std;
class RobloxPlayer {
    private:
        int userID;
        string userName;
        string nickName;
        int robux;
        int joinedYear;

    public:
        RobloxPlayer(int userID, string userName, string nickName, int robux, int joinedYear) {
            this->userID = userID;
            this->userName = userName;
            this->nickName = nickName;
            this->robux = robux;
            this->joinedYear = joinedYear;
        }
        void buyRobux(int amount){
            this->robux += amount;
            cout << "Purchased " << amount << " Robux. Total Robux: " << this->robux << endl;
        }
        void useRobux(int amount){
            if(amount <= this->robux){
                this->robux -= amount;
                cout << "Used " << amount << " Robux. Remaining Robux: " << this->robux << endl;
            } else {
                cout << "Insufficient Robux. Total Robux: " << this->robux << endl;
            }
        }
        void displayInfo(){
            cout << "----- Roblox Player Info -----" << endl;
            cout << "UserID: " << this->userID << endl;
            cout << "UserName: " << this->userName << endl;
            cout << "NickName: " << this->nickName << endl;
            cout << "Robux: " << this->robux << endl;
            cout << "Joined Year: " << this->joinedYear << endl;
            cout << "------------------------------" << endl;
        }
};

int main(int argc, char* argv[]){
    RobloxPlayer* player1 = new RobloxPlayer(101, "PlayerOne", "P1", 500, 2020);
    player1->displayInfo();
    player1->buyRobux(200);
    player1->useRobux(100);
    player1->useRobux(700);
    delete player1;
    return 0;
}