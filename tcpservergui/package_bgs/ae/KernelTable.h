/*
*
* Copyright 2001 by Ahmed Elgammal All  rights reserved.
*
* Permission to use, copy,  or modify this software and  its documentation
* for  educational  and  research purposes only and without fee  is hereby
* granted, provided  that this copyright notice and the original authors's
* name appear  on all copies and supporting documentation.  If individual
* files are  separated from  this  distribution directory  structure, this
* copyright notice must be included.  For any other uses of this software,
* in original or  modified form, including but not limited to distribution
* in whole or in  part, specific  prior permission  must be  obtained from
* Author or UMIACS.  These programs shall not  be  used, rewritten, or  
* adapted as  the basis  of  a commercial  software  or  hardware product 
* without first obtaining appropriate licenses  from Author. 
* Other than these cases, no part of this software may be used or
* distributed without written permission of the author.
*
* Neither the author nor UMIACS make any representations about the 
* suitability of this software for any purpose.  It is provided 
* "as is" without express or implied warranty.
*
* Ahmed Elgammal
* 
* University of Maryland at College Park
* UMIACS
* A.V. Williams Bldg. 
* CollegePark, MD 20742
* E-mail:  elgammal@umiacs.umd.edu
*
**/

#ifndef __KERNEL_TABLE__
#define __KERNEL_TABLE__

#include <iostream>

class KernelLUTable
{
public:
  double minsegma;
  double maxsegma;
  int segmabins;
  int tablehalfwidth;
  double *kerneltable;
  double *kernelsums;

public:
  KernelLUTable();
  ~KernelLUTable();

  KernelLUTable(int KernelHalfWidth,double Segmamin,double Segmamax,int Segmabins);
};

#endif
