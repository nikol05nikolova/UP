bool AnalyzeArr(int arr[], int length) {
	if (length < 2 || arr == nullptr) return false;

	bool foundFirstFixed = false;
	for (int i = 0; i < length; i++) {
		if (arr[i] == i) {
			if (foundFirstFixed) return true;
			else foundFirstFixed = true;
		}
	}

	return false;
}