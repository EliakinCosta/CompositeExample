#include "graphicscomposite.h"
#include "graphicscomponent.h"
#include <QList>
#include <QString>

GraphicsComposite::GraphicsComposite(QString componentName):m_graphics(new QList<GraphicsComponent *>())
{
    m_componentName = componentName;
}

GraphicsComposite::~GraphicsComposite()
{
    qDeleteAll(m_graphics->begin(), m_graphics->end());
}

void GraphicsComposite::add(GraphicsComponent *component)
{
    m_graphics->append(component);
}

void GraphicsComposite::remove(QString componentName)
{
    m_graphics->removeAll(this->componentByName(componentName));
}

GraphicsComponent *GraphicsComposite::findChild(QString componentName)
{
    return this->componentByName(componentName);
}

QList<GraphicsComponent *> *GraphicsComposite::findChildren()
{
    return m_graphics;
}

void GraphicsComposite::print()
{
    foreach (GraphicsComponent *component, *m_graphics)
    {
        component->print();
    }
}

GraphicsComponent *GraphicsComposite::componentByName(QString componentName)
{
    foreach (GraphicsComponent *component, *m_graphics)
    {
        if(component->componentName()==componentName)
        {
            return component;
        }
    }
    return NULL;
}
