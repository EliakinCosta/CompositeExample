#include "graphicsrectangle.h"
#include <QDebug>

GraphicsRectangle::GraphicsRectangle(QString componentName)
{
    m_componentName = componentName;
}

void GraphicsRectangle::print()
{
    qDebug() << m_componentName << endl;
}
