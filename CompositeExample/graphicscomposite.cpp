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

void GraphicsComposite::remove(GraphicsComponent *component)
{
    m_graphics->removeAll(component);
}

GraphicsComponent *GraphicsComposite::findChild(int componentIndex)
{
    return m_graphics->at(componentIndex);
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
