# $NetBSD: Makefile,v 1.30 2015/04/03 15:21:59 rodent Exp $

DISTNAME=	uwsgi-2.0.10
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	www python
MASTER_SITES=	http://projects.unbit.it/downloads/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://projects.unbit.it/uwsgi
COMMENT=	Feature-rich WSGI server
LICENSE=	gnu-gpl-v2 # with linking exception

USE_LANGUAGES=	c
USE_TOOLS+=	pkg-config

PLIST_SUBST+=	PYVERSSUFFIX=${PYVERSSUFFIX}
EGG_NAME=	${DISTNAME:S/uwsgi/uWSGI/}

.include "options.mk"

INSTALL_ENV+=		UWSGI_INCLUDES=${PREFIX}/include
INSTALL_ENV+=		UWSGI_PROFILE_OVERRIDE="${UWSGI_DEBUG}${UWSGI_JSON}${UWSGI_PCRE}${UWSGI_SSL}${UWSGI_UUID}${UWSGI_XML}${UWSGI_YAML}"
INSTALLATION_DIRS+=	share/examples/py-uwsgi

post-install:
	${MV} ${DESTDIR}${PREFIX}/bin/uwsgi \
		${DESTDIR}${PREFIX}/bin/uwsgi-${PYVERSSUFFIX}
	${INSTALL_DATA} ${WRKSRC}/examples/* \
		${DESTDIR}${PREFIX}/share/examples/py-uwsgi

.include "../../mk/dlopen.buildlink3.mk"
.include "../../mk/pthread.buildlink3.mk"
.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
