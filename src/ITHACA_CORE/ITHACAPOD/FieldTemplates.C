#include "FieldTemplates.H"

#include "GeometricFields.H"
#include "fvPatchFields.H"
#include "volMesh.H"

void ITHACAPOD::FieldTemplates::set_fullStressFunction(Foam::volVectorField& templateSmag)
{ 
        m_fullStressFunction = Foam::autoPtr(new Foam::volVectorField(templateSmag));
}
