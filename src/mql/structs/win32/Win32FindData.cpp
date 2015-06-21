/**
 * Win32 structure WIN32_FIND_DATAA
 *
 *
 * struct WIN32_FIND_DATAA {
 *    DWORD    dwFileAttributes;          //   4
 *    FILETIME ftCreationTime;            //   8
 *    FILETIME ftLastAccessTime;          //   8
 *    FILETIME ftLastWriteTime;           //   8
 *    DWORD    nFileSizeHigh;             //   4
 *    DWORD    nFileSizeLow;              //   4
 *    DWORD    dwReserved0;               //   4
 *    DWORD    dwReserved1;               //   4
 *    CHAR     cFileName[MAX_PATH];       // 260
 *    CHAR     cAlternateFileName[14];    //  14
 * } wfd;                                 // 318 byte
 *
 *
 * MQL-Importdeklarationen:
 * ------------------------
 * int    wfd_FileAttributes            (/*WIN32_FIND_DATA/int wfd[]);
 *        ...
 *        ...
 *        ...
 *        ...
 *        ...
 *        ...
 *        ...
 * string wfd_FileName                  (/*WIN32_FIND_DATA/int wfd[]);
 * string wfd_AlternateFileName         (/*WIN32_FIND_DATA/int wfd[]);
 *
 *
 * bool   wfd_FileAttribute_ReadOnly    (/*WIN32_FIND_DATA/int wfd[]);
 * bool   wfd_FileAttribute_Hidden      (/*WIN32_FIND_DATA/int wfd[]);
 * bool   wfd_FileAttribute_System      (/*WIN32_FIND_DATA/int wfd[]);
 * bool   wfd_FileAttribute_Directory   (/*WIN32_FIND_DATA/int wfd[]);
 * bool   wfd_FileAttribute_Archive     (/*WIN32_FIND_DATA/int wfd[]);
 * bool   wfd_FileAttribute_Device      (/*WIN32_FIND_DATA/int wfd[]);
 * bool   wfd_FileAttribute_Normal      (/*WIN32_FIND_DATA/int wfd[]);
 * bool   wfd_FileAttribute_Temporary   (/*WIN32_FIND_DATA/int wfd[]);
 * bool   wfd_FileAttribute_SparseFile  (/*WIN32_FIND_DATA/int wfd[]);
 * bool   wfd_FileAttribute_ReparsePoint(/*WIN32_FIND_DATA/int wfd[]);
 * bool   wfd_FileAttribute_Compressed  (/*WIN32_FIND_DATA/int wfd[]);
 * bool   wfd_FileAttribute_Offline     (/*WIN32_FIND_DATA/int wfd[]);
 * bool   wfd_FileAttribute_NotIndexed  (/*WIN32_FIND_DATA/int wfd[]);
 * bool   wfd_FileAttribute_Encrypted   (/*WIN32_FIND_DATA/int wfd[]);
 * bool   wfd_FileAttribute_Virtual     (/*WIN32_FIND_DATA/int wfd[]);
 */
#include "stdafx.h"
#include "global.h"
#include "Expander.h"


/**
 * Gibt die Dateiattribute eines WIN32_FIND_DATAA-Structs zur�ck.
 *
 * @param  WIN32_FIND_DATAA* st
 *
 * @return DWORD
 */
DWORD WINAPI wfd_FileAttributes(const WIN32_FIND_DATAA* wfd) {
   if ((uint)wfd < MIN_VALID_POINTER) return(debug("invalid parameter wfd = 0x%p (not a valid pointer)", wfd));
   return(wfd->dwFileAttributes);
   #pragma EXPORT
}


/**
 * Ob das ReadOnly-Dateiattribut eines WIN32_FIND_DATAA-Structs gesetzt ist.
 *
 * @param  WIN32_FIND_DATAA* st
 *
 * @return BOOL
 */
BOOL WINAPI wfd_FileAttribute_ReadOnly(const WIN32_FIND_DATAA* wfd) {
   if ((uint)wfd < MIN_VALID_POINTER) return(debug("invalid parameter wfd = 0x%p (not a valid pointer)", wfd));
   return(wfd->dwFileAttributes & FILE_ATTRIBUTE_READONLY);
   #pragma EXPORT
}


/**
 * Ob das Hidden-Dateiattribut eines WIN32_FIND_DATAA-Structs gesetzt ist.
 *
 * @param  WIN32_FIND_DATAA* st
 *
 * @return BOOL
 */
