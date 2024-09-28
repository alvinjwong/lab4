#include <iostream>
#include "user.h"

User::User(std::string& uname, std::string& email) {
    this->userName = uname;
    this->email = email;
}

std::string User::getUserName() {
    return userName;
}

void User::setUserName(std::string name) {
    userName = name;
}

std::string User::getEmail() {
    return email;
}

void User::setEmail(std::string mail) {
    email = mail;
}

void User::addFriend(User* user) {
    if (friendList.size() > 100) {
        std::cout << "Your friend list is full" << std::endl;
    } else {
        friendList.push_back(user);
    }
}

void User::removeFriend(std::string& userName) {
    for (auto friend : friendList) {
        if (friend == userName) {
            friendList.erase(friend);
        }
    }
}

int User::numFriends() {
    return friendList.size();
}

User* User::getFriendAt(int index) {
    if (index >= 0 && index < numFriends()) {
        return friendList[index];
    } else {
        std::cout << "The index you chose was out of range" << std::endl;
    }
}