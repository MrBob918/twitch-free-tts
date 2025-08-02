#include <nlohmann/json.hpp>
#include <iostream>

int main() {
    // Создадим простой JSON-объект
    nlohmann::json j = {
        {"message", "Hello, nlohmann::json!"},
        {"year", 2025},
        {"pi", 3.14159},
        {"active", true}
    };

    // Выведем его красиво отформатированным
    std::cout << j.dump(4) << std::endl;

    // Разберём строку обратно в объект
    auto parsed = nlohmann::json::parse(R"({"foo": [1,2,3], "bar":"baz"})");
    std::cout << "foo[1] = " << parsed["foo"][1] << std::endl;

    return 0;
}