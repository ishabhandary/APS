#include <bits/stdc++.h>
using namespace std;
struct Node {

	// Stores data value
	// of the node
	int data;

	// Stores left subtree
	// of a node
	Node* left;

	// Stores right subtree
	// of a node
	Node* right;

	Node(int x)
	{

		data = x;
		left = right = NULL;
	}
};

void findDistance(Node* root, int N)
{

	// Store nodes at each level
	// of the binary tree
	queue<Node*> Q;

	// Insert root into Q
	Q.push(root);

	// Stores level of a node
	int level = 0;

	// dist[i]: Stores the distance
	// from root node to node i
	int dist[N + 1];

	// Traverse tree using BFS
	while (!Q.empty()) {

		// Stores count of nodes
		// at current level
		int M = Q.size();

		// Traverse the nodes at
		// current level
		for (int i = 0; i < M; i++) {

			// Stores front element
			// of the queue
			root = Q.front();

			// Pop front element
			// of the queue
			Q.pop();

			// Stores the distance from
			// root node to current node
			dist[root->data] = level;

			if (root->left) {

				// Push left subtree
				Q.push(root->left);
			}

			if (root->right) {

				// Push right subtree
				Q.push(root->right);
			}
		}

		// Update level
		level += 1;
	}

	for (int i = 1; i <= N; i++) {

		cout << dist[i] << " ";
	}
}


int main()
{

	int N = 7;
	Node* root = new Node(5);
	root->left = new Node(4);
	root->right = new Node(6);
	root->left->left = new Node(3);
	root->left->right = new Node(7);
	root->left->left->left = new Node(1);
	root->left->left->right = new Node(2);
	findDistance(root, N);
}