BOOL WINAPI wfd_FileAttribute_Hidden(const WIN32_FIND_DATAA* wfd) {
   if ((uint)wfd < MIN_VALID_POINTER) return(debug("invalid parameter wfd = 0x%p (not a valid pointer)", wfd));
   return(wfd->dwFileAttributes & FILE_ATTRIBUTE_HIDDEN);
   #pragma EXPORT
}


/**
 * Ob das System-Dateiattribut eines WIN32_FIND_DATAA-Structs gesetzt ist.
 *
 * @param  WIN32_FIND_DATAA* st
 *
 * @return BOOL
 */
BOOL WINAPI wfd_FileAttribute_System(const WIN32_FIND_DATAA* wfd) {
   if ((uint)wfd < MIN_VALID_POINTER) return(debug("invalid parameter wfd = 0x%p (not a valid pointer)", wfd));
   return(wfd->dwFileAttributes & FILE_ATTRIBUTE_SYSTEM);
   #pragma EXPORT
}


/**
 * Ob das Directory-Dateiattribut eines WIN32_FIND_DATAA-Structs gesetzt ist.
 *
 * @param  WIN32_FIND_DATAA* st
 *
 * @return BOOL
 */
BOOL WINAPI wfd_FileAttribute_Directory(const WIN32_FIND_DATAA* wfd) {
   if ((uint)wfd < MIN_VALID_POINTER) return(debug("invalid parameter wfd = 0x%p (not a valid pointer)", wfd));
   return(wfd->dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY);
   #pragma EXPORT
}


/**
 * Ob das Archive-Dateiattribut eines WIN32_FIND_DATAA-Structs gesetzt ist.
 *
 * @param  WIN32_FIND_DATAA* st
 *
 * @return BOOL
 */
BOOL WINAPI wfd_FileAttribute_Archive(const WIN32_FIND_DATAA* wfd) {
   if ((uint)wfd < MIN_VALID_POINTER) return(debug("invalid parameter wfd = 0x%p (not a valid pointer)", wfd));
   return(wfd->dwFileAttributes & FILE_ATTRIBUTE_ARCHIVE);
   #pragma EXPORT
}


/**
 * Ob das Device-Dateiattribut eines WIN32_FIND_DATAA-Structs gesetzt ist.
 *
 * @param  WIN32_FIND_DATAA* st
 *
 * @return BOOL
 */
BOOL WINAPI wfd_FileAttribute_Device(const WIN32_FIND_DATAA* wfd) {
   if ((uint)wfd < MIN_VALID_POINTER) return(debug("invalid parameter wfd = 0x%p (not a valid pointer)", wfd));
   return(wfd->dwFileAttributes & FILE_ATTRIBUTE_DEVICE);
   #pragma EXPORT
}


/**
 * Ob das Normal-Dateiattribut eines WIN32_FIND_DATAA-Structs gesetzt ist.
 *
 * @param  WIN32_FIND_DATAA* st
 *
 * @return BOOL
 */
BOOL WINAPI wfd_FileAttribute_Normal(const WIN32_FIND_DATAA* wfd) {
   if ((uint)wfd < MIN_VALID_POINTER) return(debug("invalid parameter wfd = 0x%p (not a valid pointer)", wfd));
   return(wfd->dwFileAttributes & FILE_ATTRIBUTE_NORMAL);
   #pragma EXPORT
}


/**
 * Ob das Temporary-Dateiattribut eines WIN32_FIND_DATAA-Structs gesetzt ist.
 *
 * @param  WIN32_FIND_DATAA* st
 *
 * @return BOOL
 */
BOOL WINAPI wfd_FileAttribute_Temporary(const WIN32_FIND_DATAA* wfd) {
   if ((uint)wfd < MIN_VALID_POINTER) return(debug("invalid parameter wfd = 0x%p (not a valid pointer)", wfd));
   return(wfd->dwFileAttributes & FILE_ATTRIBUTE_TEMPORARY);
   #pragma EXPORT
}


/**
 * Ob das SparseFile-Dateiattribut eines WIN32_FIND_DATAA-Structs gesetzt ist.
 *
 * @param  WIN32_FIND_DATAA* st
 *
 * @return BOOL
 */
BOOL WINAPI wfd_FileAttribute_SparseFile(const WIN32_FIND_DATAA* wfd) {
   if ((uint)wfd < MIN_VALID_POINTER) return(debug("invalid parameter wfd = 0x%p (not a valid pointer)", wfd));
   return(wfd->dwFileAttributes & FILE_ATTRIBUTE_SPARSE_FILE);
   #pragma EXPORT
}


/**
 * Ob das ReparsePoint-Dateiattribut eines WIN32_FIND_DATAA-Structs gesetzt ist.
 *
 * @param  WIN32_FIND_DATAA* st
 *
 * @return BOOL
 */
