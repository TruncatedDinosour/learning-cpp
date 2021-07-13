all:
	@echo "run \"make clean\" to clean up"
	@echo "run \"make git\" to push changes"

clean:
	-rm -fvi ./*/main

git:
	git add .
	git commit -m "update @ $(shell date)"
	git push -u origin master
