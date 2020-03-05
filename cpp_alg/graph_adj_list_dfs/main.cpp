#include <iostream>
#include <vector>
#include <list>

using namespace std;

typedef struct N1
{
	int data;
	int weight;
}ArcNode;

typedef struct N2
{
	int data;
	list<ArcNode> arcList;
}VNode;


class Graph
{
public:
	 vector<VNode> adj;
public:
	void createGraph()
	{
		int raw[12][2] = {{1,2},{1,3},{1,4}, 
		{2,1},{2,3},
		{3,1},{3,2},{3,5}, 
		{4,1},{4,5}, 
		{5,3},{5,4}} ;
		
		//create adj array
		for(int i=0;i<=5;i++)//node 0 is useless
		{
			VNode v;
			v.data = i;
			adj.push_back(v);
		}
		
		//create adj list
		for(int j=0;j<12;j++)
		{
			int n1 = raw[j][0];
			int n2 = raw[j][1];
			//create arc node, then insert
			ArcNode anode;
			anode.data = n2;
			anode.weight = 0;
			adj[n1].arcList.push_back(anode);
		}
	}

	void printGraph()
	{
		for(int i=0;i<adj.size();i++)
		{
			cout<<adj[i].data<<endl;
			list<ArcNode>::iterator itor;
			for(itor=adj[i].arcList.begin();itor!=adj[i].arcList.end();itor++)
			{
				cout<<"    "<<(*itor).data<<endl;
			}
		}
	}
};

int main(int argc, char** argv) {
	Graph g;
	g.createGraph();
	g.printGraph(); 
	
	return 0;
}




