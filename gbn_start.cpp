#include <iostream>
#include <filesystem>

int main() {
    std::cout << "欢迎使用 GBN 协议模拟器！" << std::endl;
	std::filesystem::current_path("py_module");
	std::system("echo GBN| main.py");
	std::system("echo GBN 协议模拟结束，请按任意键继续. . . ");
	std::system("pause > nul");
}
