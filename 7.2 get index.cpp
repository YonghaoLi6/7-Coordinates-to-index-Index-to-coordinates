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
    ifstream ifs("input_coordinates_7_2.txt");
    if(!ifs) return -1;
    ofstream ofs("output_index_7_2.txt");
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
        is>>x1>>x2>>x3>>x4>>x5>>x6;
        if(count==0)
        {
            ofs<<"index"<<endl;
        }
        ofs<<(x6*l5*l4*l3*l2*l1 + x5*l4*l3*l2*l1  + x4*l3*l2*l1 + x3*l2*l1+ x2*l1+ x1)<<endl;
        count++;
    }
    
    ifs.close();
    ofs.close();
    return 0;
}
