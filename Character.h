#ifndef Character_h
#define Character_h
using namespace std;

class Character {
private:
    string m_name;
    int m_power;
    int m_defense;
    int m_heal;
    int m_level;
    int m_money;
    vector<Item *> m_inventaire;
    Item * m_Stuff[5];


public:
    Character(const string &name, int level, int money, int power, int defense, int heal)
            : m_name(name), m_power(power), m_defense(defense), m_heal(heal), m_level(level), m_money(money) {}

    void addItem(Item *item) {
        m_inventaire.push_back(item);
    }



    void equip(Item *item) {


        if (item->getMoney() > m_money) {
            cout << "The character does not have enough money to buy this item." << endl;
            return;
        }

        if (item->isBought() == true) {
            cout << "You already has this item." << endl;
            return;
        }

        item->setBought(true);
        m_money -= item->getMoney();
        item->equip();
        addItem(item);
    }

    void addstuff(Item *item){
        if (item->getLevel() > m_level) {
            cout << "The character does not have the required level to equip this item." << endl;
            return;
        }
        if (item->isBought() == false){
            cout << "You do not buy this item." << endl;
            return;
        }
        cout << "Item Equip." << endl;

        for (int i = 0; i < 3; i++) {
            if (!m_Stuff[i]) {
                m_Stuff[i] = item;
                break;
            }
        }
    }

    void printstuff(){
        cout << "Stuff :" << endl << endl;
        for (int i = 0; i < 3; i++) {
            if (m_Stuff[i]) {
                cout << i + 1 << ". " << m_Stuff[i]->getName() << ", level : " << m_Stuff[i]->getLevel() << ", price : " << m_Stuff[i]->getMoney() << endl;
            }
        }
        cout << endl;
    }

    void printinventory() {
        cout << "Inventory :" << endl << endl;
        int i = 1;
        for (auto item: m_inventaire) {
            cout << i++ << ". " << item->getName() << ", level : " << item->getLevel() << ", price : " << item->getMoney() << endl;
        }
        if (m_inventaire.size() == 0) {
            cout << "Empty Inventory" << endl << endl;
        }
    }

    void printStats() {
        cout <<"Character Stats :" <<endl;
        cout << "Name : " << m_name << endl;
        cout << "Power : " << m_power << endl;
        cout << "Defense : " << m_defense << endl;
        cout << "Heal : " << m_heal << endl;
        cout << "Level : " << m_level << endl;
        cout << "Gold : " << m_money << endl;
    }

    void setForce(int power) { m_power += power; }

    void setDefense(int defense) { m_defense += defense; }

    void setHeal(int heal) { m_heal += heal; }

    void unsetForce(int power) { m_power -= power; }

    void unsetDefense(int defense) { m_defense -= defense; }

    void unsetHeal(int heal) { m_heal -= heal; }

    void setMoney (int Gold) { m_money += Gold; }

    void setLevel(int Level) {
        if (m_money >= 3000) {
            m_level += Level;
            m_money -= 3000;
            cout <<"You have just passed a level" << endl << endl;
        } else{
            cout << "You do not have enough money" << endl << endl;
        }
    }

    void setLevelcheat(int Level) {m_level += Level;}

    void Fighting(int choosedrake) {
        if (choosedrake == 1) {
            cout << "Fighting Boss LVL 1 ..." << endl;
            if (m_power >= 10 && m_defense >= 10 && m_heal >= 10) {

                int duration = 50 - m_power - m_defense -m_heal;
                if (duration <= 0) {
                    duration = 1;
                }
                this_thread::sleep_for(chrono::seconds(duration));
                cout << "Boss Killed!" << endl;
                cout << "+100 Gold!" << endl;
                m_money += 100;
                cout << "Gold :" << m_money << endl;
                return;
            }
            cout << "The boss is too high level you will die. COME BACK !!!" << endl;
        }
        if (choosedrake == 2) {
            cout << "Fighting Boss LVL 2 ..." << endl;
            if (m_power >= 12 && m_defense >= 10 && m_heal >= 10) {

                int duration = 80 - m_power - m_defense -m_heal;
                if (duration <= 0) {
                    duration = 1;
                }
                this_thread::sleep_for(chrono::seconds(duration));
                cout << "Boss Killed!" << endl;
                cout << "+300 Gold!" << endl;
                m_money += 200;
                cout << "Gold :" << m_money << endl;
                return;
            }
            cout << "The boss is too high level you will die. COME BACK !!!" << endl;
        }
        if (choosedrake == 3) {
            cout << "Fighting Boss LVL 3 ..." << endl;
            if (m_power >= 12 && m_defense >= 11 && m_heal >= 10) {

                int duration = 100 - m_power - m_defense -m_heal;
                if (duration <= 0) {
                    duration = 1;
                }
                this_thread::sleep_for(chrono::seconds(duration));
                cout << "Boss Killed!" << endl;
                cout << "+500 Gold!" << endl;
                m_money += 300;
                cout << "Gold :" << m_money << endl;
                return;
            }
            cout << "The boss is too high level you will die. COME BACK !!!" << endl;
        }
        if (choosedrake == 4) {
            cout << "Fighting Boss LVL 4 ..." << endl;
            if (m_power >= 15 && m_defense >= 11 && m_heal >= 10) {

                int duration = 100 - m_power - m_defense -m_heal;
                if (duration <= 0) {
                    duration = 1;
                }
                this_thread::sleep_for(chrono::seconds(duration));
                cout << "Boss Killed!" << endl;
                cout << "+500 Gold!" << endl;
                m_money += 500;
                cout << "Gold :" << m_money << endl;
                return;
            }
            cout << "The boss is too high level you will die. COME BACK !!!" << endl;
        }
        if (choosedrake == 5) {
            cout << "Fighting Boss LVL 5 ..." << endl;
            if (m_power >= 20 && m_defense >= 11 && m_heal >= 50) {

                int duration = 100 - m_power - m_defense -m_heal;
                if (duration <= 0) {
                    duration = 1;
                }
                this_thread::sleep_for(chrono::seconds(duration));
                cout << "Boss Killed!" << endl;
                cout << "+500 Gold!" << endl;
                m_money += 1000;
                cout << "Gold :" << m_money << endl;
                return;
            }
            cout << "The boss is too high level you will die. COME BACK !!!" << endl;
        }
    }

};


#endif /* Character_h */
