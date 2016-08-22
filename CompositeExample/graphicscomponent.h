#ifndef GRAPHICSCOMPONENT_H
#define GRAPHICSCOMPONENT_H

#include <QList>

class QString;

class GraphicsComponent
{
public:
    GraphicsComponent(){}
    virtual ~GraphicsComponent(){}
    virtual void add(GraphicsComponent *component);
    virtual void remove(GraphicsComponent *component);
    virtual GraphicsComponent *findChild(int componentIndex);
    virtual QList<GraphicsComponent *> *findChildren();
    virtual void print() = 0;
    QString componentName();
protected:
    QString m_componentName;
};

#endif // GRAPHICSCOMPONENT_H
