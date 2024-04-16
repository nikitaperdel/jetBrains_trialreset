#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *products[] = {"WebStorm", "IntelliJ", "CLion", "Rider", "GoLand", "PhpStorm", "Resharper", "PyCharm", "DataGrip", "RubyMine", "AppCode", "MPS", "DotMemory", "DotCover", "DotTrace", "TeamCity", "YouTrack", "Upsource", "Hub", "Kotlin", "RustRover", "Fleet", "Toolbox App", "Datalore", "ReSharper C++", "dotPeek", "JetBrains Academy", "Code With Me", "Gateway", "Qodana", "Aqua"};
    int num_products = sizeof(products) / sizeof(products[0]);

    char appdata_path[256];
    snprintf(appdata_path, sizeof(appdata_path), "%s\\JetBrains", getenv("APPDATA"));

    for (int i = 0; i < num_products; i++) {
        char product_path[256];
        snprintf(product_path, sizeof(product_path), "%s\\%s*", appdata_path, products[i]);

        // Delete eval folder
        char eval_path[256];
        snprintf(eval_path, sizeof(eval_path), "%s\\eval", product_path);
        remove(eval_path);

        // Modify other.xml
        char other_xml_path[256];
        snprintf(other_xml_path, sizeof(other_xml_path), "%s\\options\\other.xml", product_path);
        // Open the file and remove lines containing "evlsprt"...
    }

    // Delete registry keys
    system("reg delete HKEY_CURRENT_USER\\Software\\JavaSoft /f");
    system("reg delete HKEY_CURRENT_USER\\Software\\JetBrains /f");

    system("pause");
    return 0;
}
