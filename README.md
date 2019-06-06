CoinToPay (2PAY)
===================================

Website: https://cointopay.io

Explorer: https://explorer.cointopay.io

What is CoinToPay?
--------------

CoinToPay is an innovative payment network and a new kind of money with the focus to be usable for all.

For more information, as well as an immediately useable, binary version of
the 2PAY Core software, see https://cointopay.io


Why CoinToPay?
--------------

The main focus at 2PAY lies in the security and ease of use from the coin. Many cryptocurrencies are technically difficult to handle and therefore not interesting for the mass-market. Our goal is to simplify the usage process that it is easy for anyone to own and use 2PAY's. We work hard to ensure the highest standards of security for the Coin and its users. To guarantee the highest standards we work with technologies like Masternode and POS. 

We developed a unique reward system were masternodes can be registered and take advantage from the special reward. 


How does our unique Reward-System works?
--------------

We have a unique Reward System. We offer the first 150 registerd Masternodes a special reward. The special reward is +25% per Block. The +25% reward from each Block will be sent automatically to a central Wallet. From the central Wallet our System will send out the coins continuously to the registered Masternodes. The sum of the +25% 2PAYs, which are on the central wallet, will be divided between the registered Masternodes. Please fill out our Special Reward form and take advantage from the Reward System.

License
-------

2PAY Core is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see http://opensource.org/licenses/MIT.

Development process
-------------------

Developers work in their own trees, then submit pull requests when they think
their feature or bug fix is ready.

If it is a simple/trivial/non-controversial change, then one of the 2PAY
development team members simply pulls it.


The patch will be accepted if there is broad consensus that it is a good thing.
Developers should expect to rework and resubmit patches if the code doesn't
match the project's coding conventions (see [doc/coding.md](doc/coding.md)) or are
controversial.

The `master` branch is regularly built and tested, but is not guaranteed to be
completely stable. [Tags](https://github.com/smartinsider/cointopay/tags) are created
regularly to indicate new official, stable release versions of 2PAY.


Development tips and tricks
---------------------------

**compiling for debugging**

Run configure with the --enable-debug option, then make. Or run configure with
CXXFLAGS="-g -ggdb -O0" or whatever debug flags you need.

**debug.log**

If the code is behaving strangely, take a look in the debug.log file in the data directory;
error and debugging messages are written there.

The -debug=... command-line option controls debugging; running with just -debug will turn
on all categories (and give you a very large debug.log file).

The Qt code routes qDebug() output to debug.log under category "qt": run with -debug=qt
to see it.

**testnet and regtest modes**

Run with the -testnet option to run with "play 2PAYs" on the test network, if you
are testing multi-machine code that needs to operate across the internet.

If you are testing something that can run on one machine, run with the -regtest option.
In regression test mode, blocks can be created on-demand; see qa/rpc-tests/ for tests
that run in -regtest mode.

**DEBUG_LOCKORDER**

2PAY Core is a multithreaded application, and deadlocks or other multithreading bugs
can be very difficult to track down. Compiling with -DDEBUG_LOCKORDER (configure
CXXFLAGS="-DDEBUG_LOCKORDER -g") inserts run-time checks to keep track of which locks
are held, and adds warnings to the debug.log file if inconsistencies are detected.

**Сopyright**
------------
  - Copyright (c) 2009-2010 Satoshi Nakamoto
  - Copyright (c) 2009-2014 The Bitcoin developers
  - Copyright (c) 2015-2017 The PIVX developers
  - Copyright (c) 2017-2018 The HUZU developers
  - Copyright (c) 2018 The 2PAY developers
  - Distributed under the MIT/X11 software license, see the accompanying
  - file COPYING or http://www.opensource.org/licenses/mit-license.php.

