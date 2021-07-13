all:
	@echo "run \"make clean\" to clean up"

clean:
	-rm -fvi ./*/main

git:
	git add .
	git commit -m "update @ $(date)"
	git push -u origin master
