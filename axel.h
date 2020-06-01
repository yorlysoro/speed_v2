void update(void)
{
	system("apt update");
}
void axel_upgrade(void)
{
	int apt;
	puts("Descargando actualizaciones con axel");
	update();
	apt = system("cd /var/cache/apt/archives/; apt-get -y --print-uris upgrade | egrep -o -e \"(ht|f)tp://[^\']+\" > apt-fast.list && cat apt-fast.list | xargs -l1 axel -a");
	if(apt == 0)
	{
		puts("actualizando");
		system("apt upgrade -y");
	}
	else
		printf("Error %d\nNo hay acutualizaciones disponibles\n", apt);

}

void axel_distupgrade(void)
{
	int apt;
	puts("Descargando actualizaciones con axel");
	update();
	apt = system("cd /var/cache/apt/archives/; apt-get -y --print-uris dist-upgrade | egrep -o -e \"(ht|f)tp://[^\']+\" > apt-fast.list && cat apt-fast.list | xargs -l1 axel -a");
	if(apt == 0)
	{
		puts("actualizando");
		system("apt dist-upgrade -y");
	}
	else
		printf("Error %d\nNo hay acutualizaciones disponibles\n", apt);

}

void axel_install(void)
{
	int apt;
	puts("Instalando con axel");
	update();
	apt = system("cd /var/cache/apt/archives/; apt-get -y --print-uris install | egrep -o -e \"(ht|f)tp://[^\']+\" > apt-fast.list && cat apt-fast.list | xargs -l1 axel -a");
	if(apt != 0)
	{
		puts("Descargando");
		system("apt install -y");
	}
	else
		printf("Error %d\nNo hay acutualizaciones disponibles\n", apt);

}
