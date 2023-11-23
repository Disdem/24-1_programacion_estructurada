// Proyecto 2 - Historia Narrada_Luis_Disdem.cpp 
// Luis Disdem
// Toma de desiciones
// Final
#include <iostream>
#include <locale>
#include <string>


int main() {
	setlocale(LC_ALL, "es_MX.UTF-8");
	char desiciones;
	bool repetir = true;

	do
	{
	std::cout << "--------------------------------------------------\n";
	std::cout << "\tEntre las Penumbras\t\t\n";
	std::cout << "\tBienvenido al menu principal\t\t\n" <<
		"\tPresiona Enter para continuar\t\t\n";
	std::cout << "--------------------------------------------------";
	std::cin.get(); // Pausa para esperar la entrada del usuario
	system("cls");

	std::cout << "----------------------------------------------------------------------------------------------------\n";
	std::cout << "\tEn un antiguo hospital, rodeado por un " <<
		"bosque sombrío y envuelto en un manto de misterio.\t\t\n" <<
		"\tLa enfermera María, conocida por su dedicación, aceptó " <<
		"quedarse de guardia durante la noche en la desierta " <<
		"institución\t\t\n" <<
		"\tAunque el lugar estaba abandonado y la mayoría de los vecinos" <<
		" evitaban pasar cerca, María consideró que era su " <<
		"deber " <<
		"era cuidar de aquel edificio olvidado.\t\t\n" <<
		"\tLa noche avanzaba lentamente, y el zumbido de los fluorescentes que apenas iluminaba los pasillos oscuros. De repente, la luz titiló y se apagó, dejando a María sumida en la oscuridad. Ante esta situación, María debía decidir:\t\t\n";
	std::cout << "\ta) Buscar una linterna en la enfermeria\t\t\n" <<
		"\tb) Explorar a oscuras con cuidado\t\t\n";
	std::cout << "----------------------------------------------------------------------------------------------------\n";
	std::cin >> desiciones;

	if (desiciones == 'a')
	{
		std::cout << "\tMaría optó por buscar una linterna en la enfermería. Mientras revolvía los cajones, escuchó pasos que resonaban por el pasillo. La linterna reveló una figura pálida y demacrada que se desvaneció al instante. Aterrada, María corrió hacia la salida, solo para descubrir que la puerta estaba cerrada. La figura se materializó frente a ella, y la oscuridad la envolvió. \t\t\n";
		system("cls");
		std::cout << "\tHaz perdido\t\t\n";
		std::cout << "\t0.- Salir    1.- Menu\t\t\n";
		std::cin >> repetir;
	}
	else
	{
		std::cout << "\tDecidió explorar a oscuras con cuidado. Siguió el sonido de unos susurros y vio destellos de sombras moviéndose por las paredes. Al llegar a la enfermería, encontró una linterna antigua. Al encenderla, las sombras se dispersaron, y María pudo seguir con su guardia.\t\t\n";

	}

	std::cout << "\tMás tarde, María escuchó un suave llanto proveniente de la sala de maternidad, un lugar cargado de recuerdos y nostalgia. Debía decidir:\t\t\n";
	std::cout << "\ta) Investigar el origen del llanto.\t\t\n" <<
		"\tb)  Ignorar el sonido y continuar su ronda.\t\t\n";
	std::cin >> desiciones;
	if (desiciones == 'a')
	{
		std::cout << "\t Decidió investigar el origen del llanto. Al entrar en la sala, encontró una cuna antigua. En ella yacía un bebé con ojos negros que la miraban fijamente. Una risa siniestra llenó la habitación, y las luces parpadearon. María, incapaz de moverse, fue consumida por la oscuridad.\t\t\n";
		system("cls");
		std::cout << "\tHaz perdido\t\t\n";
		std::cout << "\t0.- Salir    1.- Menu\t\t\n";
		std::cin >> repetir;
	}
	else
	{
		std::cout << "\t Optó por ignorar el llanto y continuar su ronda. La risa se desvaneció, y el resto de la noche transcurrió sin incidentes.\t\t\n";
	}

	std::cout << "\tAl acercarse el amanecer, María llegó al último pasillo, donde una sombra oscura bloqueaba su camino. Debía decidir:\t\t\n" <<
		"\ta) Confrontar a la sombra.\t\t\n" <<
		"\tb) Buscar una salida alternativa a través de las escaleras de incendios.\t\t\n";
	std::cin >> desiciones;

	if (desiciones == 'a')
	{
		std::cout << "\tDecidió confrontar a la sombra. La figura se materializó en una anciana encadenada a la pared. ¡Ayúdame!, suplicó. María, llena de compasión, liberó a la anciana, pero en lugar de agradecérselo, la figura la arrastró hacia la oscuridad, donde ambas desaparecieron.\t\t\n";
		system("cls");
		std::cout << "\tHaz perdido\t\t\n";
		std::cout << "\t0.- Salir    1.- Menu\t\t\n";
		std::cin >> repetir;
	}
	else
	{
		std::cout << "\t Optó por buscar una salida alternativa. Al descender por las escaleras de incendios, llegó al exterior del hospital. La primera luz del día la envolvió, disipando la oscuridad que la había rodeado toda la noche. Sintió alivio al estar fuera del siniestro edificio, pero algo le hizo voltear hacia atrás.\t\t\n" <<
			"\tAl mirar hacia el último pasillo, vio la sombra oscura que antes bloqueaba su camino. La figura tomó forma humana y se reveló como el espíritu de una enfermera que había fallecido en circunstancias misteriosas en aquel hospital años atrás.\t\t\n" <<
			"\tLa enfermera fantasmal le agradeció a María por liberarla de su prisión eterna. *Gracias por liberarme*, susurró la figura antes de desaparecer en un destello de luz. María sintió una extraña sensación de paz y satisfacción.\t\t\n" <<
			"\tEl hospital, ahora liberado de su oscuro pasado, comenzó a desmoronarse lentamente. María, al alejarse, vio cómo el edificio se desvanecía en el aire, como si nunca hubiera existido. La luz del día iluminó completamente el área, y el bosque circundante cobró vida con sonidos de pájaros y el murmullo del viento.\t\t\n" <<
			"\tMaría, aunque marcada por la experiencia, salió indemne y con la certeza de que había tomado las decisiones correctas. La leyenda del hospital abandonado desapareció junto con el edificio, dejando atrás solo el eco de una noche de terror que finalmente encontró su redención.\t\t\n";
		
	}
	std::cout << "\t 0.- Salir		1.- Menu\n";
	std::cin >> repetir;
	} while (repetir == true);
}



