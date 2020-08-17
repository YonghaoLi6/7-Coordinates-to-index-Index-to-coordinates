#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
int l1 = 50;
int l2 = 57;

int main()
{
    string line;
    int head=0,count=0;
    int I;
    ifstream ifs("input_index_7_1.txt");
    if(!ifs) return -1;
    ofstream ofs("output_coordinates_7_1.txt");
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
            ofs<<"x1\tx2"<<endl;
        }
        ofs<<(I % l1)<<"\t"<<(I / l1)<<endl;
        count++;
    }
    
    ifs.close();
    ofs.close();
    return 0;
}
