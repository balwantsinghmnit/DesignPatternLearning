#include <iostream>
#include <list>
using namespace std;

class ISubscriber{
public:
    virtual void notify(string msg) = 0;
};

class User:public ISubscriber{
private:
    int UserId;
public:
    User(int userId){
        this->UserId = userId;
    }
    void notify(string msg){
        cout << "User : " << UserId << " received message : " << msg << endl;
    }
};

class Group:public ISubscriber{
private:
    list<ISubscriber*> Users;
public:
    void subscribe(ISubscriber* user){
        Users.push_back(user);
    }
    void unsubscribe(ISubscriber* user){
        Users.remove(user);
    }
    void notify(string msg){
        for(auto user:Users){
            user->notify(msg);
        }
    }
};

int main(){
    Group* group = new Group;

    User* user1 = new User(1);
    User* user2 = new User(2);
    User* user3 = new User(3);

    group->subscribe(user1);
    group->subscribe(user2);
    group->subscribe(user3);

    group->notify("New Msg");

    group->unsubscribe(user1);

    group->notify("One More New Msg");

    return 0;
}