# $NetBSD: Makefile,v 1.3 2014/12/12 11:42:25 fhajny Exp $

DISTNAME=	peewee-2.4.4
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	databases
MASTER_SITES=	-https://github.com/coleifer/peewee/archive/${PKGVERSION_NOREV}${EXTRACT_SUFX}

MAINTAINER=	filip@joyent.com
HOMEPAGE=	http://www.peewee-orm.com/
COMMENT=	Small, expressive ORM for PostgreSQL, MySQL and SQLite
LICENSE=	mit

USE_LANGUAGES=	# none
USE_TOOLS+=	bash

MESSAGE_SUBST+=	PYPKGPREFIX=${PYPKGPREFIX}

REPLACE_BASH+=		playhouse/berkeley_build.sh
REPLACE_PYTHON+=	pwiz.py

.include "../../lang/python/application.mk"
.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
