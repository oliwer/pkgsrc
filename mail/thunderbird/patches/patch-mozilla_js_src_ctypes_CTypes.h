$NetBSD: patch-mozilla_js_src_ctypes_CTypes.h,v 1.2 2014/07/27 20:04:59 ryoon Exp $

--- mozilla/js/src/ctypes/CTypes.h.orig	2014-07-18 00:05:25.000000000 +0000
+++ mozilla/js/src/ctypes/CTypes.h
@@ -14,6 +14,23 @@
 #include "js/Vector.h"
 #include "vm/String.h"
 
+#if defined(__NetBSD__)
+#include <stdint.h>
+/* XXX why do we have those funky __ #defines in stdint.h? */
+#warning this is a retarded workaround
+#define uint8_t uint8_t
+#define uint16_t uint16_t
+#define uint32_t uint32_t
+#define uint64_t uint64_t
+#define int8_t int8_t
+#define int16_t int16_t
+#define int32_t int32_t
+#define int64_t int64_t
+#define intptr_t intptr_t
+#define uintptr_t uintptr_t
+#define off_t off_t
+#endif
+
 namespace js {
 namespace ctypes {
 
