1. To increase opened recent files in gedit on terminal type,

		gsettings set org.gnome.gedit.preferences.ui max-recents "uint32 60"


2. Mail from command line,

To install sponge on a Debian-like system,

		apt-get install moreutils
		sudo apt install mailutils
		sudo apt-get install ssmtp**
		sudo vim /etc/ssmtp/ssmtp.conf

Add the following to the file,
 
		AuthUser=<user>@gmail.com
		AuthPass=Your-Gmail-Password
		mailhub=smtp.gmail.com:587
		UseSTARTTLS=YES

tests
simple test,

		# cat some-text-file | mail -s "Test" <user>@gmail.com

test building android, do envsetup.sh and lunch,

		# make -j4 showcommands &> build.log ; tail -n 100 build.log | sponge build_aosp8-tail.log | mail -s "Test log" <user>@gmail.com

4. better command terminal

[link tmux](https://github.com/gpakosz/.tmux)

5. List all installed packages,

		apt list --install

6. Upgrade all the currently installed software packages on the system,

		apt-get upgrade

7. Resynchronize the package index files from the their sources specified in /etc/apt/sources.list file,

		apt-get update

8. Un-install software packages without removing their configuration files,

		apt-get remove <package-name>

9. Remove software packages including their configuration files,

		apt-get purge <package-name>

10. Free up the disk space by cleaning retrieved (downloaded) .deb files (packages) from the local repository,

		apt-get clean

11. Update package cache and checks for broken dependencies,

		apt-get check

12. Searche the local repositories in the system and install the build dependencies for package,

		apt-get build-dep <package-name>


13. display raw information about dependencies of a particular package,

		apt depends glances

14. View Information About Package,

		apt show <package-name>

15. tmux terminal,

		ctrl-a % - vertical split
		ctrl-a " - horizontal split
		ctrl-a <arrow keys> - go to desired terminal

16. screen session,

		Ctrl-a c	Create new window (shell)
		Ctrl-a ?	Help (display a list of commands)
		Ctrl-a Ctrl-\	Quit screen
		Ctrl-a D (Shift-d)	Power detach and logout
		Ctrl-a d

to go to a screen session, list screen sessions,

		screen -ls
		screen -r 20273.pts-23.CPU-384U
		ctrl-a 
		:quit

or,

		screen -X -S 3651.pts-17.CPU-xxx quit

You can't use tmux with screen as 'ctrl-a d' will kill tmux instead of detaching the screen session.

17.  Ultimate source for linux driver understandings,

[link linux-kernel-labs](https://linux-kernel-labs.github.io/master/)

> corresponding important teaching material and exercises are here,

[link linux-kernel-labs-kernel](https://github.com/linux-kernel-labs/linux)

Another linux lab github with docket,

[link linux-lab](https://github.com/mrigendrachaubey/linux-lab)

Readme Docker for lab,

[link docker-ce-ubuntu](https://docs.docker.com/install/linux/docker-ce/ubuntu/)

@mrigendrachaubey
