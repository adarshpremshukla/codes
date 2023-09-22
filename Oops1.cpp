#include<iostream>
using namespace std;

// class hero{    //create a class
//     int health;
// };

// int main()
// {
//     hero h1;    //create a object
//     cout << "Size is " <<sizeof(h1) << endl;
// }


// class hero{
//     public:
//     int health;
//     char level;
// };

// int main()
// {
//     hero h1;
//     h1.health = 70;
//     h1.level = 'A';

//     cout << "Health is " << h1.health << endl;
//     cout << "Level is " << h1.level << endl;
//     cout << "Size is " <<sizeof(h1) << endl;
// }

/*

class hero{
    private:
    int health;
    char level;

    public:
    //Getter

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }
    //setter

    void setHealth(int h){
        health = h;
    }

    void setLevel(char l){
        level = l;
    }
};

int main()
{
    //static allocation
    hero h1;
    h1.setHealth(70);
    h1.setLevel('A');

    cout << "Health is " << h1.getHealth() << endl;
    cout << "Level is " << h1.getLevel() << endl;

    cout << endl;

    //dynammic allocation
    hero *b = new hero;
    (*b).setHealth(90);
    (*b).setLevel('B');

    // b->setHealth(80);
    // b->setLevel('C');

    cout << "Health is " << (*b).getHealth() << endl;
    cout << "Level is " << (*b).getLevel() << endl;

    cout << endl;

//     cout << "Health is " << b->getHealth() << endl;
//     cout << "Level is " << b->getLevel() << endl;
}
*/

// class hero{
//     public:
//     int health;
//     char level;

//     hero(){                                                 //default constructoe
//         cout << " constructor is called " << endl;
//     }
// };

// int main()
// {
//     hero h1;

//     hero *b = new hero;
// }



// class hero{
//     public:
//     int health;
//     char level;

//     hero(int health){                                       //parametiezed constructor
//         this->health = health;
//         cout << " this " << this->health << endl;
//     }
// };

// int main()
// {
//     hero h1(10);

//     cout << "Address of h1 is " << &h1 << endl; 

//     hero *b = new hero(10);
// }



// class hero{
//     public:
//     int health;
//     char level;

//     hero(int health, char level){
//         this->health = health;
//         this->level = level;
//     }

//     void print(){
//         cout << " This " << this->health << endl;
//         cout << " This " << this->level << endl;
    
//     }
// };

// int main(){
//     hero h1(70,'C');
//     h1.print();

//     //copy constructor
//     hero h2(h1);
//     h2.print();
// }




// class hero{
// public:
//     int health;

//     ~hero(){
//         cout << "Destructor is called " << endl;
//     }
// };

// int main()
// {
//     hero h1;   //automatically called
    
//     hero *b = new hero();
//     delete b;   //manually called
// }



// class hero{    
//     public:
//     static int timeToComplete;               //static keyword
// };

// int hero :: timeToComplete = 5;

// int main()
// {
//     cout << hero :: timeToComplete << endl;
// }



//static function can access only static member

class hero{    
    public:
    static int timeToComplete;               //static keyword

    static int rishi(){
        return timeToComplete;               //static function
        // return health;                       //gives an error
    }
};

int hero :: timeToComplete = 5;

int main()
{
    cout << hero :: rishi() << endl;
}