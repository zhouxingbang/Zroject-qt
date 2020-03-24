#ifndef VIDEOPLAYER_H
#define VIDEOPLAYER_H

#include <QQuickItem>

class VideoPlayer : public QQuickItem
{
    Q_OBJECT
public:
    VideoPlayer();

signals:

public slots:

private:
    QSGNode * updatePaintNode(QSGNode *oldNode, UpdatePaintNodeData *data) override;
};

#endif // VIDEOPLAYER_H
