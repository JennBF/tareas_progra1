#ifndef ESTACIONAMIENTO_H
#define ESTACIONAMIENTO_H


class Estacionamiento
{
    public:
        Estacionamiento();

        Estacionamiento(int numeroAuto, double horas, double tarifa);
        void calcularTarifa();
        void mostrarDatos() const;
        double obtenerTarifa() const;
        double obtenerHoras() const;

    protected:

    private:

        int numeroAuto;
        double horas;
        double tarifa;
};

#endif // ESTACIONAMIENTO_H
