[mTotalDisk1]
Measure=FreeDiskSpace
Drive=#Disk1Label#
Total=1

[mUsedDisk1]
Measure=FreeDiskSpace
Drive=#Disk1Label#
InvertMeasure=1

[mDisk1Percent]
Measure=Calc
Formula=(mUsedDisk1*100)/mTotalDisk1

[mTotalDisk2]
Measure=FreeDiskSpace
Drive=#Disk2Label#
Total=1

[mUsedDisk2]
Measure=FreeDiskSpace
Drive=#Disk2Label#
InvertMeasure=1

[mDisk2Percent]
Measure=Calc
Formula=(mUsedDisk2*100)/mTotalDisk2
