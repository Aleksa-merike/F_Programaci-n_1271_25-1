#include <iostream>
#include <string>

using namespace std;

void escenario1();
void escenario2();
void escenario3();
void finalBuena();
void finalNeutral();
void finalMalo();

void escenario1() {
    int decision;
    cout << "Te despiertas en un lugar oscuro, tu mente está confusa y tu cuerpo dolorido.\n";
    cout << "Al intentar moverte, te das cuenta de que estás atrapado en algo. Al parecer es un contenedor de basura.\n";
    cout << "¿Qué haces?\n";
    cout << "1. Tratar de salir del contenedor.\n";
    cout << "2. Gritar pidiendo ayuda.\n";
    cout << "3. Quedarte quieto y esperar a que alguien te encuentre.\n";
    cout << "Elige una opción (1-3): ";
    cin >> decision;

    if (decision == 1) {
        cout << "Logras salir del contenedor con esfuerzo. Estás en una especie de almacén cubierto de metal.\n";
        cout << "El lugar está desordenado, parece haber sido abandonado hace tiempo. El aire es denso y pesado.\n";
        escenario2();
    } else if (decision == 2) {
        cout << "Gritas, pero solo el eco de tu voz responde. Nadie parece escuchar. El silencio te envuelve más.\n";
        cout << "Tu situación se vuelve más desesperante. Después de un rato, decides moverte.\n";
        escenario2();
    } else if (decision == 3) {
        cout << "Decides esperar, pero la incertidumbre y el miedo te carcomen. No sabes cuánto tiempo ha pasado.\n";
        cout << "Eventualmente, decides actuar por tu cuenta. Te levantas y buscas una salida.\n";
        escenario2();
    } else {
        cout << "Opción no válida. Te quedas atrapado en el contenedor, sumido en la confusión.\n";
        escenario1();
    }
}

void escenario2() {
    int decision;
    cout << "\nDespués de caminar por un rato, escuchas pasos rápidos acercándose. El miedo se apodera de ti.\n";
    cout << "¿Qué haces?\n";
    cout << "1. Esconderte detrás de unas cajas.\n";
    cout << "2. Acercarte a ver qué está pasando.\n";
    cout << "3. Correr en dirección opuesta.\n";
    cout << "Elige una opción (1-3): ";
    cin >> decision;

    if (decision == 1) {
        cout << "Te escondes detrás de unas cajas y, tras unos segundos, la figura pasa de largo sin notar tu presencia.\n";
        cout << "Parece que has evitado un peligro, pero no sabes qué más te espera.\n";
        escenario3();
    } else if (decision == 2) {
        cout << "Te acercas y ves a una persona con una actitud sospechosa. Ella te observa y sonríe, pero algo en sus ojos te inquieta.\n";
        cout << "Sin decir palabra alguna, la persona se aleja rápidamente. Decides seguirla a una distancia segura.\n";
        escenario3();
    } else if (decision == 3) {
        cout << "Decides correr, pero en tu estado, no llegas lejos. Caes al suelo y alguien te agarra del brazo.\n";
        cout << "Te levanta con fuerza y te obliga a mirar hacia el frente. El miedo te paraliza. ¿Qué será de ti ahora?\n";
        finalMalo();
    } else {
        cout << "Opción no válida. El miedo te paraliza por un momento.\n";
        escenario2();
    }
}

void escenario3() {
    int decision;
    cout << "\nFinalmente, llegas a una extraña habitación iluminada por luces azules. El ambiente es misterioso y tranquilizador.\n";
    cout << "En el centro de la habitación hay un pod de cristal. Dentro de él, se ve a una figura dormida.\n";
    cout << "¿Qué haces?\n";
    cout << "1. Acercarte al pod para investigar.\n";
    cout << "2. Ignorar el pod y buscar una salida.\n";
    cout << "3. Sentarte y descansar un poco.\n";
    cout << "Elige una opción (1-3): ";
    cin >> decision;

    if (decision == 1) {
        cout << "Te acercas al pod y descubres que la figura dentro es una mujer, con cabello largo y blanco. Su rostro tiene una expresión serena.\n";
        cout << "Algo en ella te resulta familiar, pero no puedes recordar qué. El pod se abre lentamente.\n";
        finalBuena();
    } else if (decision == 2) {
        cout << "Decides ignorar el pod y buscar una salida. Después de caminar un rato, encuentras una puerta y logras salir al exterior.\n";
        cout << "La sensación de libertad te invade, aunque el mundo afuera es tan extraño como el que dejaste atrás.\n";
        finalNeutral();
    } else if (decision == 3) {
        cout << "Te sientas y decides descansar un poco. El cansancio te vence y caes en un sueño profundo, desconociendo qué ocurrirá luego.\n";
        finalNeutral();
    } else {
        cout << "Opción no válida. Decides quedarte en la habitación, esperando una decisión más acertada.\n";
        escenario3();
    }
}

void finalBuena() {
    cout << "\nLa mujer en el pod se despierta lentamente. Sonríe al verte y te agradece por tu paciencia. Juntos, encontrarán un camino hacia un futuro mejor.\n";
    cout << "¡Has alcanzado un final positivo! El misterio del pod y su contenido te ha llevado a un camino de esperanza.\n";
}

void finalNeutral() {
    cout << "\nNo estás seguro de lo que sucederá a continuación. El futuro es incierto, pero al menos has logrado sobrevivir hasta este punto.\n";
    cout << "El camino hacia lo desconocido sigue abierto. Lo que pase después depende de tus futuras decisiones.\n";
}

void finalMalo() {
    cout << "\nLa situación toma un giro inesperado. Al no haber podido escapar, quedas atrapado en una realidad incierta.\n";
    cout << "Lamentablemente, este no es el final que esperabas...\n";
}

int main() {
    
    std::setlocale(LC_ALL, "");
    cout << "Bienvenido a la historia mal echa de aleks esta basado en una novela que estoy trabajando.\n Eres un joven que se despierta en un lugar desconocido, con amnesia y rodeado de misterio.\n";
    cout << "Tus decisiones cambiarán el curso de la historia.\n";
    escenario1();
    return 0;
}

