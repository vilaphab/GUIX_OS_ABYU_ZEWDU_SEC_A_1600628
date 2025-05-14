# GUIX_OS_DOCUMENTATION

## OS Installation (Guix in VirtualBox)
This section documents the installation of Guix OS using Oracle VirtualBox.
It demonstrates setting up a reproducible GNU/Linux environment with 2GB RAM and 20GB disk.
The process includes locale configuration, ext4 partitioning, and GNOME desktop setup.
Virtualization enables safe experimentation with Guix's functional package management.
The guide concludes with troubleshooting common VM issues like network and bootloader errors.

## System Call: clone()
This section explores process creation in Guix using the clone() system call.
It verifies Guix's POSIX compliance through parent/child process isolation tests.
The experiment measures how Guix's reproducible builds affect system call behavior.
Results show consistent process creation despite Guix's unique architecture.
This provides insights for developers working with concurrent processes in Guix.
