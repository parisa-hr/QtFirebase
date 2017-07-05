#ifndef QTFIREBASE_REGISTER_TYPES_H
#define QTFIREBASE_REGISTER_TYPES_H

#include <QtCore/QCoreApplication>
#include <QtQml/QQmlEngine>

#include "qqml.h"

#if defined(QTFIREBASE_BUILD_ALL) || defined(QTFIREBASE_BUILD_ANALYTICS)

#if defined(QTFIREBASE_FAKE_BUILD)
    #include "fake/src/qtfirebaseanalytics.h"
#else
    #include "src/qtfirebaseanalytics.h"
#endif

# endif // QTFIREBASE_BUILD_ANALYTICS

#if defined(QTFIREBASE_BUILD_ALL) || defined(QTFIREBASE_BUILD_ADMOB)

#if defined(QTFIREBASE_FAKE_BUILD)
    #include "fake/src/qtfirebaseadmob.h"
#else
    #include "src/qtfirebaseadmob.h"
#endif

# endif // QTFIREBASE_BUILD_ADMOB


#if defined(QTFIREBASE_BUILD_ALL) || defined(QTFIREBASE_BUILD_REMOTE_CONFIG)

#if defined(QTFIREBASE_FAKE_BUILD)
    #include "fake/src/qtfirebaseremoteconfig.h"
#else
    #include "src/qtfirebaseremoteconfig.h"
#endif

# endif // QTFIREBASE_BUILD_REMOTE_CONFIG


#if defined(QTFIREBASE_BUILD_ALL) || defined(QTFIREBASE_BUILD_AUTH)

#if defined(QTFIREBASE_FAKE_BUILD)
    #include "fake/src/qtfirebaseauth.h"
#else
    #include "src/qtfirebaseauth.h"
#endif

# endif // QTFIREBASE_BUILD_AUTH


#if defined(QTFIREBASE_BUILD_ALL) || defined(QTFIREBASE_BUILD_DATABASE)

#if defined(QTFIREBASE_FAKE_BUILD)
    #include "fake/src/qtfirebasedb.h"
#else
    #include "src/qtfirebasedb.h"
#endif

# endif // QTFIREBASE_BUILD_DATABASE

static void registerQtFirebase() {

    #if defined(QTFIREBASE_BUILD_ALL) || defined(QTFIREBASE_BUILD_ANALYTICS)
    qmlRegisterType<QtFirebaseAnalytics>("QtFirebase", 1, 0, "Analytics");
    #endif

    #if defined(QTFIREBASE_BUILD_ALL) || defined(QTFIREBASE_BUILD_ADMOB)
    qmlRegisterType<QtFirebaseAdMob>("QtFirebase", 1, 0, "AdMob");
    qmlRegisterType<QtFirebaseAdMobRequest>("QtFirebase", 1, 0, "AdMobRequest");
    qmlRegisterType<QtFirebaseAdMobBanner>("QtFirebase", 1, 0, "AdMobBanner");
    qmlRegisterType<QtFirebaseAdMobInterstitial>("QtFirebase", 1, 0, "AdMobInterstitial");
    qmlRegisterType<QtFirebaseAdMobRewardedVideoAd>("QtFirebase", 1, 0, "AdMobRewardedVideoAd");

    #endif

    #if defined(QTFIREBASE_BUILD_ALL) || defined(QTFIREBASE_BUILD_REMOTE_CONFIG)
    qmlRegisterType<QtFirebaseRemoteConfig>("QtFirebase", 1, 0, "RemoteConfig");
    #endif

    #if defined(QTFIREBASE_BUILD_ALL) || defined(QTFIREBASE_BUILD_AUTH)
    qmlRegisterType<QtFirebaseAuth>("QtFirebase", 1, 0, "Auth");
    #endif

    #if defined(QTFIREBASE_BUILD_ALL) || defined(QTFIREBASE_BUILD_DATABASE)
    qmlRegisterType<QtFirebaseDb>("QtFirebase", 1, 0, "DataBase");
    qmlRegisterType<QtFirebaseDbRequest>("QtFirebase", 1, 0, "DbRequest");
    qmlRegisterType<QtFirebaseDataSnapshot>("QtFirebase", 1, 0, "DataSnapshot");
    #endif
}

Q_COREAPP_STARTUP_FUNCTION(registerQtFirebase)

#endif // QTFIREBASE_REGISTER_TYPES_H
