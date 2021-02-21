class HeightOfBT{
    static int height(BTNode root){
        if(root==null)
            return 0;
        else
            return 1+Math.max(height(root.left),height(root.right));
    }
    public static void main(String[] args) {
        BTNode root=new BTNode(5);
        root.left=new BTNode(4);
        root.left.right=new BTNode(1);
        root.right=new BTNode(7);
        root.right.left=new BTNode(2);
        root.left.left=new BTNode(6);
        root.right.right=new BTNode(8);
        System.out.print(height(root));
    }
}
