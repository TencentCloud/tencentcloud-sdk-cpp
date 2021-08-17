/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProductSecret(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsmClient::CreateProductSecretOutcomeCallable SsmClient::CreateProductSecretCallable(const CreateProductSecretRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProductSecretOutcome()>>(
        [this, request]()
        {
            return this->CreateProductSecret(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSSHKeyPairSecret(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsmClient::CreateSSHKeyPairSecretOutcomeCallable SsmClient::CreateSSHKeyPairSecretCallable(const CreateSSHKeyPairSecretRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSSHKeyPairSecretOutcome()>>(
        [this, request]()
        {
            return this->CreateSSHKeyPairSecret(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSecret(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsmClient::CreateSecretOutcomeCallable SsmClient::CreateSecretCallable(const CreateSecretRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSecretOutcome()>>(
        [this, request]()
        {
            return this->CreateSecret(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSecret(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsmClient::DeleteSecretOutcomeCallable SsmClient::DeleteSecretCallable(const DeleteSecretRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSecretOutcome()>>(
        [this, request]()
        {
            return this->DeleteSecret(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSecretVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsmClient::DeleteSecretVersionOutcomeCallable SsmClient::DeleteSecretVersionCallable(const DeleteSecretVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSecretVersionOutcome()>>(
        [this, request]()
        {
            return this->DeleteSecretVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAsyncRequestInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsmClient::DescribeAsyncRequestInfoOutcomeCallable SsmClient::DescribeAsyncRequestInfoCallable(const DescribeAsyncRequestInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAsyncRequestInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeAsyncRequestInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRotationDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsmClient::DescribeRotationDetailOutcomeCallable SsmClient::DescribeRotationDetailCallable(const DescribeRotationDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRotationDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeRotationDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRotationHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsmClient::DescribeRotationHistoryOutcomeCallable SsmClient::DescribeRotationHistoryCallable(const DescribeRotationHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRotationHistoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeRotationHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecret(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsmClient::DescribeSecretOutcomeCallable SsmClient::DescribeSecretCallable(const DescribeSecretRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecretOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecret(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSupportedProducts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsmClient::DescribeSupportedProductsOutcomeCallable SsmClient::DescribeSupportedProductsCallable(const DescribeSupportedProductsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSupportedProductsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSupportedProducts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableSecret(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsmClient::DisableSecretOutcomeCallable SsmClient::DisableSecretCallable(const DisableSecretRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableSecretOutcome()>>(
        [this, request]()
        {
            return this->DisableSecret(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableSecret(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsmClient::EnableSecretOutcomeCallable SsmClient::EnableSecretCallable(const EnableSecretRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableSecretOutcome()>>(
        [this, request]()
        {
            return this->EnableSecret(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsmClient::GetRegionsOutcomeCallable SsmClient::GetRegionsCallable(const GetRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRegionsOutcome()>>(
        [this, request]()
        {
            return this->GetRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetSSHKeyPairValue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsmClient::GetSSHKeyPairValueOutcomeCallable SsmClient::GetSSHKeyPairValueCallable(const GetSSHKeyPairValueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetSSHKeyPairValueOutcome()>>(
        [this, request]()
        {
            return this->GetSSHKeyPairValue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetSecretValue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsmClient::GetSecretValueOutcomeCallable SsmClient::GetSecretValueCallable(const GetSecretValueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetSecretValueOutcome()>>(
        [this, request]()
        {
            return this->GetSecretValue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetServiceStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsmClient::GetServiceStatusOutcomeCallable SsmClient::GetServiceStatusCallable(const GetServiceStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetServiceStatusOutcome()>>(
        [this, request]()
        {
            return this->GetServiceStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListSecretVersionIds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsmClient::ListSecretVersionIdsOutcomeCallable SsmClient::ListSecretVersionIdsCallable(const ListSecretVersionIdsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListSecretVersionIdsOutcome()>>(
        [this, request]()
        {
            return this->ListSecretVersionIds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListSecrets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsmClient::ListSecretsOutcomeCallable SsmClient::ListSecretsCallable(const ListSecretsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListSecretsOutcome()>>(
        [this, request]()
        {
            return this->ListSecrets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PutSecretValue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsmClient::PutSecretValueOutcomeCallable SsmClient::PutSecretValueCallable(const PutSecretValueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PutSecretValueOutcome()>>(
        [this, request]()
        {
            return this->PutSecretValue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestoreSecret(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsmClient::RestoreSecretOutcomeCallable SsmClient::RestoreSecretCallable(const RestoreSecretRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestoreSecretOutcome()>>(
        [this, request]()
        {
            return this->RestoreSecret(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RotateProductSecret(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsmClient::RotateProductSecretOutcomeCallable SsmClient::RotateProductSecretCallable(const RotateProductSecretRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RotateProductSecretOutcome()>>(
        [this, request]()
        {
            return this->RotateProductSecret(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDescription(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsmClient::UpdateDescriptionOutcomeCallable SsmClient::UpdateDescriptionCallable(const UpdateDescriptionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDescriptionOutcome()>>(
        [this, request]()
        {
            return this->UpdateDescription(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateRotationStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsmClient::UpdateRotationStatusOutcomeCallable SsmClient::UpdateRotationStatusCallable(const UpdateRotationStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateRotationStatusOutcome()>>(
        [this, request]()
        {
            return this->UpdateRotationStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateSecret(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsmClient::UpdateSecretOutcomeCallable SsmClient::UpdateSecretCallable(const UpdateSecretRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateSecretOutcome()>>(
        [this, request]()
        {
            return this->UpdateSecret(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

