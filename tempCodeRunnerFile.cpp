#include<iostream>
using namespace std;
class student {
    private:
    int marks;
    public:
    void setMarks(int m) {
        marks = m;
    }
    void showMarks() {
        cout<<marks;
    }
};
    int main() {
        student s;
        s.setMarks(90);
        s.showMarks();
    return 0;
}
