/*
 * main.c
 * 
 * Copyright 2016 yorlys <yorlys@localhost>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "upgrade_all.h"
#include "axel.h"
extern void axel_upgrade(void);
extern void axel_distupgrade(void);
extern void axel_install(void);
extern void upgrade_all(void);
int main(int argc, char *argv[])
{
	int i;
	char upgrade[10] = "upgrade";
	char dist_upgrade[13] = "dist-upgrade";
	char install[10] = "install";
	char upgradeall[13] = "upgrade-all";
¿	
	for(i = 1; i < argc; i++)
	{
		if(strcmp(argv[i],upgrade) == 0)
		axel_upgrade();
		else if(strcmp(argv[i],dist_upgrade) == 0)
		axel_distupgrade();
		else if(strcmp(argv[i],install) == 0)
		axel_install();
		else if(strcmp(argv[i],upgradeall) == 0 )
		upgrade_all();
		else
		puts("Erro!");
	}
		
	return 0;
}

