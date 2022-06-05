#include<iostream>
using namespace std;

class Vertex{
    public:
        string name;
        int in_degree = 0, out_degree = 0;
        Vertex(){};
        Vertex(string name){
            this->name = name;
        }
        void operator = (Vertex oth){
            this->name = oth.name;
        }
        bool operator == (Vertex oth){
            return (this->name == oth.name);
        }
};

class Edge{
    public:
        Vertex initial;
        Vertex terminal;
        bool loop = false;
        Edge(){};
        Edge(Vertex initial, Vertex terminal){
            this->initial = initial;
            this->terminal = terminal;
            loop = (initial == terminal);
        }
        void operator = (Edge oth){
            this->initial = oth.initial;
            this->terminal = oth.terminal;
            loop = (oth.initial == oth.terminal);
        }
};

class Graph{
    public:
        Edge *E;
        Vertex *V;
        int E_length, V_length;
        Graph(Vertex *V, int V_length, Edge *E, int E_length){
            // vertices
            this->V = new Vertex[V_length];
            this->V_length = V_length;
            for (int i = 0; i < V_length; i++){
                this->V[i] = V[i];
            }

            // edges
            this->E = new Edge[E_length];
            this->E_length = E_length;
            for (int i = 0; i < E_length; i++){
                this->E[i] = E[i];
            }
        }
        void Degree(){
            for (int i = 0; i < V_length; i++){
                for (int j = 0; j < E_length; j++){
                    // in degree
                    if (this->E[j].terminal == this->V[i]){
                        if (this->E[j].loop)
                            this->V[i].in_degree += 2;
                        else
                            this->V[i].in_degree ++;
                    }
                    // out degree
                    if (this->E[j].initial == this->V[i]){
                        this->V[i].out_degree ++;
                    }
                }
            }
            cout << "Indegree of vertices : \n";
            for (int i = 0; i < V_length; i++){
                Vertex v = this->V[i];
                cout << "deg-(" <<v.name << ") is : " << v.in_degree << endl; 
            }
            cout << "Outdegree of vertices : \n";
            for (int i = 0; i < V_length; i++){
                Vertex v = this->V[i];
                cout << "deg+(" <<v.name << ") is : " << v.out_degree << endl; 
            }
        }
};

int main(){
    Vertex a("a"), b("b"), c("c"), d("d");
    Vertex V[] = {a,b,c,d};
    Edge E[] = {Edge(a,b), Edge(b,c), Edge(c,d), Edge(d,a), Edge(d,d)};
    Graph graph(V, sizeof(V)/sizeof(V[0]), E, sizeof(E)/sizeof(E[0]));
    graph.Degree();
}