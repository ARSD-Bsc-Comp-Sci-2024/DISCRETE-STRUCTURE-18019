public class Q18_discrete{
    int counter=0,a[][];
    
    Q18_discrete(int array[][]){
        a = array;
    }
    public void count(int start, int end,int n){
        
        int neww = -1;
        for(int i=0;i<a[0].length;i++){
            if(a[start][i]==n){
                counter++;neww = i;
            }
            
        }
        if(start!=end){
            count(neww,end,n);
        }
    }
    public void print(){
        System.out.println(counter);
    }

    public static void main(String[] args) {

        int ar[][]={{0,2,0},{0,0,2},{1,0,0}}; //Adjaceny matrix for example ; can take user-input instead
        Q18_discrete obj = new Q18_discrete(ar);
        obj.count(0, 2, 2);
        obj.print();
        
    }
}