#include "zmlplugin_plugin.h"
#include "videopalyer.h"

#include <qqml.h>

void ZmlpluginPlugin::registerTypes(const char *uri)
{
    // @uri com.zroject.qmlcomponents
    qmlRegisterType<VideoPalyer>(uri, 1, 0, "VideoPalyer");
}

