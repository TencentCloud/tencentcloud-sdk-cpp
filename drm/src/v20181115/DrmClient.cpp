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

#include <tencentcloud/drm/v20181115/DrmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Drm::V20181115;
using namespace TencentCloud::Drm::V20181115::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-11-15";
    const string ENDPOINT = "drm.tencentcloudapi.com";
}

DrmClient::DrmClient(const Credential &credential, const string &region) :
    DrmClient(credential, region, ClientProfile())
{
}

DrmClient::DrmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DrmClient::AddFairPlayPemOutcome DrmClient::AddFairPlayPem(const AddFairPlayPemRequest &request)
{
    auto outcome = MakeRequest(request, "AddFairPlayPem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddFairPlayPemResponse rsp = AddFairPlayPemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddFairPlayPemOutcome(rsp);
        else
            return AddFairPlayPemOutcome(o.GetError());
    }
    else
    {
        return AddFairPlayPemOutcome(outcome.GetError());
    }
}

void DrmClient::AddFairPlayPemAsync(const AddFairPlayPemRequest& request, const AddFairPlayPemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddFairPlayPemRequest&;
    using Resp = AddFairPlayPemResponse;

    DoRequestAsync<Req, Resp>(
        "AddFairPlayPem", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DrmClient::AddFairPlayPemOutcomeCallable DrmClient::AddFairPlayPemCallable(const AddFairPlayPemRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddFairPlayPemOutcome>>();
    AddFairPlayPemAsync(
    request,
    [prom](
        const DrmClient*,
        const AddFairPlayPemRequest&,
        AddFairPlayPemOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DrmClient::CreateEncryptKeysOutcome DrmClient::CreateEncryptKeys(const CreateEncryptKeysRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEncryptKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEncryptKeysResponse rsp = CreateEncryptKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEncryptKeysOutcome(rsp);
        else
            return CreateEncryptKeysOutcome(o.GetError());
    }
    else
    {
        return CreateEncryptKeysOutcome(outcome.GetError());
    }
}

void DrmClient::CreateEncryptKeysAsync(const CreateEncryptKeysRequest& request, const CreateEncryptKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEncryptKeysRequest&;
    using Resp = CreateEncryptKeysResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEncryptKeys", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DrmClient::CreateEncryptKeysOutcomeCallable DrmClient::CreateEncryptKeysCallable(const CreateEncryptKeysRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEncryptKeysOutcome>>();
    CreateEncryptKeysAsync(
    request,
    [prom](
        const DrmClient*,
        const CreateEncryptKeysRequest&,
        CreateEncryptKeysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DrmClient::CreateLicenseOutcome DrmClient::CreateLicense(const CreateLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLicenseResponse rsp = CreateLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLicenseOutcome(rsp);
        else
            return CreateLicenseOutcome(o.GetError());
    }
    else
    {
        return CreateLicenseOutcome(outcome.GetError());
    }
}

void DrmClient::CreateLicenseAsync(const CreateLicenseRequest& request, const CreateLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLicenseRequest&;
    using Resp = CreateLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DrmClient::CreateLicenseOutcomeCallable DrmClient::CreateLicenseCallable(const CreateLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLicenseOutcome>>();
    CreateLicenseAsync(
    request,
    [prom](
        const DrmClient*,
        const CreateLicenseRequest&,
        CreateLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DrmClient::DeleteFairPlayPemOutcome DrmClient::DeleteFairPlayPem(const DeleteFairPlayPemRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFairPlayPem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFairPlayPemResponse rsp = DeleteFairPlayPemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFairPlayPemOutcome(rsp);
        else
            return DeleteFairPlayPemOutcome(o.GetError());
    }
    else
    {
        return DeleteFairPlayPemOutcome(outcome.GetError());
    }
}

void DrmClient::DeleteFairPlayPemAsync(const DeleteFairPlayPemRequest& request, const DeleteFairPlayPemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteFairPlayPemRequest&;
    using Resp = DeleteFairPlayPemResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteFairPlayPem", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DrmClient::DeleteFairPlayPemOutcomeCallable DrmClient::DeleteFairPlayPemCallable(const DeleteFairPlayPemRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteFairPlayPemOutcome>>();
    DeleteFairPlayPemAsync(
    request,
    [prom](
        const DrmClient*,
        const DeleteFairPlayPemRequest&,
        DeleteFairPlayPemOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DrmClient::DescribeAllKeysOutcome DrmClient::DescribeAllKeys(const DescribeAllKeysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllKeysResponse rsp = DescribeAllKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllKeysOutcome(rsp);
        else
            return DescribeAllKeysOutcome(o.GetError());
    }
    else
    {
        return DescribeAllKeysOutcome(outcome.GetError());
    }
}

void DrmClient::DescribeAllKeysAsync(const DescribeAllKeysRequest& request, const DescribeAllKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAllKeysRequest&;
    using Resp = DescribeAllKeysResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAllKeys", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DrmClient::DescribeAllKeysOutcomeCallable DrmClient::DescribeAllKeysCallable(const DescribeAllKeysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAllKeysOutcome>>();
    DescribeAllKeysAsync(
    request,
    [prom](
        const DrmClient*,
        const DescribeAllKeysRequest&,
        DescribeAllKeysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DrmClient::DescribeDRMLicenseOutcome DrmClient::DescribeDRMLicense(const DescribeDRMLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDRMLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDRMLicenseResponse rsp = DescribeDRMLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDRMLicenseOutcome(rsp);
        else
            return DescribeDRMLicenseOutcome(o.GetError());
    }
    else
    {
        return DescribeDRMLicenseOutcome(outcome.GetError());
    }
}

void DrmClient::DescribeDRMLicenseAsync(const DescribeDRMLicenseRequest& request, const DescribeDRMLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDRMLicenseRequest&;
    using Resp = DescribeDRMLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDRMLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DrmClient::DescribeDRMLicenseOutcomeCallable DrmClient::DescribeDRMLicenseCallable(const DescribeDRMLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDRMLicenseOutcome>>();
    DescribeDRMLicenseAsync(
    request,
    [prom](
        const DrmClient*,
        const DescribeDRMLicenseRequest&,
        DescribeDRMLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DrmClient::DescribeFairPlayPemOutcome DrmClient::DescribeFairPlayPem(const DescribeFairPlayPemRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFairPlayPem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFairPlayPemResponse rsp = DescribeFairPlayPemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFairPlayPemOutcome(rsp);
        else
            return DescribeFairPlayPemOutcome(o.GetError());
    }
    else
    {
        return DescribeFairPlayPemOutcome(outcome.GetError());
    }
}

void DrmClient::DescribeFairPlayPemAsync(const DescribeFairPlayPemRequest& request, const DescribeFairPlayPemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFairPlayPemRequest&;
    using Resp = DescribeFairPlayPemResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFairPlayPem", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DrmClient::DescribeFairPlayPemOutcomeCallable DrmClient::DescribeFairPlayPemCallable(const DescribeFairPlayPemRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFairPlayPemOutcome>>();
    DescribeFairPlayPemAsync(
    request,
    [prom](
        const DrmClient*,
        const DescribeFairPlayPemRequest&,
        DescribeFairPlayPemOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DrmClient::DescribeKeysOutcome DrmClient::DescribeKeys(const DescribeKeysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKeysResponse rsp = DescribeKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKeysOutcome(rsp);
        else
            return DescribeKeysOutcome(o.GetError());
    }
    else
    {
        return DescribeKeysOutcome(outcome.GetError());
    }
}

void DrmClient::DescribeKeysAsync(const DescribeKeysRequest& request, const DescribeKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKeysRequest&;
    using Resp = DescribeKeysResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKeys", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DrmClient::DescribeKeysOutcomeCallable DrmClient::DescribeKeysCallable(const DescribeKeysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKeysOutcome>>();
    DescribeKeysAsync(
    request,
    [prom](
        const DrmClient*,
        const DescribeKeysRequest&,
        DescribeKeysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DrmClient::GenerateTDRMKeyOutcome DrmClient::GenerateTDRMKey(const GenerateTDRMKeyRequest &request)
{
    auto outcome = MakeRequest(request, "GenerateTDRMKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateTDRMKeyResponse rsp = GenerateTDRMKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateTDRMKeyOutcome(rsp);
        else
            return GenerateTDRMKeyOutcome(o.GetError());
    }
    else
    {
        return GenerateTDRMKeyOutcome(outcome.GetError());
    }
}

void DrmClient::GenerateTDRMKeyAsync(const GenerateTDRMKeyRequest& request, const GenerateTDRMKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GenerateTDRMKeyRequest&;
    using Resp = GenerateTDRMKeyResponse;

    DoRequestAsync<Req, Resp>(
        "GenerateTDRMKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DrmClient::GenerateTDRMKeyOutcomeCallable DrmClient::GenerateTDRMKeyCallable(const GenerateTDRMKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<GenerateTDRMKeyOutcome>>();
    GenerateTDRMKeyAsync(
    request,
    [prom](
        const DrmClient*,
        const GenerateTDRMKeyRequest&,
        GenerateTDRMKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DrmClient::ModifyFairPlayPemOutcome DrmClient::ModifyFairPlayPem(const ModifyFairPlayPemRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFairPlayPem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFairPlayPemResponse rsp = ModifyFairPlayPemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFairPlayPemOutcome(rsp);
        else
            return ModifyFairPlayPemOutcome(o.GetError());
    }
    else
    {
        return ModifyFairPlayPemOutcome(outcome.GetError());
    }
}

void DrmClient::ModifyFairPlayPemAsync(const ModifyFairPlayPemRequest& request, const ModifyFairPlayPemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyFairPlayPemRequest&;
    using Resp = ModifyFairPlayPemResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyFairPlayPem", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DrmClient::ModifyFairPlayPemOutcomeCallable DrmClient::ModifyFairPlayPemCallable(const ModifyFairPlayPemRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyFairPlayPemOutcome>>();
    ModifyFairPlayPemAsync(
    request,
    [prom](
        const DrmClient*,
        const ModifyFairPlayPemRequest&,
        ModifyFairPlayPemOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DrmClient::StartEncryptionOutcome DrmClient::StartEncryption(const StartEncryptionRequest &request)
{
    auto outcome = MakeRequest(request, "StartEncryption");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartEncryptionResponse rsp = StartEncryptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartEncryptionOutcome(rsp);
        else
            return StartEncryptionOutcome(o.GetError());
    }
    else
    {
        return StartEncryptionOutcome(outcome.GetError());
    }
}

void DrmClient::StartEncryptionAsync(const StartEncryptionRequest& request, const StartEncryptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartEncryptionRequest&;
    using Resp = StartEncryptionResponse;

    DoRequestAsync<Req, Resp>(
        "StartEncryption", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DrmClient::StartEncryptionOutcomeCallable DrmClient::StartEncryptionCallable(const StartEncryptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartEncryptionOutcome>>();
    StartEncryptionAsync(
    request,
    [prom](
        const DrmClient*,
        const StartEncryptionRequest&,
        StartEncryptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

