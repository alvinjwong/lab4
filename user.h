#ifndef user_h
#define user_h

#include <string>
#include <vector>

class User {
 private:
  std::string userName;
  std::string email;
  std::vector<User*> friendList;

 public:
  void addFriend();
  void removeFriend(std::string userName);
  int numFriends();
  int getFriendAt();
  
