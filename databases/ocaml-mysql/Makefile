# $NetBSD: Makefile,v 1.17 2014/10/29 05:21:55 hiramatsu Exp $
#

DISTNAME=		ocaml-mysql-1.1.2
PKGNAME=	${DISTNAME} # to avoid prefixing with ocaml-
CATEGORIES=		databases
MASTER_SITES=		http://forge.ocamlcore.org/frs/download.php/1308/

MAINTAINER=		jaapb@NetBSD.org
HOMEPAGE=		http://ocaml-mysql.forge.ocamlcore.org/
COMMENT=		Ocaml library for MySQL database access
LICENSE=		gnu-lgpl-v2.1

USE_PKGLOCALEDIR=	yes
GNU_CONFIGURE=		yes
USE_TOOLS+=		gmake

DOCDIR=			${PREFIX}/share/doc/ocaml-mysql
INSTALLATION_DIRS=	${DOCDIR}

.include "../../mk/ocaml.mk"

BUILD_TARGET=	all htdoc
.if ${OCAML_USE_OPT_COMPILER} == "yes"
BUILD_TARGET+=	opt
.endif

post-install:
	cd ${WRKSRC}/doc/mysql/html && ${INSTALL_DATA} *.html ${DESTDIR}${DOCDIR}

.include "../../devel/ocaml-findlib/buildlink3.mk"
.include "../../lang/camlp4/buildlink3.mk"
.include "../../mk/mysql.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
