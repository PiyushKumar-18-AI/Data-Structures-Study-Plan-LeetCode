## 104. Maximum Depth of Binary Tree

class Solution(object):
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root == None:
            return 0
        
        depth = 0
        
        queue = []
        
        queue.append(root)
        
        while(queue):
                       
            size = len(queue)

            while(size > 0):
                
                root = queue.pop(0)
                
                if root.left != None:
                    queue.append(root.left)
                    
                if root.right != None:
                    queue.append(root.right)
                
                size -= 1
            
            depth += 1
    
        return depth
