# $NetBSD: Makefile,v 1.8 2014/12/31 13:57:33 wiz Exp $

DISTNAME=	Flask-Security-1.7.4
PKGNAME=	${PYPKGPREFIX}-${DISTNAME:tl}
CATEGORIES=	www python
MASTER_SITES=	http://pypi.python.org/packages/source/F/Flask-Security/

MAINTAINER=	kleink@NetBSD.org
HOMEPAGE=	http://pythonhosted.org/Flask-Security/
COMMENT=	Simple security for Flask apps
LICENSE=	mit

DEPENDS+=	${PYPKGPREFIX}-flask>=0.9:../../www/py-flask
DEPENDS+=	${PYPKGPREFIX}-flask-login>=0.2.3:../../www/py-flask-login
DEPENDS+=	${PYPKGPREFIX}-flask-mail>=0.7.3:../../www/py-flask-mail
DEPENDS+=	${PYPKGPREFIX}-flask-principal>=0.3.3:../../www/py-flask-principal
DEPENDS+=	${PYPKGPREFIX}-flask-wtf>=0.8:../../www/py-flask-wtf
DEPENDS+=	${PYPKGPREFIX}-itsdangerous>=0.17:../../security/py-itsdangerous
DEPENDS+=	${PYPKGPREFIX}-passlib>=1.6.1:../../security/py-passlib

USE_LANGUAGES=	# empty

post-extract:
	${FIND} ${WRKSRC} -type f -name .DS_Store -exec ${RM} {} \;

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
