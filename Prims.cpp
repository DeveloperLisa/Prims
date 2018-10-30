//author: Lisa Hartmann Jensen

#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<algorithm>

struct Edge
{
    int from;
    int to;
    long weight;

    //constructor of an edge
    Edge(int from, int to, long weight): from(from), to(to), weight(weight)
    {}

    //comparator of edges
    bool operator<(const Edge& e) const{
        return weight < e.weight;
    }
};

//read in the file format: vertex1 vertex2 edgeWeight 
void fill_vector(std::vector<Edge>& edges, char *filename, int& v){
    long start;
    long end;
    long weight;

    std::ifstream source = std::ifstream(filename);
    std::string line;

    while(std::getline(source, line)){
        std::istringstream in = std::istringstream(line);

        in >> start;
        in >> end;
        in >> weight;
        
        if(start > v) v = start;
        if(end > v) v = end;

        Edge e(start, end, weight);
        edges.push_back(e);    
    }
}

int main(int argc, char** args){

    int n = std::atoi(args[1]);
    char* filename = args[2];
    int v = 0;


}