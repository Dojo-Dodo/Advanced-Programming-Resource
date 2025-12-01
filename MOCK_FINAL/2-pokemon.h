
class Pokemon{
    private:
        string Name;
        int Health;
        char Type;
        char Gender;
        int Level;
        int Exp;
        Pokemon* nextForm;
    
    public:
        Pokemon(string name = "MISSING",int h = 10,char t = 'u',char g = 'u',char l = 1,
                 int e = 0);

        void printStats();
        void set_nextForm(Pokemon*);
        Pokemon* evolve();

};

Pokemon::Pokemon(string n, int h,char t, char g, char l,
                 int e){
    this->Name = n;
    this->Health = h;
    this->Type = t;
    this->Gender = g;
    this->Level = l;
    this->Exp = e;
    this->nextForm = nullptr;                  
}

void Pokemon::set_nextForm(Pokemon* x){
    this->nextForm = x;
}

void Pokemon::printStats(){
    cout << "========= STATS =========" << endl;
    cout << "Name: "<< Name << endl;
    cout << "Type: "<< Type << endl;
    cout << "Gender: " <<  Gender << endl;
    cout << "Level: " <<  Level << endl;
    cout << "Exp: " << Exp << endl;
}

Pokemon* Pokemon::evolve() {
    // If level is high enough and next form exists, return next form
    if (Level >= 16 && Level < 36 && nextForm != nullptr) {
        return nextForm;
    }
    else if (Level >= 36 && nextForm != nullptr) {
        return nextForm;
    }
    // Otherwise, stay as current pokemon
    return this;
}