# $NetBSD: Makefile,v 1.30 2015/04/03 15:53:34 manu Exp $
#

DISTNAME=	mod_auth_mellon-0.10.0
PKGNAME=	${APACHE_PKG_PREFIX}-${DISTNAME:S/mod_//:S/_/-/g}
#PKGREVISION=	1
CATEGORIES=	www security
MASTER_SITES=	https://github.com/UNINETT/mod_auth_mellon/releases/download/v${DISTNAME:C/.*-//}/

MAINTAINER=	manu@NetBSD.org
HOMEPAGE=	http://modmellon.googlecode.com/files/
COMMENT=	SAML 2.0 authentication for Apache
LICENSE=	gnu-gpl-v2 # or later

GNU_CONFIGURE=	YES
USE_LIBTOOL=	YES
USE_TOOLS+=	pkg-config
CFLAGS+=	-DLASSO_SERVER_LOAD_METADATA_FLAG_DEFAULT=0

APACHE_MODULE=	YES
PKG_APACHE_ACCEPTED=	apache22
.include "../../mk/apache.mk"
BUILDLINK_API_DEPENDS.apache+=	apache>=2.0.47

SUBST_CLASSES+=		pthflags
SUBST_STAGE.pthflags=	post-configure
SUBST_FILES.pthflags=	Makefile
SUBST_SED.pthflags=	-e 's| -pthread | |g'

INSTALLATION_DIRS+=	lib/httpd

do-install:
	cd ${WRKSRC} &&							\
	    libexecdir=`${APXS} -q LIBEXECDIR` &&			\
	    ${APXS} -i -S LIBEXECDIR=${DESTDIR}"$${libexecdir}" 	\
	      -n auth_mellon  mod_auth_mellon.la

.include "../../security/lasso/buildlink3.mk"
.include "../../mk/pthread.buildlink3.mk"
.include "../../www/curl/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
