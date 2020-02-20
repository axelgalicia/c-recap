#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <unistd.h>
#include <stdbool.h>

#define PORT 8099


int main() {
    // Creating the socket
    int network_socket;
    network_socket = socket(AF_INET, SOCK_STREAM,0);

    // specifying an address for the socket
    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(PORT);
    server_address.sin_addr.s_addr = INADDR_ANY;

    // connect
    int connection_status = connect(network_socket, (struct sockaddr *) &server_address, sizeof(server_address));

    // validate connection
    if (connection_status == -1) {
        printf("Not able to connect\n");
    } else {
        // receive data from the server
        char server_response[256];
        recv(network_socket, &server_response, sizeof(server_response), 0);

        // Print data
        printf("Data from server %s: \n", server_response);

        // Close the socket
        close(network_socket);
    }

    return 0;
}

