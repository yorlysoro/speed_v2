extern void axel_upgrade(void);
extern void axel_distupgrade(void);
void upgrade_all(void)
{
	axel_upgrade();
	axel_distupgrade();
}
