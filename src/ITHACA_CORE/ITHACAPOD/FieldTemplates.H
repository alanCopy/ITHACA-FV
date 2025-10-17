#ifndef FIELDPARAMETERS_H
#define FIELDPARAMETERS_H
#pragma once

#include "volFieldsFwd.H"

namespace ITHACAPOD
{
/**
 * @brief Stores template fields for velocity, pressure, and turbulence quantities
 */
class FieldTemplates
{
public:
    const Foam::volVectorField& get_U() const { return m_U(); }
    const Foam::volScalarField& get_p() const { return m_p(); }
    Foam::volScalarField& get_nut() { return m_nut(); }
    const Foam::volScalarField& get_omega() const { return m_omega(); }
    const Foam::volScalarField& get_k() const { return m_k(); }
    const Foam::volVectorField& get_fullStressFunction() const { return *m_fullStressFunction; }
    
    void set_U(Foam::volVectorField* u) { m_U.reset(u); }
    void set_p(Foam::volScalarField* p) { m_p.reset(p); }
    void set_nut(Foam::volScalarField* nut) { m_nut.reset(nut); }
    void set_omega(Foam::volScalarField* omega) { m_omega.reset(omega); }
    void set_k(Foam::volScalarField* k) { m_k.reset(k); }
    void set_fullStressFunction(Foam::volVectorField& templateSmag); 


private:
    Foam::autoPtr<Foam::volVectorField> m_U;
    Foam::autoPtr<Foam::volScalarField> m_p;
    Foam::autoPtr<Foam::volScalarField> m_nut;
    Foam::autoPtr<Foam::volScalarField> m_omega;
    Foam::autoPtr<Foam::volScalarField> m_k;
    Foam::autoPtr<Foam::volVectorField> m_fullStressFunction;
};
}
#endif // MESHPARAMETERS_H
