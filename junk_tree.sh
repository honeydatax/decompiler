printf "\ec\e[44;36m\a\n\n"
procyon $1 > file.java
cat file.java | grep "import" | sed 's/import//' | sed 's/;//' > /tmp/temp
while read a
do
echo $a
echo "---------------------------" >> file.java
procyon $a >> file.java
done < /tmp/temp

