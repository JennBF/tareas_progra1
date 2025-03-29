#ifndef PERSONA_H
#define PERSONA_H


class persona
{
    public:
        persona(string nombre, int edad, string genero);

        virtual void saludo();

    protected:

    private:
        string nombre;
        int edad;
        string genero;
};

#endif // PERSONA_H
