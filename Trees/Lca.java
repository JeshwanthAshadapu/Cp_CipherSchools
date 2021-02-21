import java.util.ArrayList;
import java.util.List;

public class LCA 
{

	BTNode root;
	List<Integer> path1 = new ArrayList<>();
	List<Integer> path2 = new ArrayList<>();
	int findLCA(int n1, int n2) {
		path1.clear();
		path2.clear();
		return findLCAInternal(root, n1, n2);
	}

	int findLCAInternal(BTNode root, int n1, int n2) {

		if (!findPath(root, n1, path1) || !findPath(root, n2, path2)) {
			System.out.println((path1.size() > 0) ? "n1 is present" : "n1 is missing");
			System.out.println((path2.size() > 0) ? "n2 is present" : "n2 is missing");
			return -1;
		}

		int i;
		for (i = 0; i < path1.size() && i < path2.size(); i++) {

			if (!path1.get(i).equals(path2.get(i)))
				break;
		}

		return path1.get(i-1);
	}

	boolean findPath(BTNode root, int n, List<Integer> path)
	{
		if (root == null) {
			return false;
		}
		path.add(root.data);

		if (root.data == n) {
			return true;
		}
		if (root.left != null && findPath(root.left, n, path)) {
			return true;
		}
		if (root.right != null && findPath(root.right, n, path)) {
			return true;
		}
		path.remove(path.size()-1);

		return false;
	}
	public static void main(String[] args)
	{
		LCA tree = new LCA();
		tree.root = new BTNode(1);
		tree.root.left = new BTNode(2);
		tree.root.right = new BTNode(3);
		tree.root.left.left = new BTNode(4);
		tree.root.left.right = new BTNode(5);
		tree.root.right.left = new BTNode(6);
		tree.root.right.right = new BTNode(7);

		System.out.println("LCA(4, 6): " + tree.findLCA(4,6));
	
	}
}
