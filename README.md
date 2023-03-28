//23-3-28-数组
int main()
{
	char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
	int i = 0;
	for (i = 0; i < (int)strlen(arr); i++)
	{
		printf("%c", arr[i]);
	}
	return 0;
}
