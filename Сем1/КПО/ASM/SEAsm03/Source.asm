.586P													;������� ������ (��������� Pentium)
.MODEL FLAT, STDCALL									;������ ������, ���������� � �������
includelib kernel32.lib									;������������: ����������� � kernel32
includelib user32.lib

ExitProcess PROTO : DWORD								;�������� ������� ��� ���������� �������� Windows
MessageBoxA PROTO : DWORD, : DWORD, : DWORD, : DWORD	;�������� API-������� MessageBoxA (����� � ����)

.STACK 4096												;��������� ����� ������� 4 ���������

.DATA													;������� ������
		myBytes		BYTE	10h, 20h, 30h, 40h
		myWords		WORD	8Ah, 3Bh, 44h, 5Fh, h
		myDoubles	DWORD	1, 2, 3, 4, 5, 6, 7
		SUM			DWORD   0
		TimeVal		DWORD	0

		str0		db		"Gaykov Dmitriy, course_2, POIT_5 ", 0
		str1		db		"������ �������� 0 ", 0
		str2		db		"������ �� �������� 0 ", 0

.CODE													;������� ����
main PROC												;����� ����� main
start:	
		mov ESI, OFFSET myWords
		mov AX, [ESI + 0]
		mov BX, [ESI + 2]

		mov edi, OFFSET myDoubles
		mov ecx, 7
CYCLE:
		mov eax, [edi]
		add SUM, eax
		add edi, type myDoubles
loop CYCLE

		mov edi, OFFSET myDoubles
		mov ecx, 7
CYCLE_2:
		mov eax, [edi]
		add edi, type myDoubles
		
		cmp eax, 0
		jz  EXIT

		cmp ecx,1
		jz  EXIT_2
loop CYCLE_2

EXIT:													;�������� ����
		mov eax, SUM
		mov EBX, 0
		invoke MessageBoxA, 0, offset str1, offset str0, 0
		push 0											;��� �������� �������� Windows (�������� ExitProcess)
		call ExitProcess								;��� ����������� ����� ������� Windows


EXIT_2:													;�� �������� ����
		mov eax, SUM
		mov EBX, 1
		invoke MessageBoxA, 0, offset str2, offset str0, 0
		push 0											;��� �������� �������� Windows (�������� ExitProcess)
		call ExitProcess								;��� ����������� ����� ������� Windows

main ENDP												;����� ���������

end main	