# $NetBSD: Makefile,v 1.9 2015/04/03 09:17:41 wiz Exp $
#
# any of ~* is fine, they are the same and just there for Ubuntu
# so moneyguru's built for all releases
DISTNAME=	moneyguru-2.8.2
CATEGORIES=	finance
MASTER_SITES=	${MASTER_SITE_GITHUB:=hsoft/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.hardcoded.net/moneyguru/
COMMENT=	Personal finance management application
LICENSE=	modified-bsd

DEPENDS+=	${PYPKGPREFIX}-polib-[0-9]*:../../devel/py-polib
DEPENDS+=	${PYPKGPREFIX}-qt4-[0-9]*:../../x11/py-qt4
DEPENDS+=	${PYPKGPREFIX}-sphinx-[0-9]*:../../textproc/py-sphinx
DEPENDS+=	${PYPKGPREFIX}-sqlite3-[0-9]*:../../databases/py-sqlite3
DEPENDS+=	${PYPKGPREFIX}-cElementTree-[0-9]*:../../textproc/py-cElementTree

GITHUB_TAG=	${PKGVERSION_NOREV}
EXTRACT_USING=	bsdtar

WRKSRC=		${WRKDIR}/${PKGNAME_NOREV}
USE_LANGUAGES=	c
USE_TOOLS=	pax

PYTHON_VERSIONS_INCOMPATIBLE=	26 27 # 3.x only
PY_PATCHPLIST=		yes
PLIST_SUBST+=		PYVERSSUFFIX=${PYVERSSUFFIX}
REPLACE_PYTHON+=	cocoa/waf
REPLACE_PYTHON+=	cocoa/wscript
REPLACE_PYTHON+=	psmtabbarcontrol/waf
REPLACE_PYTHON+=	psmtabbarcontrol/wscript
REPLACE_PYTHON+=	run_template_cocoa.py
REPLACE_PYTHON+=	run_template_qt.py

INSTALLATION_DIRS=	bin share/applications share/moneyguru

do-configure:
	cd ${WRKSRC} && ${PYTHONBIN} configure.py

do-build:
	cd ${WRKSRC} && ${PYTHONBIN} build.py
	${CHMOD} +x ${WRKSRC}/run.py

do-install:
	cd ${WRKSRC} && pax -pp -rw ambuttonbar build cocoa cocoalib core data help hscommon images locale plugin_examples psmtabbarcontrol qt qtlib run.py ${DESTDIR}${PREFIX}/share/moneyguru
	${INSTALL_DATA} ${WRKSRC}/debian/moneyguru.desktop ${DESTDIR}${PREFIX}/share/applications
	${LN} -s ${DESTDIR}${PREFIX}/share/moneyguru/run.py ${DESTDIR}${PREFIX}/bin/moneyguru

.include "../../lang/python/application.mk"
.include "../../lang/python/extension.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../mk/bsd.pkg.mk"
