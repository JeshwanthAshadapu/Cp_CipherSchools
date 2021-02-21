import java.util.*;
class Views{
    static void leftView(BTNode root){
        if(root==null)
            return;
        Queue<BTNode> q=new LinkedList<BTNode>();
        q.add(root);
        while(q.size()!=0){
            int size=q.size();
            for(int i=0;i<size;i++){
                BTNode tmp=q.peek();
                q.remove();
                if(i==0)
                    System.out.print(tmp.data+" ");
                if(tmp.left!=null)
                    q.add(tmp.left);
                if(tmp.right!=null)
                    q.add(tmp.right);
            }
        }
    }
    static void rightView(BTNode root){
        if(root==null)
            return;
        Queue<BTNode> q=new LinkedList<BTNode>();
        q.add(root);
        while(q.size()!=0){
            int size=q.size();
            for(int i=0;i<size;i++){
                BTNode tmp=q.peek();
                q.remove();
                if(i==size-1)
                    System.out.print(tmp.data+" ");
                if(tmp.left!=null)
                    q.add(tmp.left);
                if(tmp.right!=null)
                    q.add(tmp.right);
            }
        }
    }

    public static void main(String[] args) {
        BTNode root=new BTNode(5);
        root.left=new BTNode(4);
        root.left.right=new BTNode(1);
        root.right=new BTNode(7);
        root.right.left=new BTNode(2);
        root.left.left=new BTNode(6);
        root.right.right=new BTNode(8);
        System.out.println("Left View:");
        leftView(root);
        System.out.println();
        System.out.println("Right View:");
        rightView(root);
        System.out.println();
        System.out.println("Top View:");
    }
}
