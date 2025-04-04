#ifndef REPLACER_H
#define REPLACER_H

#include <QVector2D>

#include "client.h"
#include <vssref_placement.pb.h>
#include <vssref_common.pb.h>

// Class used to place robots at given coordinates. Part of VSSRef.
class ReplacerClient : public Client
{
public:
    using Client::Client;
    void setTeamColor(VSSRef::Color teamColor);
    void placeRobot(quint8 playerId, float posX, float posY, float orientation);
    void sendFrame();

private:
    // Internal frame management
    QHash<quint8, QPair<QVector2D, float>> _robots;
    VSSRef::Color _teamColor;
    QMutex _frameMutex;

    // Network management
    void connectToNetwork();
    void disconnectFromNetwork();

    // Internal run
    void runClient();
};

#endif // REPLACERCLIENT_H
