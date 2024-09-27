#include <iostream>
#include "user.h"

//User::User(std::string& userName, std::string& email)

std::string User::getUserName() {
    return userName;
}

void User::setUserName() {
    userName = name;
}
