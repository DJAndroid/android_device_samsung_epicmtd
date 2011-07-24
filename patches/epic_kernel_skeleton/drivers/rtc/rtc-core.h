
extern void __init rtc_dev_init(void);
extern void __exit rtc_dev_exit(void);
extern void rtc_dev_prepare(struct rtc_device *rtc);
extern void rtc_dev_add_device(struct rtc_device *rtc);
extern void rtc_dev_del_device(struct rtc_device *rtc);



extern void rtc_proc_add_device(struct rtc_device *rtc);
extern void rtc_proc_del_device(struct rtc_device *rtc);



extern void __init rtc_sysfs_init(struct class *);
extern void rtc_sysfs_add_device(struct rtc_device *rtc);
extern void rtc_sysfs_del_device(struct rtc_device *rtc);
