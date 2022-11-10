class Solution {
    public List<Integer> rightSideView(TreeNode root) {
        List<Integer> list = new ArrayList<>();
        if(root == null) return list;
        Queue<TreeNode> queue = new ArrayDeque<>();
        queue.offer(root);
        while(!queue.isEmpty()){
            int size = queue.size();
            for(int i=0;i<size;i++){
                TreeNode cur = queue.remove();
                if(i == 0) list.add(cur.val);
                if(cur.right!=null) queue.offer(cur.right);
                if(cur.left != null) queue.offer(cur.left);
            }
        }
        return list;
    }
}
