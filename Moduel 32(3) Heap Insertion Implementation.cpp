#include<bits/stdc++.h>
using namespace std;
class MaxHeap{
    public:
vector<int>nodes;
MaxHeap()
{

}
void up_heapify(int idx)
{
    while(idx>0 && nodes[idx] > nodes[idx-1]/2)
    {
        swap(nodes[idx],nodes[(idx-1)/2]);
        idx = (idx-1)/2;
    }
}
void insert(int x)
{
    nodes.push_back(x);
    up_heapify(nodes.size()-1);


}

void printHeap()
{
    for(int i=0;i<nodes.size();i++)
    {
        cout<<nodes[i]<<" ";
    }
    cout<<"\n";
}

};

int main()
{
MaxHeap heap;
heap.insert(4);
heap.insert(7);
heap.insert(9);
heap.insert(1);
heap.insert(10);

heap.printHeap();
return 0;
}
