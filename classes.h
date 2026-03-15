#pragma once
#include <vector>
#include <string>


class Task {
    int id;
    std::string title;
    std::string description; // Might not be used for all tasks
    enum class Status {TODO, INPROGRESS, DONE} status;
    enum class Priority {LOW, MEDIUM, HIGH} prio;
};


class TaskManager {
    std::vector<Task> tasks;
};