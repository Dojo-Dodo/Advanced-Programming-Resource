
class Pokemon{
    private:
        string Name;
        int Health;
        char Type;
        int Level;
        Pokemon* nextForm;
    
    public:
        Pokemon(string name = "MISSING",int h = 0,char t = 'u',char l = 1,
                Pokemon* next = nullptr);

        void printStats();
        void set_nextForm(Pokemon*);
        void LevelUp(int );
        Pokemon* evolve();

};

Pokemon::Pokemon(string n, int h,char t, char l, Pokemon* next){
    this->Name = n;
    this->Health = h;
    this->Type = t;
    this->Level = l;
    this->nextForm = next;
}

void Pokemon::set_nextForm(Pokemon* x){
    this->nextForm = x;
}
void Pokemon::LevelUp(int x){
    Level += x;
    cout << Name << " grew to LV. " << Level << endl;
}

void Pokemon::printStats(){
    cout << "========= STATS =========" << endl;
    cout << "Name: "<< Name << endl;
    cout << "Type: "<< Type << endl;
    cout << "Level: " <<  Level << endl;
}

void evolve(){
    if(level >= nextForm->level){
        cout << Name << " has evolved to " << nextForm->Name << endl;
        
    }
    else{
        cout << "Need LV. "<< Level << " to evolve!" << endl;
    }
}


Pokemon* Pokemon::createCharmander(){
    Pokemon p1("Charmander",'f',25,1);
    Pokemon p2("Charmeleo",'f',75,16);
    Pokemon p3("Charizard",'f',150,36);
    
    p1.set_nextForm(p2);
    p2.set_nextForm(p3);

    Pokemon* t = p1;
    return t;
}

