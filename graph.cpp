#include<iostream>
using namespace std;

class graph
{
private:
    int v=0;
    int **grap;
public:
    graph(int m){
        v=m;
        grap = new int*[v];
        for(int i=0;i<v;i++){
            grap[i]= new int[v];    
        }
        for (int i = 0; i < v; i++)
        {
            for (int j = 0; j < v; j++)
            {
                grap[i][j]=0;
            }
            
        }
        
    }

    void addedge(int a,int b){
        if(a!=b){
            grap[a][b]=1;
        }
    }

    void display(){
        for (int i = 0; i < v; i++)
        {
            for (int j = 0; j < v; j++)
            {
               cout<<grap[i][j]<<" ";
            }cout<<endl;
            
        }
    }
    ~graph(){

    }

};

int main(){
    int n,vertex,adj;
    cout<<"lets begin with adjacency matrix Graph \n";
    cout<<"Note! The vertices will be symbolised by whole numbers ;\n ";
    cout<<"ENter the total number of vertices : ";
    cin>>n;
    graph ob(n);
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the number of vertex : ";
        cin>>vertex;
        cout<<"How many adjacent vertices you want for "<<vertex<<"th vertex : ";
        cin>>adj;
        for (int i = 0; i < adj; i++)
        {
            int v2;
            cout<<"Enter the adjacent vertex : ";
            cin>>v2;
            ob.addedge(vertex,v2);
        }   
    }
    ob.display();
    
    
    return 0;
}
