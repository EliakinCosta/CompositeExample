#include "graphicscomponent.h"

void GraphicsComponent::add(GraphicsComponent *component)
{
    Q_ASSERT(false);
}

void GraphicsComponent::remove(GraphicsComponent *component)
{
     Q_ASSERT(false);
}

GraphicsComponent *GraphicsComponent::findChild(int componentIndex)
{
     Q_ASSERT(false);
}

QList<GraphicsComponent *> *GraphicsComponent::findChildren()
{
    Q_ASSERT(false);
}


QString GraphicsComponent::componentName()
{
     return m_componentName;
}
