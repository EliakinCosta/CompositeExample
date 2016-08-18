#include "graphicstext.h"
#include <QDebug>

GraphicsText::GraphicsText(QString componentName)
{
     m_componentName = componentName;
}

void GraphicsText::print()
{
    qDebug() << m_componentName << endl;
}


