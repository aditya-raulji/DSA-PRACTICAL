// q1 Write a program to create a binary tree and print 
// . inorder traversal 
// . postorder traversal 
 
import java.util.Scanner;

class Node {
    int data;
    Node left, right;

    Node(int value) {
        data = value;
        left = right = null;
    }
}

public class BinaryTree {
    static Scanner sc = new Scanner(System.in);

    public static Node createTree() {
        System.out.print("Enter value (-1 for no node): ");
        int x = sc.nextInt();

        if (x == -1) {
            return null;
        }

        Node newNode = new Node(x);

        System.out.print("Enter left child of " + x + ": ");
        newNode.left = createTree();

        System.out.print("Enter right child of " + x + ": ");
        newNode.right = createTree();

        return newNode;
    }

    public static void inorder(Node root) {
        if (root == null) return;
        inorder(root.left);
        System.out.print(root.data + " ");
        inorder(root.right);
    }

    public static void postorder(Node root) {
        if (root == null) return;
        postorder(root.left);
        postorder(root.right);
        System.out.print(root.data + " ");
    }

    public static void main(String[] args) {
        System.out.println("Create the Binary Tree...");
        Node root = createTree();

        System.out.print("\nInorder Traversal: ");
        inorder(root);

        System.out.print("\nPostorder Traversal: ");
        postorder(root);

        System.out.println();
    }
}
