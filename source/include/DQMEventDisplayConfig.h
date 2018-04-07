#ifndef DQMOnlineConfig_H
#define DQMOnlineConfig_H

// version macros
#define DQMOnline_MAJOR_VERSION 0
#define DQMOnline_MINOR_VERSION 0
#define DQMOnline_PATCH_LEVEL 0

#define DQMOnline_VERSION_STR "0.0.0"

#define DQMOnline_VERSION_GE( MAJV , MINV , PLEV )  \
     ( (DQMOnline_MAJOR_VERSION > MAJV) || ( (DQMOnline_MAJOR_VERSION == MAJV) && (DQMOnline_MINOR_VERSION > MINV) ) \
  || ( (DQMOnline_MAJOR_VERSION == MAJV) && (DQMOnline_MINOR_VERSION == MINV) && (DQMOnline_PATCH_LEVEL >= PLEV) ) )

// project source dir
#define DQMOnline_DIR "/home/rete/soft/dqm4hep-event-display"

#endif // DQMOnlineConfig_H
