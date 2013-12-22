EarthCoin (EAC) - EarthCoin is a new generation of scrypt coin that is descendant of Litecoin. Like Litecoin it uses scrypt as a proof of work scheme.

EarthCoin uses yearly period. Start with 10000 coins per block, it varies in a sine curve with amplitude of 2000, with a period of one year (like the Earth moving around the Sun). This means that you start with 10000 coins, and it adjust at each block, reaches maximum of 12000 coins per block after about 3 months, then going down gradually, reaches 10000 coins per block again at about 6 months, then going down further, reaches the minimum point of 8000 coins per block at about 9 months, then start to going up, and return to 10000 coins per block at one year, before cutting half in payout.

EarthCoin provides superblock Awards. The following super reward zones are added:

Every 14 days there will be one day with X2 payout.
Every 31 days there will be one day with X5 payout.

Day 1 - Day 3 are special super rewards days to celebrate the launch of the coin, and provide incentive to the early adopters.

Day 1: X5 payout
Day 2: X3 payout
Day 3: X2 payout

Other Specifications:
	- 60 seconds block target
	- Difference retargets each block
	- Total coins will be 13.5 billion coins
	- 5 confirmations for transaction
	- 50 confirmations for minted blocks
	- support transaction message
	- normal block on average 10000 coins per block, varies seasonly
	- The block payout will be halved every year, minimum payout 1 coin per block

	- The default ports are 15677 (Connect) and 15678 (RPC)



Development process
===================

Developers work in their own trees, then submit pull requests when
they think their feature or bug fix is ready.

The patch will be accepted if there is broad consensus that it is a
good thing.  Developers should expect to rework and resubmit patches
if they don't match the project's coding conventions (see coding.txt)
or are controversial.

The master branch is regularly built and tested, but is not guaranteed
to be completely stable. Tags are regularly created to indicate new
official, stable release versions of Elephant coin.

Feature branches are created when there are major new features being
worked on by several people.

From time to time a pull request will become outdated. If this occurs, and
the pull is no longer automatically mergeable; a comment on the pull will
be used to issue a warning of closure. The pull will be closed 15 days
after the warning if action is not taken by the author. Pull requests closed
in this manner will have their corresponding issue labeled 'stagnant'.

Issues with no commits will be given a similar warning, and closed after
15 days from their last activity. Issues closed in this manner will be 
labeled 'stale'. 
