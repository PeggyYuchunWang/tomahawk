/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -p GnomeSettingsDaemonMediaKeysProxy -c GnomeSettingsDaemonMediaKeysProxy GnomeSettingsDaemonMediaKeys.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef GNOMESETTINGSDAEMONMEDIAKEYSPROXY_H_1369414808
#define GNOMESETTINGSDAEMONMEDIAKEYSPROXY_H_1369414808

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.gnome.SettingsDaemon.MediaKeys
 */
class GnomeSettingsDaemonMediaKeysProxy: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.gnome.SettingsDaemon.MediaKeys"; }

public:
    GnomeSettingsDaemonMediaKeysProxy(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~GnomeSettingsDaemonMediaKeysProxy();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> GrabMediaPlayerKeys(const QString &application, uint time)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(application) << QVariant::fromValue(time);
        return asyncCallWithArgumentList(QLatin1String("GrabMediaPlayerKeys"), argumentList);
    }

    inline QDBusPendingReply<> ReleaseMediaPlayerKeys(const QString &application)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(application);
        return asyncCallWithArgumentList(QLatin1String("ReleaseMediaPlayerKeys"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void MediaPlayerKeyPressed(const QString &in0, const QString &in1);
};

namespace org {
  namespace gnome {
    namespace SettingsDaemon {
      typedef ::GnomeSettingsDaemonMediaKeysProxy MediaKeys;
    }
  }
}
#endif