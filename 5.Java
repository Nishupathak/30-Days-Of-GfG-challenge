//5.Bottom View of Binary Tree //

class Solution
{
   class Pair{
        Node node;
        int col;
        Pair(Node node,int col){
            this.node= node;
            this.col=col;
        }
    }
    public ArrayList <Integer> bottomView(Node root)
    {
       Queue<Pair> q = new LinkedList<>();
       Map<Integer,Integer> map = new TreeMap<>();
       ArrayList<Integer> ans = new ArrayList<>();
       if(root == null){
           return ans;
       }
       q.offer(new Pair(root,0));
       while(!q.isEmpty()){
           Pair it=q.poll();
           Node n = it.node;
           int c=it.col;
          
            map.put(c,n.data);
          
           if(n.left!=null){
               q.offer(new Pair(n.left,c-1));
           }
           if(n.right!=null){
               q.offer(new Pair(n.right,c+1));
           }
       }
    
       for(int val : map.values()){
           ans.add(val);
       }
       return ans;
    }
}
