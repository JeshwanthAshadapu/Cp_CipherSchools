class DiameterBT {
	BTNode root;
	int diameter(BTNode root)
	{
		if (root == null)
			return 0;
		int lheight = height(root.left);
		int rheight = height(root.right);
		int ldiameter = diameter(root.left);
		int rdiameter = diameter(root.right);
		return Math.max(lheight + rheight + 1,
						Math.max(ldiameter, rdiameter));
	}
	int diameter() { return diameter(root); }
	static int height(BTNode node)
	{
		if (node == null)
			return 0;
		return (1+ Math.max(height(node.left),height(node.right)));
	}

	public static void main(String args[])
	{
		DiameterBT tree = new DiameterBT();
		tree.root = new BTNode(1);
		tree.root.left = new BTNode(2);
		tree.root.right = new BTNode(3);
		tree.root.left.left = new BTNode(4);
		tree.root.left.right = new BTNode(5);
		System.out.println("Diameter : " + tree.diameter());
	}
}
