class RELATION{
    int nA,nB;
    int R[][];
    RELATION(){
        nA=0;nB=0;
        R = new int[0][0];

    }
    RELATION(int a,int b,int r[][]){
        nA=a;nB=b;
        R = new int[nA][nB];
        this.R=r;


    }

    public String check()
    {
        
        boolean reflexive=false;
        boolean symmetric = false;
        boolean transitive = false;
        String rev = "";
        // Reflexivity
        for(int i=0;i<nA;i++){
            if (R[i][i]==1)
                reflexive =true;
            else{
                reflexive=false;
                break;
            }
        }

    
        // Symmetricity
        for(int i=0;i<nA;i++){
            for(int j=0;j<nB;j++){
                if(R[i][j]==1){
                    if( R[j][i]==1)
                        
                    symmetric=true; 
                    else{
                        symmetric =false;
                         break;
                    }
                }  
                
                
            }
        }
        if(reflexive ==true){
            rev += "Reflexive ";
        }
        if(symmetric==true)
            rev += "Symmetric ";

        
            // For Transitivity
        for(int i=0;i<nA;i++){
            for(int j=0;j<nB-1;j++){
                if(R[i][j]==1){
                    for(int k=0;k<nB;k++){
                        if(R[j][k]==1 && R[i][k]==1){
                            transitive=true;

                        }
                        else{
                            transitive=false;
                            break;
                        }
                    }

                }
            }
        }
        if(transitive){
            rev += "Transitive ";
        }
                
        return rev;



    }
}
public class Q3_discrete
{
    public static void main(String[] args) {
        int rel[][]={{1,1,1},{1,1,1},{1,1,1}};
        RELATION obj = new RELATION(3,3,rel);
        System.out.println(obj.check());



    }
}