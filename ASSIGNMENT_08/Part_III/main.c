a (int i) {
	if (i>0)
		a( --i );
	else
		printf("i has reached zero\n");
	return;
}

main () {
	a(1);
}
