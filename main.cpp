#include <iostream>
using namespace std ;


class Entity {
public:
    string m_name;
    void setName (const string_view name) {
        m_name = name;
    }
    string& getName() {
        return m_name;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    auto e = Entity();
    e.setName("shanghai");
    cout << e.getName() << std::endl;
    cout << "test";
    return 0;
}
