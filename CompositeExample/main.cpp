#include <QCoreApplication>
#include "graphicscomponent.h"
#include "graphicscomposite.h"
#include "graphicsrectangle.h"
#include "graphicstext.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    GraphicsComponent *component = new GraphicsComposite("Composite1");
    GraphicsComponent *text = new GraphicsText("TextLeaf");
    GraphicsComponent *rectangle = new GraphicsRectangle("RectangleLeaf");

    component->add(text);
    component->add(rectangle);

    component->print();

    return a.exec();
}
