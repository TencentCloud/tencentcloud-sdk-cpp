/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/ssl/v20191205/SslClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ssl::V20191205;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-12-05";
    const string ENDPOINT = "ssl.tencentcloudapi.com";
}

SslClient::SslClient(const Credential &credential, const string &region) :
    SslClient(credential, region, ClientProfile())
{
}

SslClient::SslClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


SslClient::ApplyCertificateOutcome SslClient::ApplyCertificate(const ApplyCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyCertificateResponse rsp = ApplyCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyCertificateOutcome(rsp);
        else
            return ApplyCertificateOutcome(o.GetError());
    }
    else
    {
        return ApplyCertificateOutcome(outcome.GetError());
    }
}

void SslClient::ApplyCertificateAsync(const ApplyCertificateRequest& request, const ApplyCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyCertificateRequest&;
    using Resp = ApplyCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::ApplyCertificateOutcomeCallable SslClient::ApplyCertificateCallable(const ApplyCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyCertificateOutcome>>();
    ApplyCertificateAsync(
    request,
    [prom](
        const SslClient*,
        const ApplyCertificateRequest&,
        ApplyCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::CancelAuditCertificateOutcome SslClient::CancelAuditCertificate(const CancelAuditCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "CancelAuditCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelAuditCertificateResponse rsp = CancelAuditCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelAuditCertificateOutcome(rsp);
        else
            return CancelAuditCertificateOutcome(o.GetError());
    }
    else
    {
        return CancelAuditCertificateOutcome(outcome.GetError());
    }
}

void SslClient::CancelAuditCertificateAsync(const CancelAuditCertificateRequest& request, const CancelAuditCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelAuditCertificateRequest&;
    using Resp = CancelAuditCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "CancelAuditCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::CancelAuditCertificateOutcomeCallable SslClient::CancelAuditCertificateCallable(const CancelAuditCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelAuditCertificateOutcome>>();
    CancelAuditCertificateAsync(
    request,
    [prom](
        const SslClient*,
        const CancelAuditCertificateRequest&,
        CancelAuditCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::CancelCertificateOrderOutcome SslClient::CancelCertificateOrder(const CancelCertificateOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CancelCertificateOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelCertificateOrderResponse rsp = CancelCertificateOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelCertificateOrderOutcome(rsp);
        else
            return CancelCertificateOrderOutcome(o.GetError());
    }
    else
    {
        return CancelCertificateOrderOutcome(outcome.GetError());
    }
}

void SslClient::CancelCertificateOrderAsync(const CancelCertificateOrderRequest& request, const CancelCertificateOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelCertificateOrderRequest&;
    using Resp = CancelCertificateOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CancelCertificateOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::CancelCertificateOrderOutcomeCallable SslClient::CancelCertificateOrderCallable(const CancelCertificateOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelCertificateOrderOutcome>>();
    CancelCertificateOrderAsync(
    request,
    [prom](
        const SslClient*,
        const CancelCertificateOrderRequest&,
        CancelCertificateOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::CertificateInfoSubmitOutcome SslClient::CertificateInfoSubmit(const CertificateInfoSubmitRequest &request)
{
    auto outcome = MakeRequest(request, "CertificateInfoSubmit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CertificateInfoSubmitResponse rsp = CertificateInfoSubmitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CertificateInfoSubmitOutcome(rsp);
        else
            return CertificateInfoSubmitOutcome(o.GetError());
    }
    else
    {
        return CertificateInfoSubmitOutcome(outcome.GetError());
    }
}

void SslClient::CertificateInfoSubmitAsync(const CertificateInfoSubmitRequest& request, const CertificateInfoSubmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CertificateInfoSubmitRequest&;
    using Resp = CertificateInfoSubmitResponse;

    DoRequestAsync<Req, Resp>(
        "CertificateInfoSubmit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::CertificateInfoSubmitOutcomeCallable SslClient::CertificateInfoSubmitCallable(const CertificateInfoSubmitRequest &request)
{
    const auto prom = std::make_shared<std::promise<CertificateInfoSubmitOutcome>>();
    CertificateInfoSubmitAsync(
    request,
    [prom](
        const SslClient*,
        const CertificateInfoSubmitRequest&,
        CertificateInfoSubmitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::CertificateOrderSubmitOutcome SslClient::CertificateOrderSubmit(const CertificateOrderSubmitRequest &request)
{
    auto outcome = MakeRequest(request, "CertificateOrderSubmit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CertificateOrderSubmitResponse rsp = CertificateOrderSubmitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CertificateOrderSubmitOutcome(rsp);
        else
            return CertificateOrderSubmitOutcome(o.GetError());
    }
    else
    {
        return CertificateOrderSubmitOutcome(outcome.GetError());
    }
}

void SslClient::CertificateOrderSubmitAsync(const CertificateOrderSubmitRequest& request, const CertificateOrderSubmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CertificateOrderSubmitRequest&;
    using Resp = CertificateOrderSubmitResponse;

    DoRequestAsync<Req, Resp>(
        "CertificateOrderSubmit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::CertificateOrderSubmitOutcomeCallable SslClient::CertificateOrderSubmitCallable(const CertificateOrderSubmitRequest &request)
{
    const auto prom = std::make_shared<std::promise<CertificateOrderSubmitOutcome>>();
    CertificateOrderSubmitAsync(
    request,
    [prom](
        const SslClient*,
        const CertificateOrderSubmitRequest&,
        CertificateOrderSubmitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::CheckCertificateChainOutcome SslClient::CheckCertificateChain(const CheckCertificateChainRequest &request)
{
    auto outcome = MakeRequest(request, "CheckCertificateChain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckCertificateChainResponse rsp = CheckCertificateChainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckCertificateChainOutcome(rsp);
        else
            return CheckCertificateChainOutcome(o.GetError());
    }
    else
    {
        return CheckCertificateChainOutcome(outcome.GetError());
    }
}

void SslClient::CheckCertificateChainAsync(const CheckCertificateChainRequest& request, const CheckCertificateChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckCertificateChainRequest&;
    using Resp = CheckCertificateChainResponse;

    DoRequestAsync<Req, Resp>(
        "CheckCertificateChain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::CheckCertificateChainOutcomeCallable SslClient::CheckCertificateChainCallable(const CheckCertificateChainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckCertificateChainOutcome>>();
    CheckCertificateChainAsync(
    request,
    [prom](
        const SslClient*,
        const CheckCertificateChainRequest&,
        CheckCertificateChainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::CheckCertificateDomainVerificationOutcome SslClient::CheckCertificateDomainVerification(const CheckCertificateDomainVerificationRequest &request)
{
    auto outcome = MakeRequest(request, "CheckCertificateDomainVerification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckCertificateDomainVerificationResponse rsp = CheckCertificateDomainVerificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckCertificateDomainVerificationOutcome(rsp);
        else
            return CheckCertificateDomainVerificationOutcome(o.GetError());
    }
    else
    {
        return CheckCertificateDomainVerificationOutcome(outcome.GetError());
    }
}

void SslClient::CheckCertificateDomainVerificationAsync(const CheckCertificateDomainVerificationRequest& request, const CheckCertificateDomainVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckCertificateDomainVerificationRequest&;
    using Resp = CheckCertificateDomainVerificationResponse;

    DoRequestAsync<Req, Resp>(
        "CheckCertificateDomainVerification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::CheckCertificateDomainVerificationOutcomeCallable SslClient::CheckCertificateDomainVerificationCallable(const CheckCertificateDomainVerificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckCertificateDomainVerificationOutcome>>();
    CheckCertificateDomainVerificationAsync(
    request,
    [prom](
        const SslClient*,
        const CheckCertificateDomainVerificationRequest&,
        CheckCertificateDomainVerificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::CheckCertificateExistOutcome SslClient::CheckCertificateExist(const CheckCertificateExistRequest &request)
{
    auto outcome = MakeRequest(request, "CheckCertificateExist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckCertificateExistResponse rsp = CheckCertificateExistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckCertificateExistOutcome(rsp);
        else
            return CheckCertificateExistOutcome(o.GetError());
    }
    else
    {
        return CheckCertificateExistOutcome(outcome.GetError());
    }
}

void SslClient::CheckCertificateExistAsync(const CheckCertificateExistRequest& request, const CheckCertificateExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckCertificateExistRequest&;
    using Resp = CheckCertificateExistResponse;

    DoRequestAsync<Req, Resp>(
        "CheckCertificateExist", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::CheckCertificateExistOutcomeCallable SslClient::CheckCertificateExistCallable(const CheckCertificateExistRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckCertificateExistOutcome>>();
    CheckCertificateExistAsync(
    request,
    [prom](
        const SslClient*,
        const CheckCertificateExistRequest&,
        CheckCertificateExistOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::CommitCertificateInformationOutcome SslClient::CommitCertificateInformation(const CommitCertificateInformationRequest &request)
{
    auto outcome = MakeRequest(request, "CommitCertificateInformation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CommitCertificateInformationResponse rsp = CommitCertificateInformationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CommitCertificateInformationOutcome(rsp);
        else
            return CommitCertificateInformationOutcome(o.GetError());
    }
    else
    {
        return CommitCertificateInformationOutcome(outcome.GetError());
    }
}

void SslClient::CommitCertificateInformationAsync(const CommitCertificateInformationRequest& request, const CommitCertificateInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CommitCertificateInformationRequest&;
    using Resp = CommitCertificateInformationResponse;

    DoRequestAsync<Req, Resp>(
        "CommitCertificateInformation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::CommitCertificateInformationOutcomeCallable SslClient::CommitCertificateInformationCallable(const CommitCertificateInformationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CommitCertificateInformationOutcome>>();
    CommitCertificateInformationAsync(
    request,
    [prom](
        const SslClient*,
        const CommitCertificateInformationRequest&,
        CommitCertificateInformationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::CompleteCertificateOutcome SslClient::CompleteCertificate(const CompleteCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "CompleteCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CompleteCertificateResponse rsp = CompleteCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CompleteCertificateOutcome(rsp);
        else
            return CompleteCertificateOutcome(o.GetError());
    }
    else
    {
        return CompleteCertificateOutcome(outcome.GetError());
    }
}

void SslClient::CompleteCertificateAsync(const CompleteCertificateRequest& request, const CompleteCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CompleteCertificateRequest&;
    using Resp = CompleteCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "CompleteCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::CompleteCertificateOutcomeCallable SslClient::CompleteCertificateCallable(const CompleteCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CompleteCertificateOutcome>>();
    CompleteCertificateAsync(
    request,
    [prom](
        const SslClient*,
        const CompleteCertificateRequest&,
        CompleteCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::CreateCertificateOutcome SslClient::CreateCertificate(const CreateCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCertificateResponse rsp = CreateCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCertificateOutcome(rsp);
        else
            return CreateCertificateOutcome(o.GetError());
    }
    else
    {
        return CreateCertificateOutcome(outcome.GetError());
    }
}

void SslClient::CreateCertificateAsync(const CreateCertificateRequest& request, const CreateCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCertificateRequest&;
    using Resp = CreateCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::CreateCertificateOutcomeCallable SslClient::CreateCertificateCallable(const CreateCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCertificateOutcome>>();
    CreateCertificateAsync(
    request,
    [prom](
        const SslClient*,
        const CreateCertificateRequest&,
        CreateCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::CreateCertificateBindResourceSyncTaskOutcome SslClient::CreateCertificateBindResourceSyncTask(const CreateCertificateBindResourceSyncTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCertificateBindResourceSyncTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCertificateBindResourceSyncTaskResponse rsp = CreateCertificateBindResourceSyncTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCertificateBindResourceSyncTaskOutcome(rsp);
        else
            return CreateCertificateBindResourceSyncTaskOutcome(o.GetError());
    }
    else
    {
        return CreateCertificateBindResourceSyncTaskOutcome(outcome.GetError());
    }
}

void SslClient::CreateCertificateBindResourceSyncTaskAsync(const CreateCertificateBindResourceSyncTaskRequest& request, const CreateCertificateBindResourceSyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCertificateBindResourceSyncTaskRequest&;
    using Resp = CreateCertificateBindResourceSyncTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCertificateBindResourceSyncTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::CreateCertificateBindResourceSyncTaskOutcomeCallable SslClient::CreateCertificateBindResourceSyncTaskCallable(const CreateCertificateBindResourceSyncTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCertificateBindResourceSyncTaskOutcome>>();
    CreateCertificateBindResourceSyncTaskAsync(
    request,
    [prom](
        const SslClient*,
        const CreateCertificateBindResourceSyncTaskRequest&,
        CreateCertificateBindResourceSyncTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::CreateCertificateByPackageOutcome SslClient::CreateCertificateByPackage(const CreateCertificateByPackageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCertificateByPackage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCertificateByPackageResponse rsp = CreateCertificateByPackageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCertificateByPackageOutcome(rsp);
        else
            return CreateCertificateByPackageOutcome(o.GetError());
    }
    else
    {
        return CreateCertificateByPackageOutcome(outcome.GetError());
    }
}

void SslClient::CreateCertificateByPackageAsync(const CreateCertificateByPackageRequest& request, const CreateCertificateByPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCertificateByPackageRequest&;
    using Resp = CreateCertificateByPackageResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCertificateByPackage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::CreateCertificateByPackageOutcomeCallable SslClient::CreateCertificateByPackageCallable(const CreateCertificateByPackageRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCertificateByPackageOutcome>>();
    CreateCertificateByPackageAsync(
    request,
    [prom](
        const SslClient*,
        const CreateCertificateByPackageRequest&,
        CreateCertificateByPackageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DeleteCertificateOutcome SslClient::DeleteCertificate(const DeleteCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCertificateResponse rsp = DeleteCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCertificateOutcome(rsp);
        else
            return DeleteCertificateOutcome(o.GetError());
    }
    else
    {
        return DeleteCertificateOutcome(outcome.GetError());
    }
}

void SslClient::DeleteCertificateAsync(const DeleteCertificateRequest& request, const DeleteCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCertificateRequest&;
    using Resp = DeleteCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DeleteCertificateOutcomeCallable SslClient::DeleteCertificateCallable(const DeleteCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCertificateOutcome>>();
    DeleteCertificateAsync(
    request,
    [prom](
        const SslClient*,
        const DeleteCertificateRequest&,
        DeleteCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DeleteCertificatesOutcome SslClient::DeleteCertificates(const DeleteCertificatesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCertificates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCertificatesResponse rsp = DeleteCertificatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCertificatesOutcome(rsp);
        else
            return DeleteCertificatesOutcome(o.GetError());
    }
    else
    {
        return DeleteCertificatesOutcome(outcome.GetError());
    }
}

void SslClient::DeleteCertificatesAsync(const DeleteCertificatesRequest& request, const DeleteCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCertificatesRequest&;
    using Resp = DeleteCertificatesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCertificates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DeleteCertificatesOutcomeCallable SslClient::DeleteCertificatesCallable(const DeleteCertificatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCertificatesOutcome>>();
    DeleteCertificatesAsync(
    request,
    [prom](
        const SslClient*,
        const DeleteCertificatesRequest&,
        DeleteCertificatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DeleteManagerOutcome SslClient::DeleteManager(const DeleteManagerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteManager");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteManagerResponse rsp = DeleteManagerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteManagerOutcome(rsp);
        else
            return DeleteManagerOutcome(o.GetError());
    }
    else
    {
        return DeleteManagerOutcome(outcome.GetError());
    }
}

void SslClient::DeleteManagerAsync(const DeleteManagerRequest& request, const DeleteManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteManagerRequest&;
    using Resp = DeleteManagerResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteManager", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DeleteManagerOutcomeCallable SslClient::DeleteManagerCallable(const DeleteManagerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteManagerOutcome>>();
    DeleteManagerAsync(
    request,
    [prom](
        const SslClient*,
        const DeleteManagerRequest&,
        DeleteManagerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DeployCertificateInstanceOutcome SslClient::DeployCertificateInstance(const DeployCertificateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeployCertificateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeployCertificateInstanceResponse rsp = DeployCertificateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeployCertificateInstanceOutcome(rsp);
        else
            return DeployCertificateInstanceOutcome(o.GetError());
    }
    else
    {
        return DeployCertificateInstanceOutcome(outcome.GetError());
    }
}

void SslClient::DeployCertificateInstanceAsync(const DeployCertificateInstanceRequest& request, const DeployCertificateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeployCertificateInstanceRequest&;
    using Resp = DeployCertificateInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DeployCertificateInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DeployCertificateInstanceOutcomeCallable SslClient::DeployCertificateInstanceCallable(const DeployCertificateInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeployCertificateInstanceOutcome>>();
    DeployCertificateInstanceAsync(
    request,
    [prom](
        const SslClient*,
        const DeployCertificateInstanceRequest&,
        DeployCertificateInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DeployCertificateRecordRetryOutcome SslClient::DeployCertificateRecordRetry(const DeployCertificateRecordRetryRequest &request)
{
    auto outcome = MakeRequest(request, "DeployCertificateRecordRetry");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeployCertificateRecordRetryResponse rsp = DeployCertificateRecordRetryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeployCertificateRecordRetryOutcome(rsp);
        else
            return DeployCertificateRecordRetryOutcome(o.GetError());
    }
    else
    {
        return DeployCertificateRecordRetryOutcome(outcome.GetError());
    }
}

void SslClient::DeployCertificateRecordRetryAsync(const DeployCertificateRecordRetryRequest& request, const DeployCertificateRecordRetryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeployCertificateRecordRetryRequest&;
    using Resp = DeployCertificateRecordRetryResponse;

    DoRequestAsync<Req, Resp>(
        "DeployCertificateRecordRetry", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DeployCertificateRecordRetryOutcomeCallable SslClient::DeployCertificateRecordRetryCallable(const DeployCertificateRecordRetryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeployCertificateRecordRetryOutcome>>();
    DeployCertificateRecordRetryAsync(
    request,
    [prom](
        const SslClient*,
        const DeployCertificateRecordRetryRequest&,
        DeployCertificateRecordRetryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DeployCertificateRecordRollbackOutcome SslClient::DeployCertificateRecordRollback(const DeployCertificateRecordRollbackRequest &request)
{
    auto outcome = MakeRequest(request, "DeployCertificateRecordRollback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeployCertificateRecordRollbackResponse rsp = DeployCertificateRecordRollbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeployCertificateRecordRollbackOutcome(rsp);
        else
            return DeployCertificateRecordRollbackOutcome(o.GetError());
    }
    else
    {
        return DeployCertificateRecordRollbackOutcome(outcome.GetError());
    }
}

void SslClient::DeployCertificateRecordRollbackAsync(const DeployCertificateRecordRollbackRequest& request, const DeployCertificateRecordRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeployCertificateRecordRollbackRequest&;
    using Resp = DeployCertificateRecordRollbackResponse;

    DoRequestAsync<Req, Resp>(
        "DeployCertificateRecordRollback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DeployCertificateRecordRollbackOutcomeCallable SslClient::DeployCertificateRecordRollbackCallable(const DeployCertificateRecordRollbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeployCertificateRecordRollbackOutcome>>();
    DeployCertificateRecordRollbackAsync(
    request,
    [prom](
        const SslClient*,
        const DeployCertificateRecordRollbackRequest&,
        DeployCertificateRecordRollbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeCertificateOutcome SslClient::DescribeCertificate(const DescribeCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCertificateResponse rsp = DescribeCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCertificateOutcome(rsp);
        else
            return DescribeCertificateOutcome(o.GetError());
    }
    else
    {
        return DescribeCertificateOutcome(outcome.GetError());
    }
}

void SslClient::DescribeCertificateAsync(const DescribeCertificateRequest& request, const DescribeCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCertificateRequest&;
    using Resp = DescribeCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeCertificateOutcomeCallable SslClient::DescribeCertificateCallable(const DescribeCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCertificateOutcome>>();
    DescribeCertificateAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeCertificateRequest&,
        DescribeCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeCertificateBindResourceTaskDetailOutcome SslClient::DescribeCertificateBindResourceTaskDetail(const DescribeCertificateBindResourceTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCertificateBindResourceTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCertificateBindResourceTaskDetailResponse rsp = DescribeCertificateBindResourceTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCertificateBindResourceTaskDetailOutcome(rsp);
        else
            return DescribeCertificateBindResourceTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCertificateBindResourceTaskDetailOutcome(outcome.GetError());
    }
}

void SslClient::DescribeCertificateBindResourceTaskDetailAsync(const DescribeCertificateBindResourceTaskDetailRequest& request, const DescribeCertificateBindResourceTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCertificateBindResourceTaskDetailRequest&;
    using Resp = DescribeCertificateBindResourceTaskDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCertificateBindResourceTaskDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeCertificateBindResourceTaskDetailOutcomeCallable SslClient::DescribeCertificateBindResourceTaskDetailCallable(const DescribeCertificateBindResourceTaskDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCertificateBindResourceTaskDetailOutcome>>();
    DescribeCertificateBindResourceTaskDetailAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeCertificateBindResourceTaskDetailRequest&,
        DescribeCertificateBindResourceTaskDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeCertificateBindResourceTaskResultOutcome SslClient::DescribeCertificateBindResourceTaskResult(const DescribeCertificateBindResourceTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCertificateBindResourceTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCertificateBindResourceTaskResultResponse rsp = DescribeCertificateBindResourceTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCertificateBindResourceTaskResultOutcome(rsp);
        else
            return DescribeCertificateBindResourceTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeCertificateBindResourceTaskResultOutcome(outcome.GetError());
    }
}

void SslClient::DescribeCertificateBindResourceTaskResultAsync(const DescribeCertificateBindResourceTaskResultRequest& request, const DescribeCertificateBindResourceTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCertificateBindResourceTaskResultRequest&;
    using Resp = DescribeCertificateBindResourceTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCertificateBindResourceTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeCertificateBindResourceTaskResultOutcomeCallable SslClient::DescribeCertificateBindResourceTaskResultCallable(const DescribeCertificateBindResourceTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCertificateBindResourceTaskResultOutcome>>();
    DescribeCertificateBindResourceTaskResultAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeCertificateBindResourceTaskResultRequest&,
        DescribeCertificateBindResourceTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeCertificateDetailOutcome SslClient::DescribeCertificateDetail(const DescribeCertificateDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCertificateDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCertificateDetailResponse rsp = DescribeCertificateDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCertificateDetailOutcome(rsp);
        else
            return DescribeCertificateDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCertificateDetailOutcome(outcome.GetError());
    }
}

void SslClient::DescribeCertificateDetailAsync(const DescribeCertificateDetailRequest& request, const DescribeCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCertificateDetailRequest&;
    using Resp = DescribeCertificateDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCertificateDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeCertificateDetailOutcomeCallable SslClient::DescribeCertificateDetailCallable(const DescribeCertificateDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCertificateDetailOutcome>>();
    DescribeCertificateDetailAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeCertificateDetailRequest&,
        DescribeCertificateDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeCertificateOperateLogsOutcome SslClient::DescribeCertificateOperateLogs(const DescribeCertificateOperateLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCertificateOperateLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCertificateOperateLogsResponse rsp = DescribeCertificateOperateLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCertificateOperateLogsOutcome(rsp);
        else
            return DescribeCertificateOperateLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeCertificateOperateLogsOutcome(outcome.GetError());
    }
}

void SslClient::DescribeCertificateOperateLogsAsync(const DescribeCertificateOperateLogsRequest& request, const DescribeCertificateOperateLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCertificateOperateLogsRequest&;
    using Resp = DescribeCertificateOperateLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCertificateOperateLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeCertificateOperateLogsOutcomeCallable SslClient::DescribeCertificateOperateLogsCallable(const DescribeCertificateOperateLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCertificateOperateLogsOutcome>>();
    DescribeCertificateOperateLogsAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeCertificateOperateLogsRequest&,
        DescribeCertificateOperateLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeCertificatesOutcome SslClient::DescribeCertificates(const DescribeCertificatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCertificates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCertificatesResponse rsp = DescribeCertificatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCertificatesOutcome(rsp);
        else
            return DescribeCertificatesOutcome(o.GetError());
    }
    else
    {
        return DescribeCertificatesOutcome(outcome.GetError());
    }
}

void SslClient::DescribeCertificatesAsync(const DescribeCertificatesRequest& request, const DescribeCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCertificatesRequest&;
    using Resp = DescribeCertificatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCertificates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeCertificatesOutcomeCallable SslClient::DescribeCertificatesCallable(const DescribeCertificatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCertificatesOutcome>>();
    DescribeCertificatesAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeCertificatesRequest&,
        DescribeCertificatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeCompaniesOutcome SslClient::DescribeCompanies(const DescribeCompaniesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCompanies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCompaniesResponse rsp = DescribeCompaniesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCompaniesOutcome(rsp);
        else
            return DescribeCompaniesOutcome(o.GetError());
    }
    else
    {
        return DescribeCompaniesOutcome(outcome.GetError());
    }
}

void SslClient::DescribeCompaniesAsync(const DescribeCompaniesRequest& request, const DescribeCompaniesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCompaniesRequest&;
    using Resp = DescribeCompaniesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCompanies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeCompaniesOutcomeCallable SslClient::DescribeCompaniesCallable(const DescribeCompaniesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCompaniesOutcome>>();
    DescribeCompaniesAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeCompaniesRequest&,
        DescribeCompaniesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeDeleteCertificatesTaskResultOutcome SslClient::DescribeDeleteCertificatesTaskResult(const DescribeDeleteCertificatesTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeleteCertificatesTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeleteCertificatesTaskResultResponse rsp = DescribeDeleteCertificatesTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeleteCertificatesTaskResultOutcome(rsp);
        else
            return DescribeDeleteCertificatesTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeDeleteCertificatesTaskResultOutcome(outcome.GetError());
    }
}

void SslClient::DescribeDeleteCertificatesTaskResultAsync(const DescribeDeleteCertificatesTaskResultRequest& request, const DescribeDeleteCertificatesTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeleteCertificatesTaskResultRequest&;
    using Resp = DescribeDeleteCertificatesTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeleteCertificatesTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeDeleteCertificatesTaskResultOutcomeCallable SslClient::DescribeDeleteCertificatesTaskResultCallable(const DescribeDeleteCertificatesTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeleteCertificatesTaskResultOutcome>>();
    DescribeDeleteCertificatesTaskResultAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeDeleteCertificatesTaskResultRequest&,
        DescribeDeleteCertificatesTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeDeployedResourcesOutcome SslClient::DescribeDeployedResources(const DescribeDeployedResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeployedResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeployedResourcesResponse rsp = DescribeDeployedResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeployedResourcesOutcome(rsp);
        else
            return DescribeDeployedResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeDeployedResourcesOutcome(outcome.GetError());
    }
}

void SslClient::DescribeDeployedResourcesAsync(const DescribeDeployedResourcesRequest& request, const DescribeDeployedResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeployedResourcesRequest&;
    using Resp = DescribeDeployedResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeployedResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeDeployedResourcesOutcomeCallable SslClient::DescribeDeployedResourcesCallable(const DescribeDeployedResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeployedResourcesOutcome>>();
    DescribeDeployedResourcesAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeDeployedResourcesRequest&,
        DescribeDeployedResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeDownloadCertificateUrlOutcome SslClient::DescribeDownloadCertificateUrl(const DescribeDownloadCertificateUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDownloadCertificateUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDownloadCertificateUrlResponse rsp = DescribeDownloadCertificateUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDownloadCertificateUrlOutcome(rsp);
        else
            return DescribeDownloadCertificateUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeDownloadCertificateUrlOutcome(outcome.GetError());
    }
}

void SslClient::DescribeDownloadCertificateUrlAsync(const DescribeDownloadCertificateUrlRequest& request, const DescribeDownloadCertificateUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDownloadCertificateUrlRequest&;
    using Resp = DescribeDownloadCertificateUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDownloadCertificateUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeDownloadCertificateUrlOutcomeCallable SslClient::DescribeDownloadCertificateUrlCallable(const DescribeDownloadCertificateUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDownloadCertificateUrlOutcome>>();
    DescribeDownloadCertificateUrlAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeDownloadCertificateUrlRequest&,
        DescribeDownloadCertificateUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeHostApiGatewayInstanceListOutcome SslClient::DescribeHostApiGatewayInstanceList(const DescribeHostApiGatewayInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostApiGatewayInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostApiGatewayInstanceListResponse rsp = DescribeHostApiGatewayInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostApiGatewayInstanceListOutcome(rsp);
        else
            return DescribeHostApiGatewayInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeHostApiGatewayInstanceListOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostApiGatewayInstanceListAsync(const DescribeHostApiGatewayInstanceListRequest& request, const DescribeHostApiGatewayInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostApiGatewayInstanceListRequest&;
    using Resp = DescribeHostApiGatewayInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostApiGatewayInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeHostApiGatewayInstanceListOutcomeCallable SslClient::DescribeHostApiGatewayInstanceListCallable(const DescribeHostApiGatewayInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostApiGatewayInstanceListOutcome>>();
    DescribeHostApiGatewayInstanceListAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeHostApiGatewayInstanceListRequest&,
        DescribeHostApiGatewayInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeHostCdnInstanceListOutcome SslClient::DescribeHostCdnInstanceList(const DescribeHostCdnInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostCdnInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostCdnInstanceListResponse rsp = DescribeHostCdnInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostCdnInstanceListOutcome(rsp);
        else
            return DescribeHostCdnInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeHostCdnInstanceListOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostCdnInstanceListAsync(const DescribeHostCdnInstanceListRequest& request, const DescribeHostCdnInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostCdnInstanceListRequest&;
    using Resp = DescribeHostCdnInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostCdnInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeHostCdnInstanceListOutcomeCallable SslClient::DescribeHostCdnInstanceListCallable(const DescribeHostCdnInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostCdnInstanceListOutcome>>();
    DescribeHostCdnInstanceListAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeHostCdnInstanceListRequest&,
        DescribeHostCdnInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeHostClbInstanceListOutcome SslClient::DescribeHostClbInstanceList(const DescribeHostClbInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostClbInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostClbInstanceListResponse rsp = DescribeHostClbInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostClbInstanceListOutcome(rsp);
        else
            return DescribeHostClbInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeHostClbInstanceListOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostClbInstanceListAsync(const DescribeHostClbInstanceListRequest& request, const DescribeHostClbInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostClbInstanceListRequest&;
    using Resp = DescribeHostClbInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostClbInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeHostClbInstanceListOutcomeCallable SslClient::DescribeHostClbInstanceListCallable(const DescribeHostClbInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostClbInstanceListOutcome>>();
    DescribeHostClbInstanceListAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeHostClbInstanceListRequest&,
        DescribeHostClbInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeHostCosInstanceListOutcome SslClient::DescribeHostCosInstanceList(const DescribeHostCosInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostCosInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostCosInstanceListResponse rsp = DescribeHostCosInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostCosInstanceListOutcome(rsp);
        else
            return DescribeHostCosInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeHostCosInstanceListOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostCosInstanceListAsync(const DescribeHostCosInstanceListRequest& request, const DescribeHostCosInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostCosInstanceListRequest&;
    using Resp = DescribeHostCosInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostCosInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeHostCosInstanceListOutcomeCallable SslClient::DescribeHostCosInstanceListCallable(const DescribeHostCosInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostCosInstanceListOutcome>>();
    DescribeHostCosInstanceListAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeHostCosInstanceListRequest&,
        DescribeHostCosInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeHostDdosInstanceListOutcome SslClient::DescribeHostDdosInstanceList(const DescribeHostDdosInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostDdosInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostDdosInstanceListResponse rsp = DescribeHostDdosInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostDdosInstanceListOutcome(rsp);
        else
            return DescribeHostDdosInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeHostDdosInstanceListOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostDdosInstanceListAsync(const DescribeHostDdosInstanceListRequest& request, const DescribeHostDdosInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostDdosInstanceListRequest&;
    using Resp = DescribeHostDdosInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostDdosInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeHostDdosInstanceListOutcomeCallable SslClient::DescribeHostDdosInstanceListCallable(const DescribeHostDdosInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostDdosInstanceListOutcome>>();
    DescribeHostDdosInstanceListAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeHostDdosInstanceListRequest&,
        DescribeHostDdosInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeHostDeployRecordOutcome SslClient::DescribeHostDeployRecord(const DescribeHostDeployRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostDeployRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostDeployRecordResponse rsp = DescribeHostDeployRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostDeployRecordOutcome(rsp);
        else
            return DescribeHostDeployRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeHostDeployRecordOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostDeployRecordAsync(const DescribeHostDeployRecordRequest& request, const DescribeHostDeployRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostDeployRecordRequest&;
    using Resp = DescribeHostDeployRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostDeployRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeHostDeployRecordOutcomeCallable SslClient::DescribeHostDeployRecordCallable(const DescribeHostDeployRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostDeployRecordOutcome>>();
    DescribeHostDeployRecordAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeHostDeployRecordRequest&,
        DescribeHostDeployRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeHostDeployRecordDetailOutcome SslClient::DescribeHostDeployRecordDetail(const DescribeHostDeployRecordDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostDeployRecordDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostDeployRecordDetailResponse rsp = DescribeHostDeployRecordDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostDeployRecordDetailOutcome(rsp);
        else
            return DescribeHostDeployRecordDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeHostDeployRecordDetailOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostDeployRecordDetailAsync(const DescribeHostDeployRecordDetailRequest& request, const DescribeHostDeployRecordDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostDeployRecordDetailRequest&;
    using Resp = DescribeHostDeployRecordDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostDeployRecordDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeHostDeployRecordDetailOutcomeCallable SslClient::DescribeHostDeployRecordDetailCallable(const DescribeHostDeployRecordDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostDeployRecordDetailOutcome>>();
    DescribeHostDeployRecordDetailAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeHostDeployRecordDetailRequest&,
        DescribeHostDeployRecordDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeHostLighthouseInstanceListOutcome SslClient::DescribeHostLighthouseInstanceList(const DescribeHostLighthouseInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostLighthouseInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostLighthouseInstanceListResponse rsp = DescribeHostLighthouseInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostLighthouseInstanceListOutcome(rsp);
        else
            return DescribeHostLighthouseInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeHostLighthouseInstanceListOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostLighthouseInstanceListAsync(const DescribeHostLighthouseInstanceListRequest& request, const DescribeHostLighthouseInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostLighthouseInstanceListRequest&;
    using Resp = DescribeHostLighthouseInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostLighthouseInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeHostLighthouseInstanceListOutcomeCallable SslClient::DescribeHostLighthouseInstanceListCallable(const DescribeHostLighthouseInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostLighthouseInstanceListOutcome>>();
    DescribeHostLighthouseInstanceListAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeHostLighthouseInstanceListRequest&,
        DescribeHostLighthouseInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeHostLiveInstanceListOutcome SslClient::DescribeHostLiveInstanceList(const DescribeHostLiveInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostLiveInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostLiveInstanceListResponse rsp = DescribeHostLiveInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostLiveInstanceListOutcome(rsp);
        else
            return DescribeHostLiveInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeHostLiveInstanceListOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostLiveInstanceListAsync(const DescribeHostLiveInstanceListRequest& request, const DescribeHostLiveInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostLiveInstanceListRequest&;
    using Resp = DescribeHostLiveInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostLiveInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeHostLiveInstanceListOutcomeCallable SslClient::DescribeHostLiveInstanceListCallable(const DescribeHostLiveInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostLiveInstanceListOutcome>>();
    DescribeHostLiveInstanceListAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeHostLiveInstanceListRequest&,
        DescribeHostLiveInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeHostTeoInstanceListOutcome SslClient::DescribeHostTeoInstanceList(const DescribeHostTeoInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostTeoInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostTeoInstanceListResponse rsp = DescribeHostTeoInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostTeoInstanceListOutcome(rsp);
        else
            return DescribeHostTeoInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeHostTeoInstanceListOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostTeoInstanceListAsync(const DescribeHostTeoInstanceListRequest& request, const DescribeHostTeoInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostTeoInstanceListRequest&;
    using Resp = DescribeHostTeoInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostTeoInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeHostTeoInstanceListOutcomeCallable SslClient::DescribeHostTeoInstanceListCallable(const DescribeHostTeoInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostTeoInstanceListOutcome>>();
    DescribeHostTeoInstanceListAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeHostTeoInstanceListRequest&,
        DescribeHostTeoInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeHostTkeInstanceListOutcome SslClient::DescribeHostTkeInstanceList(const DescribeHostTkeInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostTkeInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostTkeInstanceListResponse rsp = DescribeHostTkeInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostTkeInstanceListOutcome(rsp);
        else
            return DescribeHostTkeInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeHostTkeInstanceListOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostTkeInstanceListAsync(const DescribeHostTkeInstanceListRequest& request, const DescribeHostTkeInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostTkeInstanceListRequest&;
    using Resp = DescribeHostTkeInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostTkeInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeHostTkeInstanceListOutcomeCallable SslClient::DescribeHostTkeInstanceListCallable(const DescribeHostTkeInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostTkeInstanceListOutcome>>();
    DescribeHostTkeInstanceListAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeHostTkeInstanceListRequest&,
        DescribeHostTkeInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeHostUpdateRecordOutcome SslClient::DescribeHostUpdateRecord(const DescribeHostUpdateRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostUpdateRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostUpdateRecordResponse rsp = DescribeHostUpdateRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostUpdateRecordOutcome(rsp);
        else
            return DescribeHostUpdateRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeHostUpdateRecordOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostUpdateRecordAsync(const DescribeHostUpdateRecordRequest& request, const DescribeHostUpdateRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostUpdateRecordRequest&;
    using Resp = DescribeHostUpdateRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostUpdateRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeHostUpdateRecordOutcomeCallable SslClient::DescribeHostUpdateRecordCallable(const DescribeHostUpdateRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostUpdateRecordOutcome>>();
    DescribeHostUpdateRecordAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeHostUpdateRecordRequest&,
        DescribeHostUpdateRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeHostUpdateRecordDetailOutcome SslClient::DescribeHostUpdateRecordDetail(const DescribeHostUpdateRecordDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostUpdateRecordDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostUpdateRecordDetailResponse rsp = DescribeHostUpdateRecordDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostUpdateRecordDetailOutcome(rsp);
        else
            return DescribeHostUpdateRecordDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeHostUpdateRecordDetailOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostUpdateRecordDetailAsync(const DescribeHostUpdateRecordDetailRequest& request, const DescribeHostUpdateRecordDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostUpdateRecordDetailRequest&;
    using Resp = DescribeHostUpdateRecordDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostUpdateRecordDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeHostUpdateRecordDetailOutcomeCallable SslClient::DescribeHostUpdateRecordDetailCallable(const DescribeHostUpdateRecordDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostUpdateRecordDetailOutcome>>();
    DescribeHostUpdateRecordDetailAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeHostUpdateRecordDetailRequest&,
        DescribeHostUpdateRecordDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeHostUploadUpdateRecordOutcome SslClient::DescribeHostUploadUpdateRecord(const DescribeHostUploadUpdateRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostUploadUpdateRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostUploadUpdateRecordResponse rsp = DescribeHostUploadUpdateRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostUploadUpdateRecordOutcome(rsp);
        else
            return DescribeHostUploadUpdateRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeHostUploadUpdateRecordOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostUploadUpdateRecordAsync(const DescribeHostUploadUpdateRecordRequest& request, const DescribeHostUploadUpdateRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostUploadUpdateRecordRequest&;
    using Resp = DescribeHostUploadUpdateRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostUploadUpdateRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeHostUploadUpdateRecordOutcomeCallable SslClient::DescribeHostUploadUpdateRecordCallable(const DescribeHostUploadUpdateRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostUploadUpdateRecordOutcome>>();
    DescribeHostUploadUpdateRecordAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeHostUploadUpdateRecordRequest&,
        DescribeHostUploadUpdateRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeHostUploadUpdateRecordDetailOutcome SslClient::DescribeHostUploadUpdateRecordDetail(const DescribeHostUploadUpdateRecordDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostUploadUpdateRecordDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostUploadUpdateRecordDetailResponse rsp = DescribeHostUploadUpdateRecordDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostUploadUpdateRecordDetailOutcome(rsp);
        else
            return DescribeHostUploadUpdateRecordDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeHostUploadUpdateRecordDetailOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostUploadUpdateRecordDetailAsync(const DescribeHostUploadUpdateRecordDetailRequest& request, const DescribeHostUploadUpdateRecordDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostUploadUpdateRecordDetailRequest&;
    using Resp = DescribeHostUploadUpdateRecordDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostUploadUpdateRecordDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeHostUploadUpdateRecordDetailOutcomeCallable SslClient::DescribeHostUploadUpdateRecordDetailCallable(const DescribeHostUploadUpdateRecordDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostUploadUpdateRecordDetailOutcome>>();
    DescribeHostUploadUpdateRecordDetailAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeHostUploadUpdateRecordDetailRequest&,
        DescribeHostUploadUpdateRecordDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeHostVodInstanceListOutcome SslClient::DescribeHostVodInstanceList(const DescribeHostVodInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostVodInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostVodInstanceListResponse rsp = DescribeHostVodInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostVodInstanceListOutcome(rsp);
        else
            return DescribeHostVodInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeHostVodInstanceListOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostVodInstanceListAsync(const DescribeHostVodInstanceListRequest& request, const DescribeHostVodInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostVodInstanceListRequest&;
    using Resp = DescribeHostVodInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostVodInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeHostVodInstanceListOutcomeCallable SslClient::DescribeHostVodInstanceListCallable(const DescribeHostVodInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostVodInstanceListOutcome>>();
    DescribeHostVodInstanceListAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeHostVodInstanceListRequest&,
        DescribeHostVodInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeHostWafInstanceListOutcome SslClient::DescribeHostWafInstanceList(const DescribeHostWafInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostWafInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostWafInstanceListResponse rsp = DescribeHostWafInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostWafInstanceListOutcome(rsp);
        else
            return DescribeHostWafInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeHostWafInstanceListOutcome(outcome.GetError());
    }
}

void SslClient::DescribeHostWafInstanceListAsync(const DescribeHostWafInstanceListRequest& request, const DescribeHostWafInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostWafInstanceListRequest&;
    using Resp = DescribeHostWafInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostWafInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeHostWafInstanceListOutcomeCallable SslClient::DescribeHostWafInstanceListCallable(const DescribeHostWafInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostWafInstanceListOutcome>>();
    DescribeHostWafInstanceListAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeHostWafInstanceListRequest&,
        DescribeHostWafInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeManagerDetailOutcome SslClient::DescribeManagerDetail(const DescribeManagerDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeManagerDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeManagerDetailResponse rsp = DescribeManagerDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeManagerDetailOutcome(rsp);
        else
            return DescribeManagerDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeManagerDetailOutcome(outcome.GetError());
    }
}

void SslClient::DescribeManagerDetailAsync(const DescribeManagerDetailRequest& request, const DescribeManagerDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeManagerDetailRequest&;
    using Resp = DescribeManagerDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeManagerDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeManagerDetailOutcomeCallable SslClient::DescribeManagerDetailCallable(const DescribeManagerDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeManagerDetailOutcome>>();
    DescribeManagerDetailAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeManagerDetailRequest&,
        DescribeManagerDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribeManagersOutcome SslClient::DescribeManagers(const DescribeManagersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeManagers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeManagersResponse rsp = DescribeManagersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeManagersOutcome(rsp);
        else
            return DescribeManagersOutcome(o.GetError());
    }
    else
    {
        return DescribeManagersOutcome(outcome.GetError());
    }
}

void SslClient::DescribeManagersAsync(const DescribeManagersRequest& request, const DescribeManagersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeManagersRequest&;
    using Resp = DescribeManagersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeManagers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribeManagersOutcomeCallable SslClient::DescribeManagersCallable(const DescribeManagersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeManagersOutcome>>();
    DescribeManagersAsync(
    request,
    [prom](
        const SslClient*,
        const DescribeManagersRequest&,
        DescribeManagersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DescribePackagesOutcome SslClient::DescribePackages(const DescribePackagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePackages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePackagesResponse rsp = DescribePackagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePackagesOutcome(rsp);
        else
            return DescribePackagesOutcome(o.GetError());
    }
    else
    {
        return DescribePackagesOutcome(outcome.GetError());
    }
}

void SslClient::DescribePackagesAsync(const DescribePackagesRequest& request, const DescribePackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePackagesRequest&;
    using Resp = DescribePackagesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePackages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DescribePackagesOutcomeCallable SslClient::DescribePackagesCallable(const DescribePackagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePackagesOutcome>>();
    DescribePackagesAsync(
    request,
    [prom](
        const SslClient*,
        const DescribePackagesRequest&,
        DescribePackagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::DownloadCertificateOutcome SslClient::DownloadCertificate(const DownloadCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadCertificateResponse rsp = DownloadCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadCertificateOutcome(rsp);
        else
            return DownloadCertificateOutcome(o.GetError());
    }
    else
    {
        return DownloadCertificateOutcome(outcome.GetError());
    }
}

void SslClient::DownloadCertificateAsync(const DownloadCertificateRequest& request, const DownloadCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DownloadCertificateRequest&;
    using Resp = DownloadCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "DownloadCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::DownloadCertificateOutcomeCallable SslClient::DownloadCertificateCallable(const DownloadCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DownloadCertificateOutcome>>();
    DownloadCertificateAsync(
    request,
    [prom](
        const SslClient*,
        const DownloadCertificateRequest&,
        DownloadCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::ModifyCertificateAliasOutcome SslClient::ModifyCertificateAlias(const ModifyCertificateAliasRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCertificateAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCertificateAliasResponse rsp = ModifyCertificateAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCertificateAliasOutcome(rsp);
        else
            return ModifyCertificateAliasOutcome(o.GetError());
    }
    else
    {
        return ModifyCertificateAliasOutcome(outcome.GetError());
    }
}

void SslClient::ModifyCertificateAliasAsync(const ModifyCertificateAliasRequest& request, const ModifyCertificateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCertificateAliasRequest&;
    using Resp = ModifyCertificateAliasResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCertificateAlias", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::ModifyCertificateAliasOutcomeCallable SslClient::ModifyCertificateAliasCallable(const ModifyCertificateAliasRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCertificateAliasOutcome>>();
    ModifyCertificateAliasAsync(
    request,
    [prom](
        const SslClient*,
        const ModifyCertificateAliasRequest&,
        ModifyCertificateAliasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::ModifyCertificateProjectOutcome SslClient::ModifyCertificateProject(const ModifyCertificateProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCertificateProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCertificateProjectResponse rsp = ModifyCertificateProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCertificateProjectOutcome(rsp);
        else
            return ModifyCertificateProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyCertificateProjectOutcome(outcome.GetError());
    }
}

void SslClient::ModifyCertificateProjectAsync(const ModifyCertificateProjectRequest& request, const ModifyCertificateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCertificateProjectRequest&;
    using Resp = ModifyCertificateProjectResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCertificateProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::ModifyCertificateProjectOutcomeCallable SslClient::ModifyCertificateProjectCallable(const ModifyCertificateProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCertificateProjectOutcome>>();
    ModifyCertificateProjectAsync(
    request,
    [prom](
        const SslClient*,
        const ModifyCertificateProjectRequest&,
        ModifyCertificateProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::ModifyCertificateResubmitOutcome SslClient::ModifyCertificateResubmit(const ModifyCertificateResubmitRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCertificateResubmit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCertificateResubmitResponse rsp = ModifyCertificateResubmitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCertificateResubmitOutcome(rsp);
        else
            return ModifyCertificateResubmitOutcome(o.GetError());
    }
    else
    {
        return ModifyCertificateResubmitOutcome(outcome.GetError());
    }
}

void SslClient::ModifyCertificateResubmitAsync(const ModifyCertificateResubmitRequest& request, const ModifyCertificateResubmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCertificateResubmitRequest&;
    using Resp = ModifyCertificateResubmitResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCertificateResubmit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::ModifyCertificateResubmitOutcomeCallable SslClient::ModifyCertificateResubmitCallable(const ModifyCertificateResubmitRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCertificateResubmitOutcome>>();
    ModifyCertificateResubmitAsync(
    request,
    [prom](
        const SslClient*,
        const ModifyCertificateResubmitRequest&,
        ModifyCertificateResubmitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::ModifyCertificatesExpiringNotificationSwitchOutcome SslClient::ModifyCertificatesExpiringNotificationSwitch(const ModifyCertificatesExpiringNotificationSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCertificatesExpiringNotificationSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCertificatesExpiringNotificationSwitchResponse rsp = ModifyCertificatesExpiringNotificationSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCertificatesExpiringNotificationSwitchOutcome(rsp);
        else
            return ModifyCertificatesExpiringNotificationSwitchOutcome(o.GetError());
    }
    else
    {
        return ModifyCertificatesExpiringNotificationSwitchOutcome(outcome.GetError());
    }
}

void SslClient::ModifyCertificatesExpiringNotificationSwitchAsync(const ModifyCertificatesExpiringNotificationSwitchRequest& request, const ModifyCertificatesExpiringNotificationSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCertificatesExpiringNotificationSwitchRequest&;
    using Resp = ModifyCertificatesExpiringNotificationSwitchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCertificatesExpiringNotificationSwitch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::ModifyCertificatesExpiringNotificationSwitchOutcomeCallable SslClient::ModifyCertificatesExpiringNotificationSwitchCallable(const ModifyCertificatesExpiringNotificationSwitchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCertificatesExpiringNotificationSwitchOutcome>>();
    ModifyCertificatesExpiringNotificationSwitchAsync(
    request,
    [prom](
        const SslClient*,
        const ModifyCertificatesExpiringNotificationSwitchRequest&,
        ModifyCertificatesExpiringNotificationSwitchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::ReplaceCertificateOutcome SslClient::ReplaceCertificate(const ReplaceCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceCertificateResponse rsp = ReplaceCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceCertificateOutcome(rsp);
        else
            return ReplaceCertificateOutcome(o.GetError());
    }
    else
    {
        return ReplaceCertificateOutcome(outcome.GetError());
    }
}

void SslClient::ReplaceCertificateAsync(const ReplaceCertificateRequest& request, const ReplaceCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReplaceCertificateRequest&;
    using Resp = ReplaceCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "ReplaceCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::ReplaceCertificateOutcomeCallable SslClient::ReplaceCertificateCallable(const ReplaceCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReplaceCertificateOutcome>>();
    ReplaceCertificateAsync(
    request,
    [prom](
        const SslClient*,
        const ReplaceCertificateRequest&,
        ReplaceCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::RevokeCertificateOutcome SslClient::RevokeCertificate(const RevokeCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "RevokeCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RevokeCertificateResponse rsp = RevokeCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RevokeCertificateOutcome(rsp);
        else
            return RevokeCertificateOutcome(o.GetError());
    }
    else
    {
        return RevokeCertificateOutcome(outcome.GetError());
    }
}

void SslClient::RevokeCertificateAsync(const RevokeCertificateRequest& request, const RevokeCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RevokeCertificateRequest&;
    using Resp = RevokeCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "RevokeCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::RevokeCertificateOutcomeCallable SslClient::RevokeCertificateCallable(const RevokeCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<RevokeCertificateOutcome>>();
    RevokeCertificateAsync(
    request,
    [prom](
        const SslClient*,
        const RevokeCertificateRequest&,
        RevokeCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::SubmitAuditManagerOutcome SslClient::SubmitAuditManager(const SubmitAuditManagerRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitAuditManager");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitAuditManagerResponse rsp = SubmitAuditManagerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitAuditManagerOutcome(rsp);
        else
            return SubmitAuditManagerOutcome(o.GetError());
    }
    else
    {
        return SubmitAuditManagerOutcome(outcome.GetError());
    }
}

void SslClient::SubmitAuditManagerAsync(const SubmitAuditManagerRequest& request, const SubmitAuditManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitAuditManagerRequest&;
    using Resp = SubmitAuditManagerResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitAuditManager", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::SubmitAuditManagerOutcomeCallable SslClient::SubmitAuditManagerCallable(const SubmitAuditManagerRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitAuditManagerOutcome>>();
    SubmitAuditManagerAsync(
    request,
    [prom](
        const SslClient*,
        const SubmitAuditManagerRequest&,
        SubmitAuditManagerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::SubmitCertificateInformationOutcome SslClient::SubmitCertificateInformation(const SubmitCertificateInformationRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitCertificateInformation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitCertificateInformationResponse rsp = SubmitCertificateInformationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitCertificateInformationOutcome(rsp);
        else
            return SubmitCertificateInformationOutcome(o.GetError());
    }
    else
    {
        return SubmitCertificateInformationOutcome(outcome.GetError());
    }
}

void SslClient::SubmitCertificateInformationAsync(const SubmitCertificateInformationRequest& request, const SubmitCertificateInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitCertificateInformationRequest&;
    using Resp = SubmitCertificateInformationResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitCertificateInformation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::SubmitCertificateInformationOutcomeCallable SslClient::SubmitCertificateInformationCallable(const SubmitCertificateInformationRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitCertificateInformationOutcome>>();
    SubmitCertificateInformationAsync(
    request,
    [prom](
        const SslClient*,
        const SubmitCertificateInformationRequest&,
        SubmitCertificateInformationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::UpdateCertificateInstanceOutcome SslClient::UpdateCertificateInstance(const UpdateCertificateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCertificateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCertificateInstanceResponse rsp = UpdateCertificateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCertificateInstanceOutcome(rsp);
        else
            return UpdateCertificateInstanceOutcome(o.GetError());
    }
    else
    {
        return UpdateCertificateInstanceOutcome(outcome.GetError());
    }
}

void SslClient::UpdateCertificateInstanceAsync(const UpdateCertificateInstanceRequest& request, const UpdateCertificateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCertificateInstanceRequest&;
    using Resp = UpdateCertificateInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCertificateInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::UpdateCertificateInstanceOutcomeCallable SslClient::UpdateCertificateInstanceCallable(const UpdateCertificateInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCertificateInstanceOutcome>>();
    UpdateCertificateInstanceAsync(
    request,
    [prom](
        const SslClient*,
        const UpdateCertificateInstanceRequest&,
        UpdateCertificateInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::UpdateCertificateRecordRetryOutcome SslClient::UpdateCertificateRecordRetry(const UpdateCertificateRecordRetryRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCertificateRecordRetry");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCertificateRecordRetryResponse rsp = UpdateCertificateRecordRetryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCertificateRecordRetryOutcome(rsp);
        else
            return UpdateCertificateRecordRetryOutcome(o.GetError());
    }
    else
    {
        return UpdateCertificateRecordRetryOutcome(outcome.GetError());
    }
}

void SslClient::UpdateCertificateRecordRetryAsync(const UpdateCertificateRecordRetryRequest& request, const UpdateCertificateRecordRetryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCertificateRecordRetryRequest&;
    using Resp = UpdateCertificateRecordRetryResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCertificateRecordRetry", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::UpdateCertificateRecordRetryOutcomeCallable SslClient::UpdateCertificateRecordRetryCallable(const UpdateCertificateRecordRetryRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCertificateRecordRetryOutcome>>();
    UpdateCertificateRecordRetryAsync(
    request,
    [prom](
        const SslClient*,
        const UpdateCertificateRecordRetryRequest&,
        UpdateCertificateRecordRetryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::UpdateCertificateRecordRollbackOutcome SslClient::UpdateCertificateRecordRollback(const UpdateCertificateRecordRollbackRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCertificateRecordRollback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCertificateRecordRollbackResponse rsp = UpdateCertificateRecordRollbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCertificateRecordRollbackOutcome(rsp);
        else
            return UpdateCertificateRecordRollbackOutcome(o.GetError());
    }
    else
    {
        return UpdateCertificateRecordRollbackOutcome(outcome.GetError());
    }
}

void SslClient::UpdateCertificateRecordRollbackAsync(const UpdateCertificateRecordRollbackRequest& request, const UpdateCertificateRecordRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCertificateRecordRollbackRequest&;
    using Resp = UpdateCertificateRecordRollbackResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCertificateRecordRollback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::UpdateCertificateRecordRollbackOutcomeCallable SslClient::UpdateCertificateRecordRollbackCallable(const UpdateCertificateRecordRollbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCertificateRecordRollbackOutcome>>();
    UpdateCertificateRecordRollbackAsync(
    request,
    [prom](
        const SslClient*,
        const UpdateCertificateRecordRollbackRequest&,
        UpdateCertificateRecordRollbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::UploadCertificateOutcome SslClient::UploadCertificate(const UploadCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "UploadCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadCertificateResponse rsp = UploadCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadCertificateOutcome(rsp);
        else
            return UploadCertificateOutcome(o.GetError());
    }
    else
    {
        return UploadCertificateOutcome(outcome.GetError());
    }
}

void SslClient::UploadCertificateAsync(const UploadCertificateRequest& request, const UploadCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadCertificateRequest&;
    using Resp = UploadCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "UploadCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::UploadCertificateOutcomeCallable SslClient::UploadCertificateCallable(const UploadCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadCertificateOutcome>>();
    UploadCertificateAsync(
    request,
    [prom](
        const SslClient*,
        const UploadCertificateRequest&,
        UploadCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::UploadConfirmLetterOutcome SslClient::UploadConfirmLetter(const UploadConfirmLetterRequest &request)
{
    auto outcome = MakeRequest(request, "UploadConfirmLetter");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadConfirmLetterResponse rsp = UploadConfirmLetterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadConfirmLetterOutcome(rsp);
        else
            return UploadConfirmLetterOutcome(o.GetError());
    }
    else
    {
        return UploadConfirmLetterOutcome(outcome.GetError());
    }
}

void SslClient::UploadConfirmLetterAsync(const UploadConfirmLetterRequest& request, const UploadConfirmLetterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadConfirmLetterRequest&;
    using Resp = UploadConfirmLetterResponse;

    DoRequestAsync<Req, Resp>(
        "UploadConfirmLetter", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::UploadConfirmLetterOutcomeCallable SslClient::UploadConfirmLetterCallable(const UploadConfirmLetterRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadConfirmLetterOutcome>>();
    UploadConfirmLetterAsync(
    request,
    [prom](
        const SslClient*,
        const UploadConfirmLetterRequest&,
        UploadConfirmLetterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::UploadRevokeLetterOutcome SslClient::UploadRevokeLetter(const UploadRevokeLetterRequest &request)
{
    auto outcome = MakeRequest(request, "UploadRevokeLetter");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadRevokeLetterResponse rsp = UploadRevokeLetterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadRevokeLetterOutcome(rsp);
        else
            return UploadRevokeLetterOutcome(o.GetError());
    }
    else
    {
        return UploadRevokeLetterOutcome(outcome.GetError());
    }
}

void SslClient::UploadRevokeLetterAsync(const UploadRevokeLetterRequest& request, const UploadRevokeLetterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadRevokeLetterRequest&;
    using Resp = UploadRevokeLetterResponse;

    DoRequestAsync<Req, Resp>(
        "UploadRevokeLetter", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::UploadRevokeLetterOutcomeCallable SslClient::UploadRevokeLetterCallable(const UploadRevokeLetterRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadRevokeLetterOutcome>>();
    UploadRevokeLetterAsync(
    request,
    [prom](
        const SslClient*,
        const UploadRevokeLetterRequest&,
        UploadRevokeLetterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::UploadUpdateCertificateInstanceOutcome SslClient::UploadUpdateCertificateInstance(const UploadUpdateCertificateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UploadUpdateCertificateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadUpdateCertificateInstanceResponse rsp = UploadUpdateCertificateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadUpdateCertificateInstanceOutcome(rsp);
        else
            return UploadUpdateCertificateInstanceOutcome(o.GetError());
    }
    else
    {
        return UploadUpdateCertificateInstanceOutcome(outcome.GetError());
    }
}

void SslClient::UploadUpdateCertificateInstanceAsync(const UploadUpdateCertificateInstanceRequest& request, const UploadUpdateCertificateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadUpdateCertificateInstanceRequest&;
    using Resp = UploadUpdateCertificateInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "UploadUpdateCertificateInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::UploadUpdateCertificateInstanceOutcomeCallable SslClient::UploadUpdateCertificateInstanceCallable(const UploadUpdateCertificateInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadUpdateCertificateInstanceOutcome>>();
    UploadUpdateCertificateInstanceAsync(
    request,
    [prom](
        const SslClient*,
        const UploadUpdateCertificateInstanceRequest&,
        UploadUpdateCertificateInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::UploadUpdateCertificateRecordRetryOutcome SslClient::UploadUpdateCertificateRecordRetry(const UploadUpdateCertificateRecordRetryRequest &request)
{
    auto outcome = MakeRequest(request, "UploadUpdateCertificateRecordRetry");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadUpdateCertificateRecordRetryResponse rsp = UploadUpdateCertificateRecordRetryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadUpdateCertificateRecordRetryOutcome(rsp);
        else
            return UploadUpdateCertificateRecordRetryOutcome(o.GetError());
    }
    else
    {
        return UploadUpdateCertificateRecordRetryOutcome(outcome.GetError());
    }
}

void SslClient::UploadUpdateCertificateRecordRetryAsync(const UploadUpdateCertificateRecordRetryRequest& request, const UploadUpdateCertificateRecordRetryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadUpdateCertificateRecordRetryRequest&;
    using Resp = UploadUpdateCertificateRecordRetryResponse;

    DoRequestAsync<Req, Resp>(
        "UploadUpdateCertificateRecordRetry", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::UploadUpdateCertificateRecordRetryOutcomeCallable SslClient::UploadUpdateCertificateRecordRetryCallable(const UploadUpdateCertificateRecordRetryRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadUpdateCertificateRecordRetryOutcome>>();
    UploadUpdateCertificateRecordRetryAsync(
    request,
    [prom](
        const SslClient*,
        const UploadUpdateCertificateRecordRetryRequest&,
        UploadUpdateCertificateRecordRetryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::UploadUpdateCertificateRecordRollbackOutcome SslClient::UploadUpdateCertificateRecordRollback(const UploadUpdateCertificateRecordRollbackRequest &request)
{
    auto outcome = MakeRequest(request, "UploadUpdateCertificateRecordRollback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadUpdateCertificateRecordRollbackResponse rsp = UploadUpdateCertificateRecordRollbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadUpdateCertificateRecordRollbackOutcome(rsp);
        else
            return UploadUpdateCertificateRecordRollbackOutcome(o.GetError());
    }
    else
    {
        return UploadUpdateCertificateRecordRollbackOutcome(outcome.GetError());
    }
}

void SslClient::UploadUpdateCertificateRecordRollbackAsync(const UploadUpdateCertificateRecordRollbackRequest& request, const UploadUpdateCertificateRecordRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadUpdateCertificateRecordRollbackRequest&;
    using Resp = UploadUpdateCertificateRecordRollbackResponse;

    DoRequestAsync<Req, Resp>(
        "UploadUpdateCertificateRecordRollback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::UploadUpdateCertificateRecordRollbackOutcomeCallable SslClient::UploadUpdateCertificateRecordRollbackCallable(const UploadUpdateCertificateRecordRollbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadUpdateCertificateRecordRollbackOutcome>>();
    UploadUpdateCertificateRecordRollbackAsync(
    request,
    [prom](
        const SslClient*,
        const UploadUpdateCertificateRecordRollbackRequest&,
        UploadUpdateCertificateRecordRollbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslClient::VerifyManagerOutcome SslClient::VerifyManager(const VerifyManagerRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyManager");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyManagerResponse rsp = VerifyManagerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyManagerOutcome(rsp);
        else
            return VerifyManagerOutcome(o.GetError());
    }
    else
    {
        return VerifyManagerOutcome(outcome.GetError());
    }
}

void SslClient::VerifyManagerAsync(const VerifyManagerRequest& request, const VerifyManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VerifyManagerRequest&;
    using Resp = VerifyManagerResponse;

    DoRequestAsync<Req, Resp>(
        "VerifyManager", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslClient::VerifyManagerOutcomeCallable SslClient::VerifyManagerCallable(const VerifyManagerRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifyManagerOutcome>>();
    VerifyManagerAsync(
    request,
    [prom](
        const SslClient*,
        const VerifyManagerRequest&,
        VerifyManagerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

