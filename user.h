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
 User(std::string& uname, std::string& email);
std::string getUserName();
std::string getEmail();
void setUserName(std::string uname);
void setEmail(std::string email);
  void addFriend(User* user);
  void removeFriend(std::string& userName);
  int numFriends();
  User* getFriendAt(int index);
};

#endif
  
