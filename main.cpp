#include <iostream>
using namespace std ;


class Entity {
public:
    string m_name;
    void setName(string name) {
        m_name = name;
    }
    string getName() const {
        return m_name;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    Entity e = Entity();
    e.setName("shanghai");
    cout << e.getName() << std::endl;
    return 0;
}
