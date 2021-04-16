#include <WebServer.h>

WebServer server(80);

uint8_t LED1pin = 15;
bool LED1status = LOW;

uint8_t LED2pin = 7;
bool LED2status = LOW;

String SendHTML(uint8_t led1stat,uint8_t led2stat);
void handle_OnConnect();
void handle_led1on();
void handle_led1off();
void handle_led2on();
void handle_led2off();
void handle_NotFound();
void initial_controllers();
void handle_web_clients();