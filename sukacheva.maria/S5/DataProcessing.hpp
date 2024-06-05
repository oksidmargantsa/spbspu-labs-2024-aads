#ifndef DATAPROCESSING_HPP
#define DATAPROCESSING_HPP
#include "BST.hpp"
#include "KeySum.hpp"

namespace sukacheva
{
  using BinaryTree = BST< int, std::string >;

  BinaryTree inputTree(std::string& line);
  void ascendingCommand(BinaryTree tree, std::ostream& out);
  void descendingCommand(BinaryTree tree, std::ostream& out);
  void breadthCommand(BinaryTree tree, std::ostream& out);
  void printResult(KeySum& result, std::ostream& out);
}

#endif