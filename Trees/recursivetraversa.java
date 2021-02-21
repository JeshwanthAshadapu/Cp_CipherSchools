class Traversalrecursive{
    static int height(BTNode root){
        if(root==null)
            return 0;
        else
            return 1+Math.max(height(root.left),height(root.right));
    }
    static void preOrder(BTNode root){
        if(root==null)
            return;
        else{
            System.out.print(root.data+" ");
            preOrder(root.left);
            preOrder(root.right);
        }
    }
    static void postOrder(BTNode root){
        if(root==null)
            return;
        else{
            postOrder(root.left);
            postOrder(root.right);
            System.out.print(root.data+" ");
        }
    }
    static void inOrder(BTNode root){
        if(root==null)
            return;
        else{
            inOrder(root.left);
            System.out.print(root.data+" ");
            inOrder(root.right);
        }
    }
    static void printLevel(BTNode root,int level){
        if(root==null)
            return;
        if(level==1)
            System.out.print(root.data+" ");
        else if(level>1){
            printLevel(root.left,level-1);
            printLevel(root.right,level-1);
        }
    }
    static void levelOrder(BTNode root){
        if(root==null)
            return;
        int levels=height(root);
        for(int level=1;level<=levels;level++)
            printLevel(root,level);
    }
    public static void main(String[] args) {
        BTNode root=new BTNode(5);
        root.left=new BTNode(4);
        root.left.right=new BTNode(1);
        root.right=new BTNode(7);
        root.right.left=new BTNode(2);
        root.left.left=new BTNode(6);
        root.right.right=new BTNode(8);
        System.out.println("Preorder traversal:");
        preOrder(root);
        System.out.println();
        System.out.println("Postorder traversal:");
        postOrder(root);
        System.out.println();
        System.out.println("Inorder traversal:");
        inOrder(root);
        System.out.println();
        System.out.println("Levelorder traversal:");
        levelOrder(root);
    }
}
