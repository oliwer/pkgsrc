# $NetBSD: Makefile,v 1.32 2015/03/21 19:27:23 joerg Exp $

DISTNAME=	molden4.6
PKGNAME=	${DISTNAME:S/molden/&-/}
PKGREVISION=	2
CATEGORIES=	misc # chemistry
MASTER_SITES=	ftp://ftp.cmbi.ru.nl/pub/molgraph/molden/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.cmbi.ru.nl/molden/molden.html
COMMENT=	Displaying MOLecular DENsity
LICENSE=	molden-license

RESTRICTED=	Redistributing Molden by unregistered user is prohibited.
NO_SRC_ON_CDROM=	${RESTRICTED}
NO_BIN_ON_CDROM=	${RESTRICTED}
NO_SRC_ON_FTP=		${RESTRICTED}
NO_BIN_ON_FTP=		${RESTRICTED}

DIST_SUBDIR=		${PKGNAME_NOREV}

MAKE_FILE=	makefile
BUILD_TARGET=	molden

USE_LANGUAGES=		c fortran77

INSTALLATION_DIRS=	bin share/molden/doc share/molden/test share/molden/utils

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/molden ${DESTDIR}${PREFIX}/bin
	for d in doc test utils ; do \
		for f in ${WRKSRC}/$${d}/* ; do \
			${INSTALL_DATA} $${f} ${DESTDIR}${PREFIX}/share/molden/$${d} ; \
		done ; \
	done

.include "../../mk/compiler.mk"
.if !empty(PKGSRC_COMPILER:Mclang)
CFLAGS+=	-Wno-return-type
.endif

.include "../../graphics/MesaLib/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
