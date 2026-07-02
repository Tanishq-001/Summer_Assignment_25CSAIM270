#include <stdio.h>
#include <string.h>

void displaySystemStatus(char status[], int activeUsers) {
    printf("\n=== SYSTEM ARCHITECTURE METRICS ===\n");
    printf("System Status: %s\n", status);
    printf("Active Logged sessions: %d\n", activeUsers);
    printf("===================================\n");
}

int main() {
    char globalStatus[10] = "ONLINE";
    int currentSessionCount = 4;
    
    // Core function invocation
    displaySystemStatus(globalStatus, currentSessionCount);
    
    return 0;
}