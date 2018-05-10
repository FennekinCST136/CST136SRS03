﻿#include "stdafx.h"
#include "convert.h"

using US = Currency<1,0,0,0,0,0,0>;
using AU = Currency<0,1,0,0,0,0,0>;
using NZ = Currency<0,0,1,0,0,0,0>;
using FJ = Currency<0,0,0,1,0,0,0>;
using TO = Currency<0,0,0,0,1,0,0>;
using PG = Currency<0,0,0,0,0,1,0>;
using SB = Currency<0,0,0,0,0,0,1>;

int main()
{
	US us(10);
	AU au(10);

	us = au;
    return 0;
}

