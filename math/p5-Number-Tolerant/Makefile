# $NetBSD: Makefile,v 1.2 2014/05/29 23:36:55 wiz Exp $

DISTNAME=	Number-Tolerant-1.701
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	1
CATEGORIES=	math perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Number/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Number-Tolerant/
COMMENT=	Perl5 module for tolerance ranges for inexact numbers
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-Sub-Exporter>=0.950:../../devel/p5-Sub-Exporter

PERL5_PACKLIST=	auto/Number/Tolerant/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
