

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *SmartGreenCoin_strings[] = {
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"An error occurred while setting up the RPC address %s port %u for listening: "
"%s"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Bind to given address to listen for JSON-RPC connections. Use [host]:port "
"notation for IPv6. This option can be specified multiple times (default: "
"bind to all interfaces)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Cannot obtain a lock on data directory %s. SmartGreenCoin Core is probably already "
"running."),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Continuously rate-limit free transactions to <n>*1000 bytes per minute "
"(default:%u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Disable all SmartGreenCoin specific functionality (Masternodes, Obfuscation, SwiftX) "
"(0-1, default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Enable spork administration functionality with the appropriate private key."),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Enable swifttx, show confirmations for locked transactions (bool, default: "
"%s)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Enable use of automated obfuscation for funds stored in this wallet (0-1, "
"default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly."),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Error: Unsupported argument -socks found. Setting SOCKS version isn't "
"possible anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Fees (in SmartGreenCoin/Kb) smaller than this are considered zero fee for relaying "
"(default: %s)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Fees (in SmartGreenCoin/Kb) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Flush database activity from memory pool to disk log every <n> megabytes "
"(default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Found unconfirmed denominated outputs, will wait till they confirm to "
"continue."),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"How thorough the block verification of -checkblocks is (0-4, default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"In this mode -genproclimit controls how many blocks are generated "
"immediately."),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Keep the specified amount available for spending at all times (default: 0)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Log transaction priority and fee per kB when mining blocks (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Maximum total fees to use in a single wallet transaction, setting too low "
"may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Obfuscation uses exact denominated amounts to send funds, you might simply "
"need to anonymize some more coins."),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Provide liquidity to Obfuscation by infrequently mixing coins on a continual "
"basis (0-100, default: %u, 1=very frequent, high fees, 100=very infrequent, "
"low fees)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Require high priority for relaying free or low-fee transactions (default:%u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Send trace/debug info to console instead of debug.log file (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Set the number of threads for coin generation if enabled (-1 = all cores, "
"default: %d)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Show N confirmations for a successfully locked transaction (0-9999, default: "
"%u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Support filtering of blocks and transaction with bloom filters (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"SwiftX requires inputs with at least 6 confirmations, you might need to "
"wait a few minutes and try again."),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"This is a pre-release test build - use at your own risk - do not use for "
"staking or merchant applications!"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
"written by Eric Young and UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"To use SmartGreenCoind, or the -server option to SmartGreenCoin-qt, you must set an rpcpassword "
"in the configuration file:\n"
"%s\n"
"It is recommended you use the following random password:\n"
"rpcuser=SmartGreenCoinrpc\n"
"rpcpassword=%s\n"
"(you do not need to remember this password)\n"
"The username and password MUST NOT be the same.\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions.\n"
"It is also recommended to set alertnotify so you are notified of problems;\n"
"for example: alertnotify=echo %%s | mail -s \"SmartGreenCoin Alert\" admin@foo.com\n"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Unable to bind to %s on this computer. SmartGreenCoin Core is probably already running."),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Unable to locate enough Obfuscation denominated funds for this transaction."),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Unable to locate enough Obfuscation non-denominated funds for this "
"transaction that are not equal 1000/3000/5000 SmartGreenCoin."),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Unable to locate enough funds for this transaction that are not equal 1000/3000/5000 "
"SmartGreenCoin."),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Warning: -maxtxfee is set very high! Fees this large could be paid on a "
"single transaction."),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong SmartGreenCoin Core will not work properly."),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Whitelist peers connecting from the given netmask or IP address. Can be "
"specified multiple times."),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("SmartGreenCoin", ""
"You must specify a masternodeprivkey in the configuration. Please see "
"documentation for help."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "(59235 could be used only on mainnet)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "(default: %s)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "(default: 1)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "(must be 59235 for mainnet)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "<category> can be:"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Acceptable ciphers (default: %s)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Already have that input."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Attempt to force blockchain corruption recovery"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Block creation options:"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Can't denominate: no compatible inputs left."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Can't find random Masternode."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Can't mix while sync in progress."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Cannot resolve -whitebind address: '%s'"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Cannot write default address"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Collateral not valid."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Connection options:"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Copyright (C) 2009-%i The Bitcoin Core Developers"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Copyright (C) 2014-%i The Dash Core Developers"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Copyright (C) 2015-%i The PIVX Core Developers"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Copyright (C) 2015-%i The SmartGreenCoin Core Developers"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Could not parse -rpcbind value %s as network address"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Could not parse masternode.conf"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Disable safemode, override a real safe mode event (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Display the stake modifier calculations in the debug.log file."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Display verbose coin stake messages in the debug.log file."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Done loading"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Enable publish hash block in <address>"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Enable publish hash transaction (locked via SwiftX) in <address>"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Enable publish hash transaction in <address>"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Enable publish raw block in <address>"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Enable publish raw transaction (locked via SwiftX) in <address>"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Enable publish raw transaction in <address>"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Enable staking functionality (0-1, default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Enable the client to act as a masternode (0-1, default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Entries are full."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Error connecting to Masternode."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Error initializing block database"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Error loading block database"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Error loading wallet.dat: Wallet requires newer version of SmartGreenCoin Core"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Error opening block database"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Error recovering public key."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Error"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Error: A fatal internal error occured, see debug.log for details"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Error: Can't select current denominated inputs"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Error: Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Error: Wallet locked, unable to create transaction!"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Error: You already have pending entries in the Obfuscation pool"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Failed to read block"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Fee (in SmartGreenCoin/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Finalizing transaction."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Force safe mode (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Found enough users, signing ( waiting %s )"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Found enough users, signing ..."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Generate coins (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "If <category> is not supplied, output all debugging information."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Importing..."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Imports blocks from external blk000??.dat file"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Incompatible mode."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Incompatible version."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Information"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Initialization sanity check failed. SmartGreenCoin Core is shutting down."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Input is not valid."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Insufficient funds."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Invalid -onion address or hostname: '%s'"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Invalid amount for -maxtxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Invalid amount for -minrelaytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Invalid amount for -mintxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Invalid amount for -reservebalance=<amount>"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Invalid masternodeprivkey. Please see documenation."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Invalid port detected in masternode.conf"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Invalid private key."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Invalid script detected."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Keep N SmartGreenCoin anonymized (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Last Obfuscation was too recent."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Last successful Obfuscation action was too recent."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Limit size of signature cache to <n> entries (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Line: %d"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Loading addresses..."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Loading block index..."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Loading masternode cache..."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Loading masternode payment cache..."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Loading wallet... (%3.2f %%)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Loading wallet..."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Lock is already in place."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Lock masternodes from masternode configuration file (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Maintain at most <n> connections to peers (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Masternode options:"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Masternode queue is full."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Masternode:"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Missing input transaction information."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Mixing in progress..."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "No Masternodes detected."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "No compatible Masternode found."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "No funds detected in need of denominating."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "No matching denominations found for mixing."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Node relay options:"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Non-standard public key detected."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Not compatible with existing transactions."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Not in the Masternode list."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Number of automatic wallet backups (default: 10)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Obfuscation is idle."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Obfuscation options:"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Obfuscation request complete:"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Obfuscation request incomplete:"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Only accept block chain matching built-in checkpoints (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Options:"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Print version and exit"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "RPC SSL options: (see the Bitcoin Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "RPC server options:"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "RPC support for HTTP persistent connections (default: %d)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Randomly drop 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Randomly fuzz 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Rebuild block chain index from current blk000??.dat files"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Receive and display P2P network alerts (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Rescanning..."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Run a thread to flush wallet periodically (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Send transactions as zero-fee transactions if possible (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Server certificate file (default: %s)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Server private key (default: %s)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Session not complete!"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Session timed out."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Set external address:port to get to this masternode (example: %s)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Set minimum block size in bytes (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Set the masternode private key"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Sets the DB_PRIVATE flag in the wallet db environment (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Signing failed."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Signing timed out."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Signing transaction failed"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Specify data directory"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Specify masternode configuration file (default: %s)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Specify your own public address"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Staking options:"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Stop running after importing blocks from disk (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Submitted following entries to masternode: %u / %d"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Submitted to masternode, waiting for more entries ( %u / %d ) %s"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Submitted to masternode, waiting in queue %s"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "SwiftX options:"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Synchronization failed"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Synchronization finished"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Synchronization pending..."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Synchronizing masternode winners..."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Synchronizing masternodes..."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Synchronizing sporks..."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "This help message"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "This is experimental software."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "This is intended for regression testing tools and app development."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "This is not a Masternode."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Transaction amount too small"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Transaction created successfully."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Transaction fees are too high."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Transaction not valid."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Transaction too large"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Transmitting final transaction."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Unknown state: id = %u"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Use N separate masternodes to anonymize funds  (2-8, default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Use OpenSSL (https) for JSON-RPC connections"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Use the test network"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Value more than Obfuscation pool maximum allows."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Verifying blocks..."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Verifying wallet..."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Wallet is locked."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Wallet needed to be rewritten: restart SmartGreenCoin Core to complete"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Wallet options:"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Wallet window title"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Warning"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Warning: Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Warning: Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Will retry..."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Your entries added successfully."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Your transaction was accepted into the pool!"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("SmartGreenCoin", "ZeroMQ notification options:"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "on startup"),
QT_TRANSLATE_NOOP("SmartGreenCoin", "wallet.dat corrupt, salvage failed"),
};
