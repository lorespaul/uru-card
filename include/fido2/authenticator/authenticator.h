#pragma once

#include <memory>

#include "fido2/ctap/ctap.h"
#include "fido2/uuid.h"

namespace FIDO2
{
    namespace Authenticator
    {
        extern const FIDO2::UUID aaguid;

        FIDO2::CTAP::Status processRequest(const FIDO2::CTAP::Command *request, std::unique_ptr<FIDO2::CTAP::Command> &response);

        FIDO2::CTAP::Status processRequest(const FIDO2::CTAP::Request::GetInfo *request, std::unique_ptr<FIDO2::CTAP::Command> &response);
        FIDO2::CTAP::Status processRequest(const FIDO2::CTAP::Request::GetAssertion *request, std::unique_ptr<FIDO2::CTAP::Command> &response);
        FIDO2::CTAP::Status processRequest(const FIDO2::CTAP::Request::MakeCredential *request, std::unique_ptr<FIDO2::CTAP::Command> &response);
        FIDO2::CTAP::Status processRequest(const FIDO2::CTAP::Request::ClientPIN *request, std::unique_ptr<FIDO2::CTAP::Command> &response);
        FIDO2::CTAP::Status processRequest(const FIDO2::CTAP::Request::Reset *request, std::unique_ptr<FIDO2::CTAP::Command> &response);
    } // namespace Authenticator
} // namespace FIDO2