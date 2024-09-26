/// @file    BSTNode.cpp
/// @version 1.1

#include "BSTNode.h"

using namespace std;

///////////////// Constructors and Destructor //////////////////////
explicit BSTNode::BSTNode( int newData ) {

    data = newData;
    olelo = "";
    english = "";
    explanation = "";
    color = "";
    right = nullptr;
    left = nullptr;
    parent = nullptr;
}; ///< Creates a node that does not point to another node
    
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
    
    
BSTNode::~BSTNode(); /// Destructor to free data



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


BSTNode::~BSTNode() {
    reset();
}


void BSTNode::reset() noexcept {
    left = nullptr;
    right = nullptr;
    parent = nullptr;
}


int BSTNode::getData () const {
    return data;
};

std::string BSTNode::getOlelo () {
    return olelo;
};

std::string BSTNode::getEnglish () {
    return english;
};

std::string BSTNode::getExplanation () {
    return explanation;
};

std::string BSTNode::getColor () {
    return color;
};

BSTNode* BSTNode::getLeft () {
    return left;
};

BSTNode* BSTNode::getRight () {
    return right;
};

BSTNode* BSTNode::getParent () {
    return parent;
};

void BSTNode::setData ( int newData ) {
    data = newData;
};

void BSTNode::setOlelo ( std::string newOlelo ){
    olelo = newOlelo;
}; 

void BSTNode::setEnglish ( std::string newEnglish ) {
    english = newEnglish;
};
void BSTNode::setExplanation ( std::string newExplanation );
void BSTNode::setColor ( std::string newColor );
void BSTNode::setLeft  ( BSTNode* newLeft );
void BSTNode::setRight ( BSTNode* newRight  );
void BSTNode::setParent ( BSTNode* newParet );