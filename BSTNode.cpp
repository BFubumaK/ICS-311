/// @file    BSTNode.cpp
/// @version 1.1

#include "BSTNode.h"

using namespace std;

///////////////// Constructors and Destructor //////////////////////

////////////////////////////////////////////////////////////////////////
///
/// The Basic Constructor
///
/// @brief The bare bones basic constructor for the node class. < Creates a node that does not point to another node
/// @param newData The new numerical data from the phrases
/////////////////////////////////////////////////////////////////////////
explicit BSTNode::BSTNode( int newData ) {

    data = newData;
    olelo = "";
    english = "";
    explanation = "";
    color = "";
    right = nullptr;
    left = nullptr;
    parent = nullptr;
}; 

/////////////////////////////////////////////////////////
///
/// Exhaustive Constructor
///
/// @brief The Exhaustive Constructor that includes every possible member variable.
/// @param newdata         The new numerical data from the phrases
/// @param newOlelo        The new Hawaiian translation of the phrase
/// @param newEnglish      The new English translation of the phrase
/// @param newExplanation  The new explanation of the phrase
/// @param newColor        The new color of the node (red or black)
/// @param newLeft         The new pointer directed towards the left child
/// @param newRight        The new pointer directed towards the right child
/// @param newParent       The new pointer directed towards the parent node
//////////////////////////////////////////////////////////  
BSTNode::BSTNode( int newData, 
              std::string newOlelo, 
              std::string newEnglish, 
              std::string newExplanation, 
              std::string newColor,
              BSTNode *newLeft,
              BSTNode *newRight, 
              BSTNode *newParent ) {
    
    data = newData;
    olelo = newOlelo;
    english = newEnglish;
    explanation = newExplanation;
    color = newColor;
    right = newRight;
    left = newLeft;
    parent = newParent;
}; 
    
    
BSTNode::~BSTNode() {
    reset ();
}; /// Destructor to free data

/////////////////////////////////////////////////////
///
/// Basic Pointer Constructor
///
/// @brief Basic Constructor with desired pointers
/// @param newData         The new numerical data from the phrases 
/// @param newLeft         The new pointer directed towards the left child 
/// @param newRight        The new pointer directed towards the right child
/// @param newParent       The new pointer directed towards the parent node 
///////////////////////////////////////////////////////
BSTNode::BSTNode( int newData, 
                  BSTNode* newLeft, 
                  BSTNode* newRight, 
                  BSTNode* newParent ) {

    data = newData;
    olelo = "";
    english = "";
    explanation = "";
    color = "";
    left = newLeft;
    right = newRight;
    parent = newParent;
};

/////////////////////////////////////////////////
///
/// Destructor
///
/// @brief Clears the pointers of a node, thus resleasing it back into memory
/////////////////////////////////////////////////////
void BSTNode::reset() noexcept {
    left = nullptr;
    right = nullptr;
    parent = nullptr;
}

/// @brief Getter for numerical data
/// @return The node's numerical data
int BSTNode::getData () const {
    return data;
};

/// @brief Getter for the Hawaiian translation
/// @return The node's Hawaiian Translation
std::string BSTNode::getOlelo () {
    return olelo;
};


/// @brief Getter for the English Translation
/// @return The node's English Translation
std::string BSTNode::getEnglish () {
    return english;
};

/// @brief Getter for the explanation
/// @return The node's explanation (of the phrase)
std::string BSTNode::getExplanation () {
    return explanation;
};

/// @brief Getter for the color of the node
/// @return The node's color (black or red)
std::string BSTNode::getColor () {
    return color;
};

/// @brief Getter for the Left Child pointer
/// @return The pointer that points to the Left Child
BSTNode* BSTNode::getLeft () {
    return left;
};

/// @brief Getter for the Right Child pointer
/// @return The pointer that points to the Right Child
BSTNode* BSTNode::getRight () {
    return right;
};

/// @brief Getter for the Parent pointer
/// @return The pointer that points to the node's parent
BSTNode* BSTNode::getParent () {
    return parent;
};

/// @brief Setter for the numerical data
/// @param newdata         The new numerical data from the phrases
void BSTNode::setData ( int newData ) {
    data = newData;
};

/// @brief Setter for the Hawaiian Translation
/// @param newOlelo        The new Hawaiian translation of the phrase
void BSTNode::setOlelo ( std::string newOlelo ) {
    olelo = newOlelo;
}; 

/// @brief Setter for the English translation
/// @param newEnglish      The new English translation of the phrase
void BSTNode::setEnglish ( std::string newEnglish ) {
    english = newEnglish;
};

/// @brief Setter for the explanation
/// @param newExplanation  The new explanation of the phrase
void BSTNode::setExplanation ( std::string newExplanation ) {
    explanation = newExplanation;
};

/// @brief Sets the color of the node.
/// @param newColor        The new color of the node (red or black)
/// @attention Probably should restrict this to 1 or 0
void BSTNode::setColor ( std::string newColor ) {
    color = newColor;
};

/// @brief Setter for the Left Pointer
/// @param newLeft         The new pointer directed towards the left child
void BSTNode::setLeft  ( BSTNode* newLeft ) {
    left = newLeft;
};

/// @brief Setter for the Right Pointer
/// @param newRight        The new pointer directed towards the right child 
void BSTNode::setRight ( BSTNode* newRight  ) {
    right = newRight;
};

/// @brief Setter for the Parent pointer
/// @param newParent       The new pointer directed towards the parent node 
void BSTNode::setParent ( BSTNode* newParent ) {
    parent = newParent;
};