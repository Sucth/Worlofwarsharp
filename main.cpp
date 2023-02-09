#include "iostream"
#include "string"
#include <vector>
#include <chrono>
#include <thread>
#include "Item.h"
#include "Character.h"
#include "Weapon.h"
#include "Armor.h"
#include "Talisman.h"

using namespace std;

int main() {

    string nameplayer;
    cout << "=== ENTER YOUR KNIGHT'S NAME ===" << endl;
    cin >> nameplayer;
    cout << "WELCOME " << nameplayer << " IN THIS RPG" <<endl;

    Character hero(nameplayer, 5, 2500, 10, 10, 10);
    Weapon DeathDance("Death Dance", 10, 1000, 10);
    Weapon DoranBlade("DoranBlade", 2, 200, 2);
    Armor WarmogArmor("WarmogArmor", 6, 1000, 10);
    Armor PeonArmor("PeonArmor", 1, 100, 1);
    Talisman DoranRing("DoranRing", 5, 1000, 10);
    Talisman GodTalisman("GodTalisman", 5, 2000, 50);

    while (true) {
        cout << endl << "=== Menu ===" << endl;
        cout << "1. View Inventory" << endl;
        cout << "2. View stats player" << endl;
        cout << "3. Buy Equipment" << endl;
        cout << "4. Equip Item" << endl;
        cout << "5. Go Fight !" << endl;
        cout << "6. CHEAT" << endl;
        cout << "7. History" << endl;
        cout << "8. Quit" << endl;
        cout << "Enter your choice : " << endl;
        int menuchoice;
        cin >> menuchoice;
        switch (menuchoice) {
            case 1:
                hero.printinventory();
                break;
            case 2:
                hero.printStats();
                break;

            case 3:
                cout << endl << "=== Menu ===" << endl;
                cout << "1. Death's Dance Price : 1000$ Required Level: 10 To equip" << endl;
                cout << "2. Base Sword Price : 200$ Required Level: 2 To equip" << endl;
                cout << "3. Armor of Death Price : 1000$ Required Level: 6 To equip" << endl;
                cout << "4. Peon Armor Price : 1000$ Required Level: 1 To equip" << endl;
                cout << "5. Talisman of Death Price : 1000$ Required Level: 5 To equip" << endl;
                cout << "6. GodTalisman Price : 2000$ Required Level: 5 To equip" << endl;
                cout << "7. Pass a level : 3000$" << endl;
                cout << "8. Back" << endl;
                int chooseweapon;
                cin >> chooseweapon;
                switch (chooseweapon) {
                    case 1:
                        hero.equip(&DeathDance);
                        break;
                    case 2:
                        hero.equip(&DoranBlade);
                        break;
                    case 3:
                        hero.equip(&WarmogArmor);
                        break;
                    case 4:
                        hero.equip(&PeonArmor);
                        break;
                    case 5:
                        hero.equip(&DoranRing);
                        break;
                    case 6:
                        hero.equip(&GodTalisman);
                        break;
                    case 7:
                        hero.setLevel(1);
                        hero.printStats();
                        break;
                    case 8:
                        break;
                }
                break;

            case 4:
                cout << endl << "=== Menu ===" << endl;
                cout << "1. Death's Dance Required Level: 10" << endl;
                cout << "2. Base Sword Price Required Level: 2" << endl;
                cout << "3. Armor of Death Price Required Level: 6" << endl;
                cout << "4. Peon Armor Price Required Level: 1" << endl;
                cout << "5. Talisman of Death Price Required Level: 5" << endl;
                cout << "6. GodTalisman Price Required Level: 5" << endl;
                cout << "7. Back" << endl;
                int chooseitem;
                cin >> chooseitem;
                switch (chooseitem) {
                    case 1:
                        hero.addstuff(&DeathDance);
                        hero.setForce(10);
                        break;
                    case 2:
                        hero.addstuff(&DoranBlade);
                        hero.setForce(2);
                        break;
                    case 3:
                        hero.addstuff(&WarmogArmor);
                        hero.setDefense(10);
                        break;
                    case 4:
                        hero.addstuff(&PeonArmor);
                        hero.setDefense(1);
                        break;
                    case 5:
                        hero.addstuff(&DoranRing);
                        hero.setHeal(10);
                        break;
                    case 6:
                        hero.equip(&GodTalisman);
                        hero.setHeal(50);
                        break;
                    case 7:
                        break;
                }
                break;

            case 5:
                cout << endl << "=== Menu ===" << endl;
                cout << "1. Drake LVL 1 Require power: 10, Defense: 10, Heal: 10" << endl;
                cout << "2. Drake LVL 2 Require power: 12, Defense: 10, Heal: 10" << endl;
                cout << "3. Drake LVL 3 Require power: 12, Defense: 11, Heal: 10" << endl;
                cout << "4. Drake LVL 4 Require power: 15, Defense: 11, Heal: 10" << endl;
                cout << "5. Drake LVL 5 Require power: 20, Defense: 11, Heal: 50" << endl;
                cout << "6. Back" << endl;
                int numdrake;
                cin >> numdrake;
                switch (numdrake) {
                    case 1:
                        hero.Fighting(1);
                        break;
                    case 2:
                        hero.Fighting(2);
                        break;
                    case 3:
                        hero.Fighting(3);
                        break;
                    case 4:
                        hero.Fighting(4);
                        break;
                    case 5:
                        hero.Fighting(5);
                        break;
                    case 6:
                        break;
                }

            case 6:
                hero.setMoney(1000000);
                hero.setLevelcheat(100);
                hero.equip(&DeathDance);
                hero.setForce(10);
                hero.equip(&DoranBlade);
                hero.setForce(2);
                hero.equip(&WarmogArmor);
                hero.setDefense(10);
                hero.equip(&DoranRing);
                hero.setHeal(10);
                break;

            case 7:
                cout << "You just spawned" << endl;
                hero.printinventory();
                hero.printStats();
                cout << endl;

                hero.equip(&DeathDance);
                hero.addItem(&DeathDance);
                hero.addstuff(&DeathDance);
                hero.equip(&DoranBlade);
                hero.addItem(&DoranBlade);
                hero.addstuff(&DoranBlade);
                hero.setForce(2);
                cout << endl;
                hero.printStats();
                cout << endl;
                cout << "Your character will fight a dragon LVL 1" << endl;
                hero.Fighting(1);
                hero.printStats();
                return 0;


            case 8:
                cout << "Bye " << nameplayer << " !!!" << endl;

                return 0;
                break;
        }
    }
    return 0;
}
