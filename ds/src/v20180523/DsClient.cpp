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

#include <tencentcloud/ds/v20180523/DsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ds::V20180523;
using namespace TencentCloud::Ds::V20180523::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-05-23";
    const string ENDPOINT = "ds.tencentcloudapi.com";
}

DsClient::DsClient(const Credential &credential, const string &region) :
    DsClient(credential, region, ClientProfile())
{
}

DsClient::DsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DsClient::CheckVcodeOutcome DsClient::CheckVcode(const CheckVcodeRequest &request)
{
    auto outcome = MakeRequest(request, "CheckVcode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckVcodeResponse rsp = CheckVcodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckVcodeOutcome(rsp);
        else
            return CheckVcodeOutcome(o.GetError());
    }
    else
    {
        return CheckVcodeOutcome(outcome.GetError());
    }
}

void DsClient::CheckVcodeAsync(const CheckVcodeRequest& request, const CheckVcodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckVcodeRequest&;
    using Resp = CheckVcodeResponse;

    DoRequestAsync<Req, Resp>(
        "CheckVcode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsClient::CheckVcodeOutcomeCallable DsClient::CheckVcodeCallable(const CheckVcodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckVcodeOutcome>>();
    CheckVcodeAsync(
    request,
    [prom](
        const DsClient*,
        const CheckVcodeRequest&,
        CheckVcodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsClient::CreateContractByUploadOutcome DsClient::CreateContractByUpload(const CreateContractByUploadRequest &request)
{
    auto outcome = MakeRequest(request, "CreateContractByUpload");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateContractByUploadResponse rsp = CreateContractByUploadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateContractByUploadOutcome(rsp);
        else
            return CreateContractByUploadOutcome(o.GetError());
    }
    else
    {
        return CreateContractByUploadOutcome(outcome.GetError());
    }
}

void DsClient::CreateContractByUploadAsync(const CreateContractByUploadRequest& request, const CreateContractByUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateContractByUploadRequest&;
    using Resp = CreateContractByUploadResponse;

    DoRequestAsync<Req, Resp>(
        "CreateContractByUpload", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsClient::CreateContractByUploadOutcomeCallable DsClient::CreateContractByUploadCallable(const CreateContractByUploadRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateContractByUploadOutcome>>();
    CreateContractByUploadAsync(
    request,
    [prom](
        const DsClient*,
        const CreateContractByUploadRequest&,
        CreateContractByUploadOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsClient::CreateEnterpriseAccountOutcome DsClient::CreateEnterpriseAccount(const CreateEnterpriseAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEnterpriseAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEnterpriseAccountResponse rsp = CreateEnterpriseAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEnterpriseAccountOutcome(rsp);
        else
            return CreateEnterpriseAccountOutcome(o.GetError());
    }
    else
    {
        return CreateEnterpriseAccountOutcome(outcome.GetError());
    }
}

void DsClient::CreateEnterpriseAccountAsync(const CreateEnterpriseAccountRequest& request, const CreateEnterpriseAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEnterpriseAccountRequest&;
    using Resp = CreateEnterpriseAccountResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEnterpriseAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsClient::CreateEnterpriseAccountOutcomeCallable DsClient::CreateEnterpriseAccountCallable(const CreateEnterpriseAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEnterpriseAccountOutcome>>();
    CreateEnterpriseAccountAsync(
    request,
    [prom](
        const DsClient*,
        const CreateEnterpriseAccountRequest&,
        CreateEnterpriseAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsClient::CreatePersonalAccountOutcome DsClient::CreatePersonalAccount(const CreatePersonalAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePersonalAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePersonalAccountResponse rsp = CreatePersonalAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePersonalAccountOutcome(rsp);
        else
            return CreatePersonalAccountOutcome(o.GetError());
    }
    else
    {
        return CreatePersonalAccountOutcome(outcome.GetError());
    }
}

void DsClient::CreatePersonalAccountAsync(const CreatePersonalAccountRequest& request, const CreatePersonalAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePersonalAccountRequest&;
    using Resp = CreatePersonalAccountResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePersonalAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsClient::CreatePersonalAccountOutcomeCallable DsClient::CreatePersonalAccountCallable(const CreatePersonalAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePersonalAccountOutcome>>();
    CreatePersonalAccountAsync(
    request,
    [prom](
        const DsClient*,
        const CreatePersonalAccountRequest&,
        CreatePersonalAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsClient::CreateSealOutcome DsClient::CreateSeal(const CreateSealRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSeal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSealResponse rsp = CreateSealResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSealOutcome(rsp);
        else
            return CreateSealOutcome(o.GetError());
    }
    else
    {
        return CreateSealOutcome(outcome.GetError());
    }
}

void DsClient::CreateSealAsync(const CreateSealRequest& request, const CreateSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSealRequest&;
    using Resp = CreateSealResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSeal", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsClient::CreateSealOutcomeCallable DsClient::CreateSealCallable(const CreateSealRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSealOutcome>>();
    CreateSealAsync(
    request,
    [prom](
        const DsClient*,
        const CreateSealRequest&,
        CreateSealOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsClient::DeleteAccountOutcome DsClient::DeleteAccount(const DeleteAccountRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAccountResponse rsp = DeleteAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAccountOutcome(rsp);
        else
            return DeleteAccountOutcome(o.GetError());
    }
    else
    {
        return DeleteAccountOutcome(outcome.GetError());
    }
}

void DsClient::DeleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAccountRequest&;
    using Resp = DeleteAccountResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsClient::DeleteAccountOutcomeCallable DsClient::DeleteAccountCallable(const DeleteAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAccountOutcome>>();
    DeleteAccountAsync(
    request,
    [prom](
        const DsClient*,
        const DeleteAccountRequest&,
        DeleteAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsClient::DeleteSealOutcome DsClient::DeleteSeal(const DeleteSealRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSeal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSealResponse rsp = DeleteSealResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSealOutcome(rsp);
        else
            return DeleteSealOutcome(o.GetError());
    }
    else
    {
        return DeleteSealOutcome(outcome.GetError());
    }
}

void DsClient::DeleteSealAsync(const DeleteSealRequest& request, const DeleteSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSealRequest&;
    using Resp = DeleteSealResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSeal", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsClient::DeleteSealOutcomeCallable DsClient::DeleteSealCallable(const DeleteSealRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSealOutcome>>();
    DeleteSealAsync(
    request,
    [prom](
        const DsClient*,
        const DeleteSealRequest&,
        DeleteSealOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsClient::DescribeTaskStatusOutcome DsClient::DescribeTaskStatus(const DescribeTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskStatusResponse rsp = DescribeTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskStatusOutcome(rsp);
        else
            return DescribeTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskStatusOutcome(outcome.GetError());
    }
}

void DsClient::DescribeTaskStatusAsync(const DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskStatusRequest&;
    using Resp = DescribeTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsClient::DescribeTaskStatusOutcomeCallable DsClient::DescribeTaskStatusCallable(const DescribeTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskStatusOutcome>>();
    DescribeTaskStatusAsync(
    request,
    [prom](
        const DsClient*,
        const DescribeTaskStatusRequest&,
        DescribeTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsClient::DownloadContractOutcome DsClient::DownloadContract(const DownloadContractRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadContract");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadContractResponse rsp = DownloadContractResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadContractOutcome(rsp);
        else
            return DownloadContractOutcome(o.GetError());
    }
    else
    {
        return DownloadContractOutcome(outcome.GetError());
    }
}

void DsClient::DownloadContractAsync(const DownloadContractRequest& request, const DownloadContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DownloadContractRequest&;
    using Resp = DownloadContractResponse;

    DoRequestAsync<Req, Resp>(
        "DownloadContract", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsClient::DownloadContractOutcomeCallable DsClient::DownloadContractCallable(const DownloadContractRequest &request)
{
    const auto prom = std::make_shared<std::promise<DownloadContractOutcome>>();
    DownloadContractAsync(
    request,
    [prom](
        const DsClient*,
        const DownloadContractRequest&,
        DownloadContractOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsClient::SendVcodeOutcome DsClient::SendVcode(const SendVcodeRequest &request)
{
    auto outcome = MakeRequest(request, "SendVcode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendVcodeResponse rsp = SendVcodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendVcodeOutcome(rsp);
        else
            return SendVcodeOutcome(o.GetError());
    }
    else
    {
        return SendVcodeOutcome(outcome.GetError());
    }
}

void DsClient::SendVcodeAsync(const SendVcodeRequest& request, const SendVcodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SendVcodeRequest&;
    using Resp = SendVcodeResponse;

    DoRequestAsync<Req, Resp>(
        "SendVcode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsClient::SendVcodeOutcomeCallable DsClient::SendVcodeCallable(const SendVcodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendVcodeOutcome>>();
    SendVcodeAsync(
    request,
    [prom](
        const DsClient*,
        const SendVcodeRequest&,
        SendVcodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsClient::SignContractByCoordinateOutcome DsClient::SignContractByCoordinate(const SignContractByCoordinateRequest &request)
{
    auto outcome = MakeRequest(request, "SignContractByCoordinate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SignContractByCoordinateResponse rsp = SignContractByCoordinateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SignContractByCoordinateOutcome(rsp);
        else
            return SignContractByCoordinateOutcome(o.GetError());
    }
    else
    {
        return SignContractByCoordinateOutcome(outcome.GetError());
    }
}

void DsClient::SignContractByCoordinateAsync(const SignContractByCoordinateRequest& request, const SignContractByCoordinateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SignContractByCoordinateRequest&;
    using Resp = SignContractByCoordinateResponse;

    DoRequestAsync<Req, Resp>(
        "SignContractByCoordinate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsClient::SignContractByCoordinateOutcomeCallable DsClient::SignContractByCoordinateCallable(const SignContractByCoordinateRequest &request)
{
    const auto prom = std::make_shared<std::promise<SignContractByCoordinateOutcome>>();
    SignContractByCoordinateAsync(
    request,
    [prom](
        const DsClient*,
        const SignContractByCoordinateRequest&,
        SignContractByCoordinateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DsClient::SignContractByKeywordOutcome DsClient::SignContractByKeyword(const SignContractByKeywordRequest &request)
{
    auto outcome = MakeRequest(request, "SignContractByKeyword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SignContractByKeywordResponse rsp = SignContractByKeywordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SignContractByKeywordOutcome(rsp);
        else
            return SignContractByKeywordOutcome(o.GetError());
    }
    else
    {
        return SignContractByKeywordOutcome(outcome.GetError());
    }
}

void DsClient::SignContractByKeywordAsync(const SignContractByKeywordRequest& request, const SignContractByKeywordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SignContractByKeywordRequest&;
    using Resp = SignContractByKeywordResponse;

    DoRequestAsync<Req, Resp>(
        "SignContractByKeyword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DsClient::SignContractByKeywordOutcomeCallable DsClient::SignContractByKeywordCallable(const SignContractByKeywordRequest &request)
{
    const auto prom = std::make_shared<std::promise<SignContractByKeywordOutcome>>();
    SignContractByKeywordAsync(
    request,
    [prom](
        const DsClient*,
        const SignContractByKeywordRequest&,
        SignContractByKeywordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

