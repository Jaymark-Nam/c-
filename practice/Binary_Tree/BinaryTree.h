
#pragma once

template<typename T>
class BinaryTree{
public:
private:
	class TreeNode{
		public:
			T & data;
			TreeNode * left;
			TreeNode * right;
			TreeNode(T & data) : data(data), left(nullptr), right(nullptr) {  }
	};
	TreeNode * root_;
};

#include "BinaryTree.hpp"