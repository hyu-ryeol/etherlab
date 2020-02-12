/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Debug interfaces enabled */
/* #undef EC_DEBUG_IF */

/* Debug ring enabled */
/* #undef EC_DEBUG_RING */

/* EoE support enabled */
/* #undef EC_EOE */

/* Use CPU timestamp counter */
/* #undef EC_HAVE_CYCLES */

/* Use vendor id / product code wildcards */
/* #undef EC_IDENT_WILDCARDS */

/* Use loop control registers */
/* #undef EC_LOOP_CONTROL */

/* Max. number of Ethernet devices per master */
#define EC_MAX_NUM_DEVICES 1

/* Allow quick return to OP from SAFEOP+PD_watchdog. */
#define EC_QUICK_OP 1

/* Force refclk to OP */
/* #undef EC_REFCLKOP */

/* Read alias adresses from register */
/* #undef EC_REGALIAS */

/* RTDM interface enabled */
/* #undef EC_RTDM */

/* Output to syslog in RT context */
#define EC_RT_SYSLOG 1

/* Assign SII to PDI */
#define EC_SII_ASSIGN 1

/* Cache the SII images to improve slave re-scan performance in operational
   state. */
#define EC_SII_CACHE 1

/* Direct SII firmware base path */
/* #undef EC_SII_DIR */

/* Allow locally loadable SII */
/* #undef EC_SII_OVERRIDE */

/* Use hrtimer for scheduling */
/* #undef EC_USE_HRTIMER */

/* Use rtmutex for synchronization */
#define EC_USE_RTMUTEX 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "ethercat"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "fp@igh-essen.com"

/* Define to the full name of this package. */
#define PACKAGE_NAME "ethercat"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "ethercat 1.5.2"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "ethercat"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.5.2"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "1.5.2"
