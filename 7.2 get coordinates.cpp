#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
int l1 = 4;
int l2 = 8;
int l3 = 5;
int l4 = 9;
int l5 = 6;
int l6 = 7;

int main()
{
    string line;
    int head=0,count=0;
    int x1,x2,x3,x4,x5,x6;
    int I;
    int temp;
    ifstream ifs("input_index_7_2.txt");
    if(!ifs) return -1;
    ofstream ofs("output_coordinates_7_2.txt");
    if(!ofs) return -2;
    while(getline(ifs,line))
    {
        istringstream is(line);
        if(head==0)
        {
            //skip the first line
            head=1;
            continue;
        }
        is>>I;
        if(count==0)
        {
            ofs<<"x1\tx2\tx3\tx4\tx5\tx6"<<endl;
        }
        x6 = I / (l1*l2*l3*l4*l5);
        temp = I % (l1*l2*l3*l4*l5);
        x5 = temp / (l1*l2*l3*l4);
        temp = temp % (l1*l2*l3*l4);
        x4 = temp / (l1*l2*l3);
        temp = temp % (l1*l2*l3*l4);
        x3 = temp / (l1*l2);
        temp = temp % (l1*l2);
        x2 = temp / l1;
        temp = temp % l1;
        x1 = temp;
        ofs<<x1<<"\t"<<x2<<"\t"<<x3<<"\t"<<x4<<"\t"<<x5<<"\t"<<x6<<endl;
        count++;
    }
    
    ifs.close();
    ofs.close();
    return 0;
}
