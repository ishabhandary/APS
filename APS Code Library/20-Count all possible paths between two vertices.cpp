
#include <cassert>
#include <list>
using namespace std;


class Graph {
public:

	Graph(int vertices);

	void add_edge(int src, int dst);

	int count_paths(int src, int dst);

private:
	int m_vertices;
	list<int>* m_neighbours;
	void path_counter(int src, int dst, int& path_count);
};

Graph::Graph(int vertices)
{
	m_vertices = vertices; 

	m_neighbours = new list<int>[vertices];
}

void Graph::add_edge(int src, int dst)
{
	m_neighbours[src].push_back(dst);
}

int Graph::count_paths(int src, int dst)
{
	int path_count = 0;
	path_counter(src, dst, path_count);
	return path_count;
}


void Graph::path_counter(int src, int dst, int& path_count)
{

	if (src == dst) {
		path_count++;
	}

	else {
		for (auto neighbour : m_neighbours[src]) {
			path_counter(neighbour, dst, path_count);
		}
	}
}
