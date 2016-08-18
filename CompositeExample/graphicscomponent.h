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
    virtual void remove(QString componentName);
    virtual GraphicsComponent *findChild(QString componentName);
    virtual QList<GraphicsComponent *> *findChildren();
    virtual void print() = 0;
    QString componentName();
protected:
    QString m_componentName;
};

#endif // GRAPHICSCOMPONENT_H
