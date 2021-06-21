#include <iostream>
#include <cstdlib>
using namespace std;

class Creature
{
private:
    int strength;
    int hitpoints;
    string getSpecies();

public:
    Creature()
    {
        strength = 10;
        hitpoints = 10;
    }

    Creature(int newStrength, int newHit)
    {
        strength = newStrength;
        hitpoints = newHit;
    }
    int setStrength(int newStrength);
    int setHit(int newHit);
    int getStrength();
    int getHit();
    virtual int getDamage();
};

class Human : public Creature
{
public:
    Human();
    //Initializes to Creature() defaults
    Human(int newStrength, int newHit);
    virtual int getDamage();

private:
    string getSpecies();
};

class Elf : public Creature
{
public:
    Elf();
    //Initializes to Creature defaults
    Elf(int newStrength, int newHit);
    virtual int getDamage();

private:
    string getSpecies();
};

class Demon : public Creature
{
public:
    Demon();
    //Initializes to Creature defaults
    Demon(int newStrength, int newHit);
    virtual int getDamage();
    int getStrength(); //Accesses strength from base class

private:
    //empty
};

class Cyberdemon : public Demon
{
public:
    Cyberdemon();
    //Initializes to Demon default then to Creature default
    Cyberdemon(int newStrength, int newHit);
    virtual int getDamage();

private:
    string getSpecies();
};

class Balrog : public Demon
{
public:
    Balrog();
    //Initializes to Demon default then to Creature default
    Balrog(int newStrength, int newHit);
    virtual int getDamage();

private:
    string getSpecies();
};

void battleArena(Creature &c1, Creature &c2)
{
    while (1)
    {
        int damage1 = c1.getDamage();
        c2.setHit(c2.getHit() - damage1);
        cout << "Creature 2 has " << c2.getHit() << " hit points." << endl;

        int damage2 = c2.getDamage();
        c1.setHit(c1.getHit() - damage2);
        cout << "Creature 1 has " << c1.getHit() << " hit points." << endl;

        if (c1.getHit() <= 0 && c2.getHit() <= 0)
        {
            cout << "The battle ends in a tie..." << endl;
            break;
        }
        else if (c1.getHit() < 0 && c2.getHit() >= 0)
        {
            cout << "Creature 2 wins!" << endl;
            break;
        }
        else if (c1.getHit() >= 0 && c2.getHit() < 0)
        {
            cout << "Creature 1 wins!" << endl;
            break;
        }
    }
}

int main()
{
    Human human1(30, 10);
    human1.getDamage();
    cout << endl;
    Elf elf1;
    elf1.getDamage();
    cout << endl;
    Balrog balrog1(50, 50);
    ;
    balrog1.getDamage();
    cout << endl;
    Cyberdemon cdemon(30, 40);
    cdemon.getDamage();
    cout << endl;
    Elf elf2(50, 50);
    Balrog balrog2(50, 50);
    cout << endl;
    battleArena(elf2, balrog2);
}
int Creature::setStrength(int newStrength)
{
    strength = newStrength;
}

int Creature::setHit(int newHit)
{
    hitpoints = newHit;
}

int Creature::getStrength()
{
    return strength;
}

int Creature::getHit()
{
    return hitpoints;
}

int Creature::getDamage()
{
    int damage;
    // All creatures inflict damage, which is a
    // random number up to their strength

    damage = (rand() % strength) + 1;
    return damage;
}

Human::Human() : Creature()
{
    //empty
}

Human::Human(int newStrength, int newHit) : Creature(newStrength, newHit)
{
    //empty
}

int Human::getDamage()
{
    int damage = Creature::getDamage();
    cout << getSpecies() << " attacks for " << damage << " points!\n";
    return damage;
}

string Human::getSpecies()
{
    return "Human";
}

Elf::Elf() : Creature()
{
    //empty
}

Elf::Elf(int newStrength, int newHit) : Creature(newStrength, newHit)
{
    //empty
}

string Elf::getSpecies()
{
    return "Elf";
}

int Elf::getDamage()
{
    int damage = Creature::getDamage();
    cout << getSpecies() << " attacks for " << damage << " points!" << endl;

    if ((rand() % 10) == 0)
    {
        cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
        damage = damage * 2;
    }
    return damage;
}

Demon::Demon() : Creature()
{
    //empty
}

Demon::Demon(int newStrength, int newHit) : Creature(newStrength, newHit)
{
    //empty
}

int Demon::getDamage()
{
    int damage = Creature::getDamage();
    cout << " attacks for " << damage << " points!" << endl;

    if ((rand() % 100) < 5)
    {
        damage = damage + 50;
        cout << "Demonic attack inflicts 50"
             << " additional damage points!" << endl;
    }
    return damage;
}

int Demon::getStrength()
{
    return Creature::getStrength();
}

Cyberdemon::Cyberdemon() : Demon()
{
    //empty
}

Cyberdemon::Cyberdemon(int newStrength, int newHit) : Demon(newStrength, newHit)
{
    //empty
}

string Cyberdemon::getSpecies()
{
    return "Cyberdemon";
}

int Cyberdemon::getDamage()
{
    cout << getSpecies();
    return Demon::getDamage();
}

Balrog::Balrog() : Demon()
{
    //empty
}

Balrog::Balrog(int newStrength, int newHit) : Demon(newStrength, newHit)
{
    //empty
}

string Balrog::getSpecies()
{
    return "Balrog";
}

int Balrog::getDamage()
{
    cout << getSpecies();
    Demon::getDamage();
    int damage2 = (rand() % Demon::getStrength()) + 1;
    cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
    return damage2;
}