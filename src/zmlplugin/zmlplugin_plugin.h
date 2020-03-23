#ifndef ZMLPLUGIN_PLUGIN_H
#define ZMLPLUGIN_PLUGIN_H

#include <QQmlExtensionPlugin>

class ZmlpluginPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    void registerTypes(const char *uri) override;
};

#endif // ZMLPLUGIN_PLUGIN_H
