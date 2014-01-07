// Copyright (c) 2009-2012 The Bitcoin developers
// Copyright (c) 2011-2012 Litecoin Developers
// Copyright (c) 2013 EarthCoin Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <boost/assign/list_of.hpp> // for 'map_list_of()'
#include <boost/foreach.hpp>

#include "checkpoints.h"

#include "main.h"
#include "uint256.h"

namespace Checkpoints
{
    typedef std::map<int, uint256> MapCheckpoints;

	// no checkpoint now, can be added in later releases
    static MapCheckpoints mapCheckpoints =
            boost::assign::map_list_of
            (   100, uint256("0xc3d91cb4726610d422f8652a5a7cc21bd42e1b8009c00462081c81316d9abad6"))
            (  1000, uint256("0xea7dd253f3ef1e1353728e92fa637368244ffcf46de9da76f57ed019182fb92f"))
            ( 10000, uint256("0x7b50ea3b42e613e65ec2aca6797a5780e1c545a617e4a610577fb4b040f0035b"))
			( 20000, uint256("0x2d3b6d8958a8546490b00d762bfcab3fb377d767d715452b90812328a0af8991"))
			( 23700, uint256("0xed051b0bfdd51cb23488ddfd0279cedc22f85f10d18afedf31c14a0d234e8cf8"))
			;


    bool CheckBlock(int nHeight, const uint256& hash)
    {
        if (fTestNet) return true; // Testnet has no checkpoints

        MapCheckpoints::const_iterator i = mapCheckpoints.find(nHeight);
        if (i == mapCheckpoints.end()) return true;
        return hash == i->second;
    }

    int GetTotalBlocksEstimate()
    {
        if (fTestNet) return 0;
	
        return mapCheckpoints.rbegin()->first;
    }

    CBlockIndex* GetLastCheckpoint(const std::map<uint256, CBlockIndex*>& mapBlockIndex)
    {
        if (fTestNet) return NULL;
	
        BOOST_REVERSE_FOREACH(const MapCheckpoints::value_type& i, mapCheckpoints)
        {
            const uint256& hash = i.second;
            std::map<uint256, CBlockIndex*>::const_iterator t = mapBlockIndex.find(hash);
            if (t != mapBlockIndex.end())
                return t->second;
        }
		
        return NULL;
    }
}
