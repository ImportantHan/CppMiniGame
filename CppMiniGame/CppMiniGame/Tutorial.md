# SFML ���̺귯�� ��ġ

## ������Ʈ
https://www.sfml-dev.org/download/sfml/2.6.0/

## �ٿ�ε�
- Visual C++ 17 (2022) - 32-bit

## ���� ����
```
- CppMiniGame - External - include
						 - lib
			  - CppMiniGame
			  - CppMiniGame.sln
```
- SFML > include ��ü ���� => CppMiniGame > External > include
- SFML > lib ��ü ���� => CppMiniGame > External > lib
- SFML > bin ��ü ���� => CppMiniGame > CppMiniGame

# VS 2022 ȯ�� ����
= VS 2022 IDE ��� ���� > Solution Platforms > X86
- Solution Explorer > CppMiniGame ��Ŭ�� >> Drop Down Menu > Properties
- ��� ���� ����
	- Configuration > All Configuration
	- Platform > win32
- C/C++ > General > Aditional include Directories
	- SFML���� �����ؿ� ����/������ �ִ� ��ġ�� ����
	- $(SolutionDir) : ���� ������Ʈ ���� ǥ�� �Է�
	- ���� �Է� ���� : $(SolutionDir)\External\include
- Linker > General > Additional Library Directories
	- SFML���� �����ؿ� ����/������ �ִ� ��ġ�� ����
	- ���� �Է� ���� : $(SolutionDir)\External\lib
- Linker > Input > Additional Dependencies
	- (���) Configuration > Realease ī�װ� ����
```
sfml-system.lib
sfml-graphics.lib
sfml-window.lib
sfml-audio.lib
sfml-network.lib
```
- Linker > Input > Additional Dependencies
	- (���) Configuration > Debug ī�װ� ����
```
sfml-system-d.lib
sfml-graphics-d.lib
sfml-window-d.lib
sfml-audio-d.lib
sfml-network-d.lib
```

# Event

## �̺�Ʈ ����
- ��Ȳ�� ��ȭ
- Interface�� �����ؼ� ����� ��Ȳ�� ��ȭ
- Ű����, ���콺�� ����� ��Ȳ�� ��ȭ
	- Ű���� �̺�Ʈ : Ű �Է�
	- ���콺 �̺�Ʈ : Ŭ��(press / release), ��, ���콺 ������ ��
- ��ġ ��ũ�� : ��ġ, ��������, ��ġ
- �ε�

## Event Handling
- Event Delegate : �������� �̺�Ʈ�� ����
- Event Listening : �̺�Ʈ ����
- Event Handling : ������ �̺�Ʈ�� ���ؼ� ������ ����


# Game Loop

# ������Ʈ�� ������ Game Ŭ����
- ������ ���������� Control�ϴ� Ŭ����
- Enemy ����
- Player ����