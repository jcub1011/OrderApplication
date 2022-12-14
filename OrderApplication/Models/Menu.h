//
// Created by Luis Cabrera on 11/9/22.
//

#ifndef SCHOOLPROJECT_MENU_H
#define SCHOOLPROJECT_MENU_H

#include <unordered_map>
#include <string>
#include <iostream>
#include "CommonFunc.h"
#include "Item.h"
#include <vector>
#include <iomanip>

class Menu {
protected:
    std::vector<Item> _item_list;
public:
    explicit Menu() = default;

    /**
     * Prints the menu of the given restaurant.
     */
    void print_menu() {
        Print("+-----Menu-----+");
        for (auto item : _item_list) {
            std::string temp = "\n| " + item.get_name()
                    + " : $";
            Print(temp);
            std::cout << item.get_price();
        }
        Print("\n");
        Print("+--------------+\n");
    }
};


#endif //SCHOOLPROJECT_MENU_H
