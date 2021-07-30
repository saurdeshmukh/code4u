#include<iostream>
#include<list>
#include<stack>
using namespace std;
class Graph
{
	int vertices;
	list<int> *grp;
public:
	Graph()
	{
		this->vertices = 0;
		this->grp = nullptr;
	}
	Graph(int v)
	{
		this->vertices = v;
		this->grp = new list<int>[v];
	}
	void addEdge(int v,int node)
	{
		this->grp[v].push_back(node);
	}
	void showGraph()
	{
		for(int i=0;i<this->vertices;i++)
		{
			list<int>::iterator itr;
			cout<<"V:"<<i;
			for(itr = this->grp[i].begin();itr != this->grp[i].end();itr++)
				{
					cout<<"->"<<*itr;
				}
			cout<<endl;
		}
	}
	void BFS(int s)
	{
		//Create visited array to track on nodes
		bool *visited = new bool[this->vertices];
		for(int i=0;i<this->vertices;i++)
			visited[i] = false;
		
		list<int> queue;
		queue.push_back(s);
		visited[s] = true;
		cout<<"BFS traversal of graph with start "<<s<<"  :";
		while(!queue.empty())
		{
			int n = queue.front();
			queue.pop_front();
			cout<<n<<"   ";
			
			list<int>::iterator itr;
			for(itr=this->grp[n].begin();itr!=grp[n].end();++itr)
			{
				if(!visited[*itr])
				{
					visited[*itr] = true;
					queue.push_back(*itr);
					
				}
			}
		}		

	}
	void DFS(int s)
	{
		bool *visited = new bool[this->vertices];
		for(int i=0;i<this->vertices;i++)
			visited[i] = false;
		stack<int> st;
		st.push(s);
		visited[s] = true;
		cout<<endl<<"DFS traversl of graph with start node "<<s<<"  :";
		while(!st.empty())
		{
			int n = st.top();
			st.pop();
			list<int>::iterator itr;
			cout<<n<<"   ";
			for(itr=this->grp[n].begin();itr!=this->grp[n].end();++itr)
			{
				if(!visited[*itr])
				{
					st.push(*itr);
					visited[*itr]= true;
				}
			}
		}
	}
	void DFS_recursive_call(int n,bool visited [])
	{
		
			list<int>::iterator itr;
			cout<<n<<"   ";
			for(itr=this->grp[n].begin();itr!=this->grp[n].end();++itr)
			{
				if(!visited[*itr])
				{
					visited[*itr]= true;
					DFS_recursive_call(*itr,visited);
				}
			}
		
	}
	void DFS_recur(int s)
	{
		bool *visited = new bool[this->vertices];
		for(int i=0;i<this->vertices;i++)
			visited[i] = false;
		visited[s] = true;
		cout<<endl<<"DFS recursive:";
		DFS_recursive_call(s,visited);
		cout<<endl;
	}
};


int main()
{
	Graph g(5);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,0);
	g.addEdge(1,4);
	g.addEdge(2,0);
	g.addEdge(2,3);
	g.addEdge(3,2);
	g.addEdge(4,1);
	g.showGraph();
	g.BFS(0);
	g.DFS(0);
	g.DFS_recur(0);
return 0;
}
