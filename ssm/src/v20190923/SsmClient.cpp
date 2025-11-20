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

#include <tencentcloud/ssm/v20190923/SsmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ssm::V20190923;
using namespace TencentCloud::Ssm::V20190923::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-09-23";
    const string ENDPOINT = "ssm.tencentcloudapi.com";
}

SsmClient::SsmClient(const Credential &credential, const string &region) :
    SsmClient(credential, region, ClientProfile())
{
}

SsmClient::SsmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


SsmClient::CreateProductSecretOutcome SsmClient::CreateProductSecret(const CreateProductSecretRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProductSecret");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProductSecretResponse rsp = CreateProductSecretResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProductSecretOutcome(rsp);
        else
            return CreateProductSecretOutcome(o.GetError());
    }
    else
    {
        return CreateProductSecretOutcome(outcome.GetError());
    }
}

void SsmClient::CreateProductSecretAsync(const CreateProductSecretRequest& request, const CreateProductSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateProductSecretRequest&;
    using Resp = CreateProductSecretResponse;

    DoRequestAsync<Req, Resp>(
        "CreateProductSecret", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsmClient::CreateProductSecretOutcomeCallable SsmClient::CreateProductSecretCallable(const CreateProductSecretRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProductSecretOutcome>>();
    CreateProductSecretAsync(
    request,
    [prom](
        const SsmClient*,
        const CreateProductSecretRequest&,
        CreateProductSecretOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsmClient::CreateSSHKeyPairSecretOutcome SsmClient::CreateSSHKeyPairSecret(const CreateSSHKeyPairSecretRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSSHKeyPairSecret");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSSHKeyPairSecretResponse rsp = CreateSSHKeyPairSecretResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSSHKeyPairSecretOutcome(rsp);
        else
            return CreateSSHKeyPairSecretOutcome(o.GetError());
    }
    else
    {
        return CreateSSHKeyPairSecretOutcome(outcome.GetError());
    }
}

void SsmClient::CreateSSHKeyPairSecretAsync(const CreateSSHKeyPairSecretRequest& request, const CreateSSHKeyPairSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSSHKeyPairSecretRequest&;
    using Resp = CreateSSHKeyPairSecretResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSSHKeyPairSecret", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsmClient::CreateSSHKeyPairSecretOutcomeCallable SsmClient::CreateSSHKeyPairSecretCallable(const CreateSSHKeyPairSecretRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSSHKeyPairSecretOutcome>>();
    CreateSSHKeyPairSecretAsync(
    request,
    [prom](
        const SsmClient*,
        const CreateSSHKeyPairSecretRequest&,
        CreateSSHKeyPairSecretOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsmClient::CreateSecretOutcome SsmClient::CreateSecret(const CreateSecretRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecret");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecretResponse rsp = CreateSecretResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecretOutcome(rsp);
        else
            return CreateSecretOutcome(o.GetError());
    }
    else
    {
        return CreateSecretOutcome(outcome.GetError());
    }
}

void SsmClient::CreateSecretAsync(const CreateSecretRequest& request, const CreateSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSecretRequest&;
    using Resp = CreateSecretResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSecret", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsmClient::CreateSecretOutcomeCallable SsmClient::CreateSecretCallable(const CreateSecretRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSecretOutcome>>();
    CreateSecretAsync(
    request,
    [prom](
        const SsmClient*,
        const CreateSecretRequest&,
        CreateSecretOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsmClient::DeleteSecretOutcome SsmClient::DeleteSecret(const DeleteSecretRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecret");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecretResponse rsp = DeleteSecretResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecretOutcome(rsp);
        else
            return DeleteSecretOutcome(o.GetError());
    }
    else
    {
        return DeleteSecretOutcome(outcome.GetError());
    }
}

void SsmClient::DeleteSecretAsync(const DeleteSecretRequest& request, const DeleteSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSecretRequest&;
    using Resp = DeleteSecretResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSecret", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsmClient::DeleteSecretOutcomeCallable SsmClient::DeleteSecretCallable(const DeleteSecretRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSecretOutcome>>();
    DeleteSecretAsync(
    request,
    [prom](
        const SsmClient*,
        const DeleteSecretRequest&,
        DeleteSecretOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsmClient::DeleteSecretVersionOutcome SsmClient::DeleteSecretVersion(const DeleteSecretVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecretVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecretVersionResponse rsp = DeleteSecretVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecretVersionOutcome(rsp);
        else
            return DeleteSecretVersionOutcome(o.GetError());
    }
    else
    {
        return DeleteSecretVersionOutcome(outcome.GetError());
    }
}

void SsmClient::DeleteSecretVersionAsync(const DeleteSecretVersionRequest& request, const DeleteSecretVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSecretVersionRequest&;
    using Resp = DeleteSecretVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSecretVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsmClient::DeleteSecretVersionOutcomeCallable SsmClient::DeleteSecretVersionCallable(const DeleteSecretVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSecretVersionOutcome>>();
    DeleteSecretVersionAsync(
    request,
    [prom](
        const SsmClient*,
        const DeleteSecretVersionRequest&,
        DeleteSecretVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsmClient::DescribeAsyncRequestInfoOutcome SsmClient::DescribeAsyncRequestInfo(const DescribeAsyncRequestInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAsyncRequestInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAsyncRequestInfoResponse rsp = DescribeAsyncRequestInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAsyncRequestInfoOutcome(rsp);
        else
            return DescribeAsyncRequestInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAsyncRequestInfoOutcome(outcome.GetError());
    }
}

void SsmClient::DescribeAsyncRequestInfoAsync(const DescribeAsyncRequestInfoRequest& request, const DescribeAsyncRequestInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAsyncRequestInfoRequest&;
    using Resp = DescribeAsyncRequestInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAsyncRequestInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsmClient::DescribeAsyncRequestInfoOutcomeCallable SsmClient::DescribeAsyncRequestInfoCallable(const DescribeAsyncRequestInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAsyncRequestInfoOutcome>>();
    DescribeAsyncRequestInfoAsync(
    request,
    [prom](
        const SsmClient*,
        const DescribeAsyncRequestInfoRequest&,
        DescribeAsyncRequestInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsmClient::DescribeRotationDetailOutcome SsmClient::DescribeRotationDetail(const DescribeRotationDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRotationDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRotationDetailResponse rsp = DescribeRotationDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRotationDetailOutcome(rsp);
        else
            return DescribeRotationDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeRotationDetailOutcome(outcome.GetError());
    }
}

void SsmClient::DescribeRotationDetailAsync(const DescribeRotationDetailRequest& request, const DescribeRotationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRotationDetailRequest&;
    using Resp = DescribeRotationDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRotationDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsmClient::DescribeRotationDetailOutcomeCallable SsmClient::DescribeRotationDetailCallable(const DescribeRotationDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRotationDetailOutcome>>();
    DescribeRotationDetailAsync(
    request,
    [prom](
        const SsmClient*,
        const DescribeRotationDetailRequest&,
        DescribeRotationDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsmClient::DescribeRotationHistoryOutcome SsmClient::DescribeRotationHistory(const DescribeRotationHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRotationHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRotationHistoryResponse rsp = DescribeRotationHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRotationHistoryOutcome(rsp);
        else
            return DescribeRotationHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeRotationHistoryOutcome(outcome.GetError());
    }
}

void SsmClient::DescribeRotationHistoryAsync(const DescribeRotationHistoryRequest& request, const DescribeRotationHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRotationHistoryRequest&;
    using Resp = DescribeRotationHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRotationHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsmClient::DescribeRotationHistoryOutcomeCallable SsmClient::DescribeRotationHistoryCallable(const DescribeRotationHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRotationHistoryOutcome>>();
    DescribeRotationHistoryAsync(
    request,
    [prom](
        const SsmClient*,
        const DescribeRotationHistoryRequest&,
        DescribeRotationHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsmClient::DescribeSecretOutcome SsmClient::DescribeSecret(const DescribeSecretRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecret");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecretResponse rsp = DescribeSecretResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecretOutcome(rsp);
        else
            return DescribeSecretOutcome(o.GetError());
    }
    else
    {
        return DescribeSecretOutcome(outcome.GetError());
    }
}

void SsmClient::DescribeSecretAsync(const DescribeSecretRequest& request, const DescribeSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecretRequest&;
    using Resp = DescribeSecretResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecret", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsmClient::DescribeSecretOutcomeCallable SsmClient::DescribeSecretCallable(const DescribeSecretRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecretOutcome>>();
    DescribeSecretAsync(
    request,
    [prom](
        const SsmClient*,
        const DescribeSecretRequest&,
        DescribeSecretOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsmClient::DescribeSupportedProductsOutcome SsmClient::DescribeSupportedProducts(const DescribeSupportedProductsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSupportedProducts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSupportedProductsResponse rsp = DescribeSupportedProductsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSupportedProductsOutcome(rsp);
        else
            return DescribeSupportedProductsOutcome(o.GetError());
    }
    else
    {
        return DescribeSupportedProductsOutcome(outcome.GetError());
    }
}

void SsmClient::DescribeSupportedProductsAsync(const DescribeSupportedProductsRequest& request, const DescribeSupportedProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSupportedProductsRequest&;
    using Resp = DescribeSupportedProductsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSupportedProducts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsmClient::DescribeSupportedProductsOutcomeCallable SsmClient::DescribeSupportedProductsCallable(const DescribeSupportedProductsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSupportedProductsOutcome>>();
    DescribeSupportedProductsAsync(
    request,
    [prom](
        const SsmClient*,
        const DescribeSupportedProductsRequest&,
        DescribeSupportedProductsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsmClient::DisableSecretOutcome SsmClient::DisableSecret(const DisableSecretRequest &request)
{
    auto outcome = MakeRequest(request, "DisableSecret");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableSecretResponse rsp = DisableSecretResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableSecretOutcome(rsp);
        else
            return DisableSecretOutcome(o.GetError());
    }
    else
    {
        return DisableSecretOutcome(outcome.GetError());
    }
}

void SsmClient::DisableSecretAsync(const DisableSecretRequest& request, const DisableSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableSecretRequest&;
    using Resp = DisableSecretResponse;

    DoRequestAsync<Req, Resp>(
        "DisableSecret", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsmClient::DisableSecretOutcomeCallable SsmClient::DisableSecretCallable(const DisableSecretRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableSecretOutcome>>();
    DisableSecretAsync(
    request,
    [prom](
        const SsmClient*,
        const DisableSecretRequest&,
        DisableSecretOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsmClient::EnableSecretOutcome SsmClient::EnableSecret(const EnableSecretRequest &request)
{
    auto outcome = MakeRequest(request, "EnableSecret");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableSecretResponse rsp = EnableSecretResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableSecretOutcome(rsp);
        else
            return EnableSecretOutcome(o.GetError());
    }
    else
    {
        return EnableSecretOutcome(outcome.GetError());
    }
}

void SsmClient::EnableSecretAsync(const EnableSecretRequest& request, const EnableSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableSecretRequest&;
    using Resp = EnableSecretResponse;

    DoRequestAsync<Req, Resp>(
        "EnableSecret", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsmClient::EnableSecretOutcomeCallable SsmClient::EnableSecretCallable(const EnableSecretRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableSecretOutcome>>();
    EnableSecretAsync(
    request,
    [prom](
        const SsmClient*,
        const EnableSecretRequest&,
        EnableSecretOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsmClient::GetRegionsOutcome SsmClient::GetRegions(const GetRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "GetRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRegionsResponse rsp = GetRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRegionsOutcome(rsp);
        else
            return GetRegionsOutcome(o.GetError());
    }
    else
    {
        return GetRegionsOutcome(outcome.GetError());
    }
}

void SsmClient::GetRegionsAsync(const GetRegionsRequest& request, const GetRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRegionsRequest&;
    using Resp = GetRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "GetRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsmClient::GetRegionsOutcomeCallable SsmClient::GetRegionsCallable(const GetRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRegionsOutcome>>();
    GetRegionsAsync(
    request,
    [prom](
        const SsmClient*,
        const GetRegionsRequest&,
        GetRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsmClient::GetSSHKeyPairValueOutcome SsmClient::GetSSHKeyPairValue(const GetSSHKeyPairValueRequest &request)
{
    auto outcome = MakeRequest(request, "GetSSHKeyPairValue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetSSHKeyPairValueResponse rsp = GetSSHKeyPairValueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetSSHKeyPairValueOutcome(rsp);
        else
            return GetSSHKeyPairValueOutcome(o.GetError());
    }
    else
    {
        return GetSSHKeyPairValueOutcome(outcome.GetError());
    }
}

void SsmClient::GetSSHKeyPairValueAsync(const GetSSHKeyPairValueRequest& request, const GetSSHKeyPairValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetSSHKeyPairValueRequest&;
    using Resp = GetSSHKeyPairValueResponse;

    DoRequestAsync<Req, Resp>(
        "GetSSHKeyPairValue", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsmClient::GetSSHKeyPairValueOutcomeCallable SsmClient::GetSSHKeyPairValueCallable(const GetSSHKeyPairValueRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetSSHKeyPairValueOutcome>>();
    GetSSHKeyPairValueAsync(
    request,
    [prom](
        const SsmClient*,
        const GetSSHKeyPairValueRequest&,
        GetSSHKeyPairValueOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsmClient::GetSecretValueOutcome SsmClient::GetSecretValue(const GetSecretValueRequest &request)
{
    auto outcome = MakeRequest(request, "GetSecretValue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetSecretValueResponse rsp = GetSecretValueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetSecretValueOutcome(rsp);
        else
            return GetSecretValueOutcome(o.GetError());
    }
    else
    {
        return GetSecretValueOutcome(outcome.GetError());
    }
}

void SsmClient::GetSecretValueAsync(const GetSecretValueRequest& request, const GetSecretValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetSecretValueRequest&;
    using Resp = GetSecretValueResponse;

    DoRequestAsync<Req, Resp>(
        "GetSecretValue", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsmClient::GetSecretValueOutcomeCallable SsmClient::GetSecretValueCallable(const GetSecretValueRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetSecretValueOutcome>>();
    GetSecretValueAsync(
    request,
    [prom](
        const SsmClient*,
        const GetSecretValueRequest&,
        GetSecretValueOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsmClient::GetServiceStatusOutcome SsmClient::GetServiceStatus(const GetServiceStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetServiceStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetServiceStatusResponse rsp = GetServiceStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetServiceStatusOutcome(rsp);
        else
            return GetServiceStatusOutcome(o.GetError());
    }
    else
    {
        return GetServiceStatusOutcome(outcome.GetError());
    }
}

void SsmClient::GetServiceStatusAsync(const GetServiceStatusRequest& request, const GetServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetServiceStatusRequest&;
    using Resp = GetServiceStatusResponse;

    DoRequestAsync<Req, Resp>(
        "GetServiceStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsmClient::GetServiceStatusOutcomeCallable SsmClient::GetServiceStatusCallable(const GetServiceStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetServiceStatusOutcome>>();
    GetServiceStatusAsync(
    request,
    [prom](
        const SsmClient*,
        const GetServiceStatusRequest&,
        GetServiceStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsmClient::ListSecretVersionIdsOutcome SsmClient::ListSecretVersionIds(const ListSecretVersionIdsRequest &request)
{
    auto outcome = MakeRequest(request, "ListSecretVersionIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListSecretVersionIdsResponse rsp = ListSecretVersionIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListSecretVersionIdsOutcome(rsp);
        else
            return ListSecretVersionIdsOutcome(o.GetError());
    }
    else
    {
        return ListSecretVersionIdsOutcome(outcome.GetError());
    }
}

void SsmClient::ListSecretVersionIdsAsync(const ListSecretVersionIdsRequest& request, const ListSecretVersionIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListSecretVersionIdsRequest&;
    using Resp = ListSecretVersionIdsResponse;

    DoRequestAsync<Req, Resp>(
        "ListSecretVersionIds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsmClient::ListSecretVersionIdsOutcomeCallable SsmClient::ListSecretVersionIdsCallable(const ListSecretVersionIdsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListSecretVersionIdsOutcome>>();
    ListSecretVersionIdsAsync(
    request,
    [prom](
        const SsmClient*,
        const ListSecretVersionIdsRequest&,
        ListSecretVersionIdsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsmClient::ListSecretsOutcome SsmClient::ListSecrets(const ListSecretsRequest &request)
{
    auto outcome = MakeRequest(request, "ListSecrets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListSecretsResponse rsp = ListSecretsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListSecretsOutcome(rsp);
        else
            return ListSecretsOutcome(o.GetError());
    }
    else
    {
        return ListSecretsOutcome(outcome.GetError());
    }
}

void SsmClient::ListSecretsAsync(const ListSecretsRequest& request, const ListSecretsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListSecretsRequest&;
    using Resp = ListSecretsResponse;

    DoRequestAsync<Req, Resp>(
        "ListSecrets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsmClient::ListSecretsOutcomeCallable SsmClient::ListSecretsCallable(const ListSecretsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListSecretsOutcome>>();
    ListSecretsAsync(
    request,
    [prom](
        const SsmClient*,
        const ListSecretsRequest&,
        ListSecretsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsmClient::PutSecretValueOutcome SsmClient::PutSecretValue(const PutSecretValueRequest &request)
{
    auto outcome = MakeRequest(request, "PutSecretValue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PutSecretValueResponse rsp = PutSecretValueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PutSecretValueOutcome(rsp);
        else
            return PutSecretValueOutcome(o.GetError());
    }
    else
    {
        return PutSecretValueOutcome(outcome.GetError());
    }
}

void SsmClient::PutSecretValueAsync(const PutSecretValueRequest& request, const PutSecretValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PutSecretValueRequest&;
    using Resp = PutSecretValueResponse;

    DoRequestAsync<Req, Resp>(
        "PutSecretValue", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsmClient::PutSecretValueOutcomeCallable SsmClient::PutSecretValueCallable(const PutSecretValueRequest &request)
{
    const auto prom = std::make_shared<std::promise<PutSecretValueOutcome>>();
    PutSecretValueAsync(
    request,
    [prom](
        const SsmClient*,
        const PutSecretValueRequest&,
        PutSecretValueOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsmClient::RestoreSecretOutcome SsmClient::RestoreSecret(const RestoreSecretRequest &request)
{
    auto outcome = MakeRequest(request, "RestoreSecret");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestoreSecretResponse rsp = RestoreSecretResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestoreSecretOutcome(rsp);
        else
            return RestoreSecretOutcome(o.GetError());
    }
    else
    {
        return RestoreSecretOutcome(outcome.GetError());
    }
}

void SsmClient::RestoreSecretAsync(const RestoreSecretRequest& request, const RestoreSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestoreSecretRequest&;
    using Resp = RestoreSecretResponse;

    DoRequestAsync<Req, Resp>(
        "RestoreSecret", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsmClient::RestoreSecretOutcomeCallable SsmClient::RestoreSecretCallable(const RestoreSecretRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestoreSecretOutcome>>();
    RestoreSecretAsync(
    request,
    [prom](
        const SsmClient*,
        const RestoreSecretRequest&,
        RestoreSecretOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsmClient::RotateProductSecretOutcome SsmClient::RotateProductSecret(const RotateProductSecretRequest &request)
{
    auto outcome = MakeRequest(request, "RotateProductSecret");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RotateProductSecretResponse rsp = RotateProductSecretResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RotateProductSecretOutcome(rsp);
        else
            return RotateProductSecretOutcome(o.GetError());
    }
    else
    {
        return RotateProductSecretOutcome(outcome.GetError());
    }
}

void SsmClient::RotateProductSecretAsync(const RotateProductSecretRequest& request, const RotateProductSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RotateProductSecretRequest&;
    using Resp = RotateProductSecretResponse;

    DoRequestAsync<Req, Resp>(
        "RotateProductSecret", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsmClient::RotateProductSecretOutcomeCallable SsmClient::RotateProductSecretCallable(const RotateProductSecretRequest &request)
{
    const auto prom = std::make_shared<std::promise<RotateProductSecretOutcome>>();
    RotateProductSecretAsync(
    request,
    [prom](
        const SsmClient*,
        const RotateProductSecretRequest&,
        RotateProductSecretOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsmClient::UpdateDescriptionOutcome SsmClient::UpdateDescription(const UpdateDescriptionRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDescription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDescriptionResponse rsp = UpdateDescriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDescriptionOutcome(rsp);
        else
            return UpdateDescriptionOutcome(o.GetError());
    }
    else
    {
        return UpdateDescriptionOutcome(outcome.GetError());
    }
}

void SsmClient::UpdateDescriptionAsync(const UpdateDescriptionRequest& request, const UpdateDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateDescriptionRequest&;
    using Resp = UpdateDescriptionResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDescription", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsmClient::UpdateDescriptionOutcomeCallable SsmClient::UpdateDescriptionCallable(const UpdateDescriptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDescriptionOutcome>>();
    UpdateDescriptionAsync(
    request,
    [prom](
        const SsmClient*,
        const UpdateDescriptionRequest&,
        UpdateDescriptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsmClient::UpdateRotationStatusOutcome SsmClient::UpdateRotationStatus(const UpdateRotationStatusRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRotationStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRotationStatusResponse rsp = UpdateRotationStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRotationStatusOutcome(rsp);
        else
            return UpdateRotationStatusOutcome(o.GetError());
    }
    else
    {
        return UpdateRotationStatusOutcome(outcome.GetError());
    }
}

void SsmClient::UpdateRotationStatusAsync(const UpdateRotationStatusRequest& request, const UpdateRotationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateRotationStatusRequest&;
    using Resp = UpdateRotationStatusResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateRotationStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsmClient::UpdateRotationStatusOutcomeCallable SsmClient::UpdateRotationStatusCallable(const UpdateRotationStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateRotationStatusOutcome>>();
    UpdateRotationStatusAsync(
    request,
    [prom](
        const SsmClient*,
        const UpdateRotationStatusRequest&,
        UpdateRotationStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsmClient::UpdateSecretOutcome SsmClient::UpdateSecret(const UpdateSecretRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateSecret");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateSecretResponse rsp = UpdateSecretResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateSecretOutcome(rsp);
        else
            return UpdateSecretOutcome(o.GetError());
    }
    else
    {
        return UpdateSecretOutcome(outcome.GetError());
    }
}

void SsmClient::UpdateSecretAsync(const UpdateSecretRequest& request, const UpdateSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateSecretRequest&;
    using Resp = UpdateSecretResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateSecret", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsmClient::UpdateSecretOutcomeCallable SsmClient::UpdateSecretCallable(const UpdateSecretRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateSecretOutcome>>();
    UpdateSecretAsync(
    request,
    [prom](
        const SsmClient*,
        const UpdateSecretRequest&,
        UpdateSecretOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

