#include <QtGlobal>
// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *pepperscore_strings[] = {QT_TRANSLATE_NOOP("pepperscore-core", "Pepperscore version"),
QT_TRANSLATE_NOOP("pepperscore-core", "Usage:"),
QT_TRANSLATE_NOOP("pepperscore-core", "Send command to -server or pepperscored"),
QT_TRANSLATE_NOOP("pepperscore-core", "List commands"),
QT_TRANSLATE_NOOP("pepperscore-core", "Get help for a command"),
QT_TRANSLATE_NOOP("pepperscore-core", "Options:"),
QT_TRANSLATE_NOOP("pepperscore-core", "This help message"),
QT_TRANSLATE_NOOP("pepperscore-core", "Specify configuration file (default: pepperscore.conf)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Specify pid file (default: pepperscored.pid)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Specify data directory"),
QT_TRANSLATE_NOOP("pepperscore-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Set database cache size in megabytes (default: 25)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Set database disk log size in megabytes (default: 100)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Specify connection timeout in milliseconds (default: 5000)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("pepperscore-core", "Use proxy to reach tor hidden services (default: same as -proxy)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("pepperscore-core", "Listen for connections on <port> (default: 16000 or testnet: 25798)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Maintain at most <n> connections to peers (default: 125)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("pepperscore-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("pepperscore-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("pepperscore-core", "Only connect to nodes in network <net> (IPv4, IPv6 or Tor)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Bind to given address. Use [host]:port notation for IPv6"),
QT_TRANSLATE_NOOP("pepperscore-core", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Always query for peer addresses via DNS lookup (default: 0)"),
QT_TRANSLATE_NOOP("pepperscore-core", ""
"Sync time with other nodes. Disable if time on your system is precise e.g. "
"syncing with NTP (default: 1)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Threshold for disconnecting misbehaving peers (default: 100)"),
QT_TRANSLATE_NOOP("pepperscore-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: "
"86400)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: 5000)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: 1000)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Fee per KB to add to transactions you send"),
QT_TRANSLATE_NOOP("pepperscore-core", ""
"When creating transactions, ignore inputs with value less than this "
"(default: 0.01)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("pepperscore-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("pepperscore-core", "Use the test network"),
QT_TRANSLATE_NOOP("pepperscore-core", ""
"Output debugging information (default: 0, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("pepperscore-core", "If <category> is not supplied, output all debugging information."),
QT_TRANSLATE_NOOP("pepperscore-core", "<category> can be:"),
QT_TRANSLATE_NOOP("pepperscore-core", "Prepend debug output with timestamp"),
QT_TRANSLATE_NOOP("pepperscore-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Send trace/debug info to console instead of debug.log file"),
QT_TRANSLATE_NOOP("pepperscore-core", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly. This is intended for regression testing tools and app "
"development."),
QT_TRANSLATE_NOOP("pepperscore-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("pepperscore-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("pepperscore-core", ""
"Listen for JSON-RPC connections on <port> (default: 16001 or testnet: 25799)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Allow JSON-RPC connections from specified IP address"),
QT_TRANSLATE_NOOP("pepperscore-core", "Send commands to node running on <ip> (default: 127.0.0.1)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Wait for RPC server to start"),
QT_TRANSLATE_NOOP("pepperscore-core", "Set the number of threads to service RPC calls (default: 4)"),
QT_TRANSLATE_NOOP("pepperscore-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("pepperscore-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Require a confirmations for change (default: 0)"),
QT_TRANSLATE_NOOP("pepperscore-core", ""
"Execute command when a relevant alert is received (%s in cmd is replaced by "
"message)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("pepperscore-core", "Set key pool size to <n> (default: 100)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("pepperscore-core", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("pepperscore-core", "How many blocks to check at startup (default: 500, 0 = all)"),
QT_TRANSLATE_NOOP("pepperscore-core", "How thorough the block verification is (0-6, default: 1)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Imports blocks from external blk000?.dat file"),
QT_TRANSLATE_NOOP("pepperscore-core", "Keep at most <n> MiB of unconnectable blocks in memory (default: %u)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Block creation options:"),
QT_TRANSLATE_NOOP("pepperscore-core", "Set minimum block size in bytes (default: 0)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Set maximum block size in bytes (default: 250000)"),
QT_TRANSLATE_NOOP("pepperscore-core", "SSL options: (see the Pepperscore Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Use OpenSSL (https) for JSON-RPC connections"),
QT_TRANSLATE_NOOP("pepperscore-core", "Server certificate file (default: server.cert)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Server private key (default: server.pem)"),
QT_TRANSLATE_NOOP("pepperscore-core", ""
"Acceptable ciphers (default: TLSv1.2+HIGH:TLSv1+HIGH:!SSLv2:!aNULL:!eNULL:!"
"3DES:@STRENGTH)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Warning: Deprecated argument -debugnet ignored, use -debug=net"),
QT_TRANSLATE_NOOP("pepperscore-core", ""
"Error: Unsupported argument -socks found. Setting SOCKS version isn't "
"possible anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("pepperscore-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("pepperscore-core", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("pepperscore-core", "Invalid amount for -mininput=<amount>: '%s'"),
QT_TRANSLATE_NOOP("pepperscore-core", "Initialization sanity check failed. Pepperscore is shutting down."),
QT_TRANSLATE_NOOP("pepperscore-core", "Wallet %s resides outside data directory %s."),
QT_TRANSLATE_NOOP("pepperscore-core", ""
"Cannot obtain a lock on data directory %s. Pepperscore is probably already "
"running."),
QT_TRANSLATE_NOOP("pepperscore-core", "Verifying database integrity..."),
QT_TRANSLATE_NOOP("pepperscore-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("pepperscore-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("pepperscore-core", "wallet.dat corrupt, salvage failed"),
QT_TRANSLATE_NOOP("pepperscore-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("pepperscore-core", "Invalid -proxy address: '%s'"),
QT_TRANSLATE_NOOP("pepperscore-core", "Invalid -tor address: '%s'"),
QT_TRANSLATE_NOOP("pepperscore-core", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("pepperscore-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("pepperscore-core", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("pepperscore-core", "Invalid amount for -reservebalance=<amount>"),
QT_TRANSLATE_NOOP("pepperscore-core", "Loading block index..."),
QT_TRANSLATE_NOOP("pepperscore-core", "Error loading block database"),
QT_TRANSLATE_NOOP("pepperscore-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("pepperscore-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("pepperscore-core", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("pepperscore-core", "Error loading wallet.dat: Wallet requires newer version of Pepperscore"),
QT_TRANSLATE_NOOP("pepperscore-core", "Wallet needed to be rewritten: restart Pepperscore to complete"),
QT_TRANSLATE_NOOP("pepperscore-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("pepperscore-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("pepperscore-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("pepperscore-core", "Rescanning..."),
QT_TRANSLATE_NOOP("pepperscore-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("pepperscore-core", "Done loading"),
QT_TRANSLATE_NOOP("pepperscore-core", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("pepperscore-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("pepperscore-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"mining or merchant applications"),
QT_TRANSLATE_NOOP("pepperscore-core", "Error"),
QT_TRANSLATE_NOOP("pepperscore-core", "Warning"),
QT_TRANSLATE_NOOP("pepperscore-core", "Information"),
QT_TRANSLATE_NOOP("pepperscore-core", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong Pepperscore will not work properly."),
QT_TRANSLATE_NOOP("pepperscore-core", ""
"Unable to bind to %s on this computer. Pepperscore is probably already running."),
QT_TRANSLATE_NOOP("pepperscore-core", "Unable to bind to %s on this computer (bind returned error %d, %s)"),
QT_TRANSLATE_NOOP("pepperscore-core", "Error: Wallet locked, unable to create transaction!"),
QT_TRANSLATE_NOOP("pepperscore-core", "Error: Wallet unlocked for staking only, unable to create transaction."),
QT_TRANSLATE_NOOP("pepperscore-core", ""
"Error: This transaction requires a transaction fee of at least %s because of "
"its amount, complexity, or use of recently received funds!"),
QT_TRANSLATE_NOOP("pepperscore-core", "Error: Transaction creation failed!"),
QT_TRANSLATE_NOOP("pepperscore-core", "Sending..."),
QT_TRANSLATE_NOOP("pepperscore-core", ""
"Error: The transaction was rejected! This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("pepperscore-core", "Invalid amount"),
QT_TRANSLATE_NOOP("pepperscore-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("pepperscore-core", ""
"You must set rpcpassword=<password> in the configuration file:\n"
"%s\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions."),
QT_TRANSLATE_NOOP("pepperscore-core", "To use the %s option"),
QT_TRANSLATE_NOOP("pepperscore-core", ""
"%s, you must set a rpcpassword in the configuration file:\n"
"%s\n"
"It is recommended you use the following random password:\n"
"rpcuser=pepperscorerpc\n"
"rpcpassword=%s\n"
"(you do not need to remember this password)\n"
"The username and password MUST NOT be the same.\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions.\n"
"It is also recommended to set alertnotify so you are notified of problems;\n"
"for example: alertnotify=echo %%s | mail -s \"Pepperscore Alert\" admin@foo."
"com\n"),
QT_TRANSLATE_NOOP("pepperscore-core", ""
"An error occurred while setting up the RPC port %u for listening on IPv6, "
"falling back to IPv4: %s"),
QT_TRANSLATE_NOOP("pepperscore-core", ""
"An error occurred while setting up the RPC port %u for listening on IPv4: %s"),
};
