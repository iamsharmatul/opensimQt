#ifndef vsOneFrameNode_H
#define vsOneFrameNode_H

#include "vsNavigatorNode.h"



class vsOneFrameNode : public vsNavigatorNode
{
    Q_OBJECT
public:
    vsOneFrameNode(OpenSim::Frame *frame,vsNavigatorNode *parentNode,QObject *parent);
};

#endif // vsOneFrameNode_H
