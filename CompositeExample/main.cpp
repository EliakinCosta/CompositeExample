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
    GraphicsComponent *component2 = new GraphicsComposite("Composite2");
    GraphicsComponent *text2 = new GraphicsText("TextLeaf2");

    component->add(text);
    component->add(rectangle);
    component2->add(text2);
    component2->add(component);

    component2->print();

    return a.exec();
}
