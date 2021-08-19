// Copyright (c) 2012-2014 The Bitcoin Core developers
// Copyright (c) 2014-2017 The PESPCOIN Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

/**
 * network protocol versioning
 */


static const int PROTOCOL_VERSION = 80245;

//! initial proto version, to be increased after version/verack negotiation
static const int INIT_PROTO_VERSION = 239;

//! In this version, 'getheaders' was introduced.
static const int GETHEADERS_VERSION = 80107;

//! disconnect from peers older than this proto version
static const int MIN_PEER_PROTO_VERSION =80243;

//! nTime field added to CAddress, starting with this version;
//! if possible, avoid requesting addresses nodes older than this
static const int CADDR_TIME_VERSION = 31432;

//! BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 60030;

//! "mempool" command, enhanced "getdata" behavior starts with this version
static const int MEMPOOL_GD_VERSION = 60032;

//! "filter*" commands are disabled without NODE_BLOOM after and including this version
static const int NO_BLOOM_VERSION = 80231;

//! "sendheaders" command and announcing blocks with headers starts with this version
static const int SENDHEADERS_VERSION = 80231;

//! DIP0001 was activated in this version
static const int DIP0001_PROTOCOL_VERSION = 80238;

//! short-id-based block download starts with this version
static const int SHORT_IDS_BLOCKS_VERSION = 80239;

#endif // BITCOIN_VERSION_H