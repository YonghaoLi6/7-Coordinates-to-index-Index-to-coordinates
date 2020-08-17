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
    int x1,x2;
    ifstream ifs("input_coordinates_7_1.txt");
    if(!ifs) return -1;
    ofstream ofs("output_index_7_1.txt");
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
        is>>x1>>x2;
        if(count==0)
        {
            ofs<<"index"<<endl;
        }
        ofs<<(l1*x2+x1)<<endl;
        count++;
    }
    
    ifs.close();
    ofs.close();
    return 0;
}
