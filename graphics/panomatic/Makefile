# $NetBSD: Makefile,v 1.9 2013/02/16 11:22:21 wiz Exp $

DISTNAME=	panomatic-0.9.4-src
PKGNAME=	panomatic-0.9.4
PKGREVISION=	5
CATEGORIES=	graphics
MASTER_SITES=	http://aorlinsk2.free.fr/panomatic/bin/
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://aorlinsk2.free.fr/panomatic/
COMMENT=	Tool that automates the creation of control points in Hugin
LICENSE=	gnu-gpl-v2

WRKSRC=			${WRKDIR}/${PKGNAME_NOREV}

USE_LANGUAGES=		c c++
USE_LIBTOOL=		yes
GNU_CONFIGURE=		yes

.include "../../devel/boost-headers/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../mk/jpeg.buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"
.include "../../graphics/tiff/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
