#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>

#define PORT 8099

int main() {
    
    // create the server socket
    int server_socket;
    server_socket = socket(AF_INET, SOCK_STREAM, 0);

    // define the server address
    struct sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(PORT);
    server_address.sin_addr.s_addr = INADDR_ANY;

    // bind the socket to the specified IP and port
    bind(server_socket, (struct sockaddr *)&server_address, sizeof(server_address));

    // listen to the socket
    listen(server_socket, 5);

    // capture client socket
    int client_socket;
    client_socket = accept(server_socket, NULL, NULL);
    // send data to client
    printf("Connection from socket: %d\n", client_socket);
    char server_message[256] = "You have reached the server :)";
    send(client_socket, server_message, sizeof(server_message), 0);
    // closing the socket.
    close(server_socket);


    return EXIT_SUCCESS;
}
