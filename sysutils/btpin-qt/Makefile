# $NetBSD: Makefile,v 1.29 2014/12/30 08:58:57 plunky Exp $

DISTNAME=		btpin-qt-1.5
PKGREVISION=		12
CATEGORIES=		sysutils
MASTER_SITES=		http://www.NetBSD.org/~plunky/

MAINTAINER=		plunky@NetBSD.org
COMMENT=		Bluetooth PIN Client
LICENSE=		2-clause-bsd

ONLY_FOR_PLATFORM=	NetBSD-[4-9].*-*

USE_LANGUAGES=		c++

INSTALLATION_DIRS+=	bin ${PKGMANDIR}/man1

INSTALL_MAKE_FLAGS+=	INSTALL_ROOT=${DESTDIR}

do-configure:
	cd ${WRKSRC} && ${QTDIR}/bin/qmake -after	\
		target.path=${PREFIX}/bin		\
		man.path=${PREFIX}/${PKGMANDIR}/man1

.include "../../x11/qt4-libs/buildlink3.mk"
.include "../../x11/qt4-tools/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
