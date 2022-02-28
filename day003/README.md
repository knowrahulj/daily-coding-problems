# Serialize and deserialize binary tree
Given the root to a binary tree, implement serialize(root), which serializes the tree into a string, and deserialize(s), which deserializes the string back into the tree.


## Example
```
Let the marker for NULL pointers be '-1'
Input:
     12
    /
  13
Output: 12 13 -1 -1 -1

Input:
      20
    /   \
   8     22
Output: 20 8 -1 -1 22 -1 -1

Input:
         20
       /
      8
     / \
    4  12
      /  \
     10  14
Output: 20 8 4 -1 -1 12 10 -1 -1 14 -1 -1 -1

Input:
          20
         /
        8
      /
    10
    /
   5
Output: 20 8 10 5 -1 -1 -1 -1 -1

Input:
          20
            \
             8
              \
               10
                 \
                  5
Output: 20 -1 8 -1 10 -1 5 -1 -1
```

## This problem was recently asked by Google.