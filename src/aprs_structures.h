#ifndef _APRS_STRUCTURES_H_
#define _APRS_STRUCTURES_H_

// (C) 2023 OE1KBC Kurt Baumann, OE1KFR Rainer 
// (C) 2016, 2017, 2018, 2018, 2019, 2020 OE1KBC Kurt Baumann
//
// This code is not for distribution and may not be published!
// Vervielfältigung und Veröffentlichung des Codes sind nicht gestattet!
// Lizenz: kein Open Source.
// zugelassen ausschließlich für OE1KBC, OE1KFR
// alle anderen Finger weg !
// 20230326: Version 4.00: START

#include <Arduino.h>

// APRS protokol

struct aprsMessage
{
    uint16_t msg_len;
    char payload_type;
    unsigned int msg_id;

    uint8_t max_hop;
    bool  msg_server;
    bool  msg_track;
    bool  msg_app_offline;
    bool  msg_mesh;

    String msg_source_path;
    String msg_source_call;
    String msg_source_last;
    String msg_destination_path;
    String msg_destination_call;
    String msg_destination_last;
    String msg_payload;
    String msg_gateway_call;
    unsigned int msg_fcs;
    uint8_t msg_source_hw;
    uint8_t msg_source_mod;
    uint8_t msg_source_fw_version;
    char msg_source_fw_sub_version;
    uint8_t msg_last_hw;
    uint8_t msg_last_path_cnt;
};

struct aprsPosition
{
    String pos_atxt;
    
    double lat;
    char lat_c;
    double lon;
    char lon_c;
    int alt;
    int bat;
    double lat_d;
    double lon_d;
    char aprs_group;
    char aprs_symbol;

    // wx
    float press;
    float hum;
    float temp;
    float temp2;
    int qfe;
    float qnh;
    float gasres;
    float co2;

    // softser
    float softser1; // Pegel
    float softser2; // Temp
    float softser3; // Volt
};

struct mheardLine
{
    String mh_callsign;
    String mh_date;
    String mh_time;
    String mh_sourcecallsign;
    String mh_sourcepath;
    String mh_destinationpath;
    char mh_payload_type;
    uint8_t mh_hw;
    uint8_t mh_mod;
    int16_t mh_rssi;
    int8_t mh_snr;
    double mh_dist;
    uint8_t mh_path_len;
    uint8_t mh_mesh;
};

#endif // _APRS_STRUCTURES_H_