BOOL WINAPI wfd_FileAttribute_ReparsePoint(const WIN32_FIND_DATAA* wfd) {
   if ((uint)wfd < MIN_VALID_POINTER) return(debug("invalid parameter wfd = 0x%p (not a valid pointer)", wfd));
   return(wfd->dwFileAttributes & FILE_ATTRIBUTE_REPARSE_POINT);
   #pragma EXPORT
}


/**
 * Ob das Compressed-Dateiattribut eines WIN32_FIND_DATAA-Structs gesetzt ist.
 *
 * @param  WIN32_FIND_DATAA* st
 *
 * @return BOOL
 */
BOOL WINAPI wfd_FileAttribute_Compressed(const WIN32_FIND_DATAA* wfd) {
   if ((uint)wfd < MIN_VALID_POINTER) return(debug("invalid parameter wfd = 0x%p (not a valid pointer)", wfd));
   return(wfd->dwFileAttributes & FILE_ATTRIBUTE_COMPRESSED);
   #pragma EXPORT
}


/**
 * Ob das Offline-Dateiattribut eines WIN32_FIND_DATAA-Structs gesetzt ist.
 *
 * @param  WIN32_FIND_DATAA* st
 *
 * @return BOOL
 */
BOOL WINAPI wfd_FileAttribute_Offline(const WIN32_FIND_DATAA* wfd) {
   if ((uint)wfd < MIN_VALID_POINTER) return(debug("invalid parameter wfd = 0x%p (not a valid pointer)", wfd));
   return(wfd->dwFileAttributes & FILE_ATTRIBUTE_OFFLINE);
   #pragma EXPORT
}


/**
 * Ob das ContentNotIndexed-Dateiattribut eines WIN32_FIND_DATAA-Structs gesetzt ist.
 *
 * @param  WIN32_FIND_DATAA* st
 *
 * @return BOOL
 */
BOOL WINAPI wfd_FileAttribute_NotIndexed(const WIN32_FIND_DATAA* wfd) {
   if ((uint)wfd < MIN_VALID_POINTER) return(debug("invalid parameter wfd = 0x%p (not a valid pointer)", wfd));
   return(wfd->dwFileAttributes & FILE_ATTRIBUTE_NOT_CONTENT_INDEXED);
   #pragma EXPORT
}


/**
 * Ob das Encrypted-Dateiattribut eines WIN32_FIND_DATAA-Structs gesetzt ist.
 *
 * @param  WIN32_FIND_DATAA* st
 *
 * @return BOOL
 */
BOOL WINAPI wfd_FileAttribute_Encrypted(const WIN32_FIND_DATAA* wfd) {
   if ((uint)wfd < MIN_VALID_POINTER) return(debug("invalid parameter wfd = 0x%p (not a valid pointer)", wfd));
   return(wfd->dwFileAttributes & FILE_ATTRIBUTE_ENCRYPTED);
   #pragma EXPORT
}


/**
 * Ob das Virtual-Dateiattribut eines WIN32_FIND_DATAA-Structs gesetzt ist.
 *
 * @param  WIN32_FIND_DATAA* st
 *
 * @return BOOL
 */
BOOL WINAPI wfd_FileAttribute_Virtual(const WIN32_FIND_DATAA* wfd) {
   if ((uint)wfd < MIN_VALID_POINTER) return(debug("invalid parameter wfd = 0x%p (not a valid pointer)", wfd));
   return(wfd->dwFileAttributes & FILE_ATTRIBUTE_VIRTUAL);
   #pragma EXPORT
}


/**
 * Gibt den Dateinamen eines WIN32_FIND_DATAA-Structs zur�ck.
 *
 * @param  WIN32_FIND_DATAA* st
 *
 * @return char*
 */
const char* WINAPI wfd_FileName(const WIN32_FIND_DATAA* wfd) {
   if ((uint)wfd < MIN_VALID_POINTER) return((char*)debug("invalid parameter wfd = 0x%p (not a valid pointer)", wfd));
   return(wfd->cFileName);
   #pragma EXPORT
}


/**
 * Gibt den alternativen Dateinamen eines WIN32_FIND_DATAA-Structs zur�ck.
 *
 * @param  WIN32_FIND_DATAA* st
 *
 * @return char*
 */
const char* WINAPI wfd_AlternateFileName(const WIN32_FIND_DATAA* wfd) {
   if ((uint)wfd < MIN_VALID_POINTER) return((char*)debug("invalid parameter wfd = 0x%p (not a valid pointer)", wfd));
   return(wfd->cAlternateFileName);
   #pragma EXPORT
}