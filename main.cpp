#include <iostream>

#include "array_list.hpp"
#include "linked_list.hpp"

using namespace itis;

int main(int argc, char **argv) {
    std::cout << "Hello, stranger!" << std::endl;


    auto linked_list = new LinkedList();
    linked_list->Add(Element::CHERRY_PIE);
    //linked_list->Add(Element::SECRET_BOX);
    //linked_list->Add(Element::DRAGON_BALL);
    //linked_list->Add(Element::GRAVITY_GUN);
    //linked_list->Add(Element::BEAUTIFUL_FLOWERS);
    //linked_list->Insert(3, Element::BEAUTIFUL_FLOWERS);

    if(linked_list->IndexOf(Element::CHERRY_PIE) == 0){
        std::cout << "Yes" << "\n";
    }
    else{
        std::cout << "No" << "\n";
    }

   // std::cout << linked_list->IndexOf(Element::SECRET_BOX) << "\n";
    //std::cout << linked_list->IndexOf(Element::DRAGON_BALL) << "\n";
    //std::cout << linked_list->IndexOf(Element::GRAVITY_GUN) << "\n";
    //std::cout << linked_list->IndexOf(Element::BEAUTIFUL_FLOWERS) << "\n";

    //std::cout << linked_list->GetSize() << "\n";
    //std::cout << linked_list->IndexOf(Element::SECRET_BOX) << "\n";
    //std::cout << linked_list->IndexOf(Element::DRAGON_BALL) << "\n";
    //std::cout << linked_list->IndexOf(Element::GRAVITY_GUN) << "\n";
    //std::cout << linked_list->IndexOf(Element::BEAUTIFUL_FLOWERS) << "\n";

  return 0;
}