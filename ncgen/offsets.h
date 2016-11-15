/*********************************************************************
 *   Copyright 2009, UCAR/Unidata
 *   See netcdf/COPYRIGHT file for copying and redistribution conditions.
 *********************************************************************/
/* $Id: offsets.h,v 1.2 2010/05/24 19:59:58 dmh Exp $ */
/* $Header: /upc/share/CVS/netcdf-3/ncgen/offsets.h,v 1.2 2010/05/24 19:59:58 dmh Exp $ */

#ifndef OFFSETS_H
#define OFFSETS_H 1

typedef struct Alignment {
    char* typename;
    unsigned int alignment;
} Alignment;

/* Define indices for every primitive C type */
/* NAT => NOT-A-TYPE*/
#define NATINDEX       0
#define CHARINDEX      1
#define UCHARINDEX     2
#define SHORTINDEX     3
#define USHORTINDEX    4
#define INTINDEX       5
#define UINTINDEX      6
#define LONGLONGINDEX  7
#define ULONGLONGINDEX 8
#define FLOATINDEX     9
#define DOUBLEINDEX    10
#define PTRINDEX       11
#define NCVLENINDEX    12

#define NCTYPES        13

/* Capture in struct and in a vector*/
typedef struct Typealignset {
    Alignment charalign;	/* char*/
    Alignment ucharalign;	/* unsigned char*/
    Alignment shortalign;	/* short*/
    Alignment ushortalign;	/* unsigned short*/
    Alignment intalign;		/* int*/
    Alignment uintalign;	/* unsigned int*/
    Alignment longlongalign;	/* long long*/
    Alignment ulonglongalign;	/* unsigned long long*/
    Alignment floatalign;	/* float*/
    Alignment doublealign;	/* double*/
    Alignment ptralign;		/* void**/
    Alignment ncvlenalign;	/* nc_vlen_t*/
} Typealignset;

typedef Alignment Typealignvec;

extern char* ctypenames[];

extern void compute_alignments(void);
extern unsigned int nctypealignment(nc_type nctype);

#endif /*OFFSETS_H*/
