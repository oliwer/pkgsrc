# $NetBSD: Makefile,v 1.12 2014/10/09 13:44:35 wiz Exp $

DISTNAME=	DB_File-Lock-0.05
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	7
CATEGORIES=	databases perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=DB_File-Lock/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/DB_File-Lock/
COMMENT=	Perl5 module providing locking with flock wrapper for DB_File

PERL5_PACKLIST=	auto/DB_File/Lock/.packlist
DEPENDS+=	{perl>=5,p5-DB_File-[0-9]*}:../../databases/p5-DB_File

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
