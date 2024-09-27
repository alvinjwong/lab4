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
 User(std::string& userName, std::string& email);
  void addFriend(User* user);
  void removeFriend(std::string& userName);
  int numFriends();
  User* getFriendAt(int index);
};

#endif
  
