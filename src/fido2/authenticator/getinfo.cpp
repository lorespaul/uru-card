#include <memory>

#include <Arduino.h>

#include "fido2/authenticator/authenticator.h"

namespace FIDO2
{
    namespace Authenticator
    {
        FIDO2::CTAP::Status processRequest(const FIDO2::CTAP::Request::GetInfo *request, std::unique_ptr<FIDO2::CTAP::Command> &response)
        {
            FIDO2::CTAP::Response::GetInfo *resp = new FIDO2::CTAP::Response::GetInfo();

            resp->versions.push_back("FIDO_2_0");

            resp->aaguid = "63d9df31-662d-476a-a7a7-53b6aa038975";

            response = std::unique_ptr<FIDO2::CTAP::Command>(resp);

            return FIDO2::CTAP::CTAP2_OK;
        }
    } // namespace Authenticator
} // namespace FIDO2