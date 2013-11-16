#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <map>
using namespace std;

struct Edge {
	int source;
	int dest;
	int weight;
};
typedef struct Edge Edge;

bool comp(Edge* e1, Edge* e2) {
	return (e1->weight < e2->weight);
}

class Graph {
	public:		
		vector<vector<int> >  adjMatrix;
		map<int,vector<int> > adjList;
		vector<Edge*> edgeList;
	public:
		void createAdjMatrix();
		void showAdjMatrix();
		void createAdjList();
		void showAdjList();
		void createEdgeList();
		void showEdgeList();
		void kruskal();
};

void Graph::createAdjMatrix() {
	ifstream file;
	file.open("input");
	if(file.is_open()) {
		adjMatrix.clear();
		string line;
		while(getline(file,line)) {
			stringstream ss(line);
                   	istream_iterator<int> itr(ss);
			istream_iterator<int> end;
			vector<int> row;
			while(itr != end) {
				row.push_back(*itr);
				++itr;
			}
			adjMatrix.push_back(row);
		}
		file.close();
	}
}

void Graph::showAdjMatrix() {
	vector<vector<int> >::iterator adjMatrixItr = adjMatrix.begin();
	while(adjMatrixItr != adjMatrix.end()) {
		vector<int>::iterator itr = adjMatrixItr->begin();
		while(itr != adjMatrixItr->end()) {
			cout<<*itr<<"\t";
			++itr;
		}
		cout<<endl;
		adjMatrixItr++;
	}
}

void Graph::createAdjList() {
	if(adjMatrix.size() == 0) {
		createAdjMatrix();
	}

	for(int counter = 0 ; counter < adjMatrix.size(); ++counter) {
		vector<int> connectedTo;
		for(int conn = 0  ; conn < adjMatrix[counter].size(); conn++) {
			if(adjMatrix[counter][conn] != 0) {
				connectedTo.push_back(conn);
			}
		}
		adjList.insert(pair<int,vector<int> >(counter,connectedTo));	
	}
}

void Graph::showAdjList() {
	map<int,vector<int> >::iterator mapItr = adjList.begin() ;
	while(mapItr != adjList.end() ) {
		cout<<mapItr->first<<" => [";
		vector<int>::iterator vecItr =  mapItr->second.begin();
		while(vecItr != mapItr->second.end()){
			cout<<*vecItr<<" ";
			++vecItr;
		}
		cout<<"\b]"<<endl;
		mapItr++;
	}
}

void Graph::createEdgeList() {
	edgeList.clear();
	for(int i = 0 ; i <adjMatrix.size() ; ++i ) {
		for(int  j = 0 ;  j< i; ++j) {
			if(adjMatrix[i][j] != 0) {
				Edge *edge = new Edge;
				edge->source = i;
				edge->dest = j;
				edge->weight = adjMatrix[i][j];
				edgeList.push_back(edge);
			}
		}
	}
	sort(edgeList.begin(),edgeList.end(),comp);
}

void Graph::showEdgeList() {
	vector<Edge*>::iterator edgeItr = edgeList.begin();
	while(edgeItr != edgeList.end()) {
		Edge *e = *edgeItr;
		cout<<"Source " <<e->source<<" Destination "<<e->dest<<" Weight : " <<e->weight<<endl;
		edgeItr++;
	}
}


void Graph::kruskal() {

}


int main() {
	Graph g;
	g.createAdjList();
	g.showAdjList();
	g.createEdgeList();
	g.showEdgeList();
       	return 0; 
}
