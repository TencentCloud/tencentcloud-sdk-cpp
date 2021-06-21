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

#include <tencentcloud/tem/v20201221/TemClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tem::V20201221;
using namespace TencentCloud::Tem::V20201221::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-12-21";
    const string ENDPOINT = "tem.tencentcloudapi.com";
}

TemClient::TemClient(const Credential &credential, const string &region) :
    TemClient(credential, region, ClientProfile())
{
}

TemClient::TemClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TemClient::CreateCosTokenOutcome TemClient::CreateCosToken(const CreateCosTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCosToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCosTokenResponse rsp = CreateCosTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCosTokenOutcome(rsp);
        else
            return CreateCosTokenOutcome(o.GetError());
    }
    else
    {
        return CreateCosTokenOutcome(outcome.GetError());
    }
}

void TemClient::CreateCosTokenAsync(const CreateCosTokenRequest& request, const CreateCosTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCosToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::CreateCosTokenOutcomeCallable TemClient::CreateCosTokenCallable(const CreateCosTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCosTokenOutcome()>>(
        [this, request]()
        {
            return this->CreateCosToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::CreateCosTokenV2Outcome TemClient::CreateCosTokenV2(const CreateCosTokenV2Request &request)
{
    auto outcome = MakeRequest(request, "CreateCosTokenV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCosTokenV2Response rsp = CreateCosTokenV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCosTokenV2Outcome(rsp);
        else
            return CreateCosTokenV2Outcome(o.GetError());
    }
    else
    {
        return CreateCosTokenV2Outcome(outcome.GetError());
    }
}

void TemClient::CreateCosTokenV2Async(const CreateCosTokenV2Request& request, const CreateCosTokenV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCosTokenV2(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::CreateCosTokenV2OutcomeCallable TemClient::CreateCosTokenV2Callable(const CreateCosTokenV2Request &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCosTokenV2Outcome()>>(
        [this, request]()
        {
            return this->CreateCosTokenV2(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::CreateNamespaceOutcome TemClient::CreateNamespace(const CreateNamespaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNamespace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNamespaceResponse rsp = CreateNamespaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNamespaceOutcome(rsp);
        else
            return CreateNamespaceOutcome(o.GetError());
    }
    else
    {
        return CreateNamespaceOutcome(outcome.GetError());
    }
}

void TemClient::CreateNamespaceAsync(const CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNamespace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::CreateNamespaceOutcomeCallable TemClient::CreateNamespaceCallable(const CreateNamespaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNamespaceOutcome()>>(
        [this, request]()
        {
            return this->CreateNamespace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::CreateResourceOutcome TemClient::CreateResource(const CreateResourceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateResourceResponse rsp = CreateResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateResourceOutcome(rsp);
        else
            return CreateResourceOutcome(o.GetError());
    }
    else
    {
        return CreateResourceOutcome(outcome.GetError());
    }
}

void TemClient::CreateResourceAsync(const CreateResourceRequest& request, const CreateResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::CreateResourceOutcomeCallable TemClient::CreateResourceCallable(const CreateResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateResourceOutcome()>>(
        [this, request]()
        {
            return this->CreateResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::CreateServiceV2Outcome TemClient::CreateServiceV2(const CreateServiceV2Request &request)
{
    auto outcome = MakeRequest(request, "CreateServiceV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateServiceV2Response rsp = CreateServiceV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateServiceV2Outcome(rsp);
        else
            return CreateServiceV2Outcome(o.GetError());
    }
    else
    {
        return CreateServiceV2Outcome(outcome.GetError());
    }
}

void TemClient::CreateServiceV2Async(const CreateServiceV2Request& request, const CreateServiceV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateServiceV2(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::CreateServiceV2OutcomeCallable TemClient::CreateServiceV2Callable(const CreateServiceV2Request &request)
{
    auto task = std::make_shared<std::packaged_task<CreateServiceV2Outcome()>>(
        [this, request]()
        {
            return this->CreateServiceV2(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::DeleteIngressOutcome TemClient::DeleteIngress(const DeleteIngressRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIngress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIngressResponse rsp = DeleteIngressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIngressOutcome(rsp);
        else
            return DeleteIngressOutcome(o.GetError());
    }
    else
    {
        return DeleteIngressOutcome(outcome.GetError());
    }
}

void TemClient::DeleteIngressAsync(const DeleteIngressRequest& request, const DeleteIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteIngress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::DeleteIngressOutcomeCallable TemClient::DeleteIngressCallable(const DeleteIngressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteIngressOutcome()>>(
        [this, request]()
        {
            return this->DeleteIngress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::DeployServiceV2Outcome TemClient::DeployServiceV2(const DeployServiceV2Request &request)
{
    auto outcome = MakeRequest(request, "DeployServiceV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeployServiceV2Response rsp = DeployServiceV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeployServiceV2Outcome(rsp);
        else
            return DeployServiceV2Outcome(o.GetError());
    }
    else
    {
        return DeployServiceV2Outcome(outcome.GetError());
    }
}

void TemClient::DeployServiceV2Async(const DeployServiceV2Request& request, const DeployServiceV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeployServiceV2(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::DeployServiceV2OutcomeCallable TemClient::DeployServiceV2Callable(const DeployServiceV2Request &request)
{
    auto task = std::make_shared<std::packaged_task<DeployServiceV2Outcome()>>(
        [this, request]()
        {
            return this->DeployServiceV2(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::DescribeIngressOutcome TemClient::DescribeIngress(const DescribeIngressRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIngress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIngressResponse rsp = DescribeIngressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIngressOutcome(rsp);
        else
            return DescribeIngressOutcome(o.GetError());
    }
    else
    {
        return DescribeIngressOutcome(outcome.GetError());
    }
}

void TemClient::DescribeIngressAsync(const DescribeIngressRequest& request, const DescribeIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIngress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::DescribeIngressOutcomeCallable TemClient::DescribeIngressCallable(const DescribeIngressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIngressOutcome()>>(
        [this, request]()
        {
            return this->DescribeIngress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::DescribeIngressesOutcome TemClient::DescribeIngresses(const DescribeIngressesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIngresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIngressesResponse rsp = DescribeIngressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIngressesOutcome(rsp);
        else
            return DescribeIngressesOutcome(o.GetError());
    }
    else
    {
        return DescribeIngressesOutcome(outcome.GetError());
    }
}

void TemClient::DescribeIngressesAsync(const DescribeIngressesRequest& request, const DescribeIngressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIngresses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::DescribeIngressesOutcomeCallable TemClient::DescribeIngressesCallable(const DescribeIngressesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIngressesOutcome()>>(
        [this, request]()
        {
            return this->DescribeIngresses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::DescribeNamespacesOutcome TemClient::DescribeNamespaces(const DescribeNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNamespacesResponse rsp = DescribeNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNamespacesOutcome(rsp);
        else
            return DescribeNamespacesOutcome(o.GetError());
    }
    else
    {
        return DescribeNamespacesOutcome(outcome.GetError());
    }
}

void TemClient::DescribeNamespacesAsync(const DescribeNamespacesRequest& request, const DescribeNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNamespaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::DescribeNamespacesOutcomeCallable TemClient::DescribeNamespacesCallable(const DescribeNamespacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNamespacesOutcome()>>(
        [this, request]()
        {
            return this->DescribeNamespaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::DescribeRelatedIngressesOutcome TemClient::DescribeRelatedIngresses(const DescribeRelatedIngressesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRelatedIngresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRelatedIngressesResponse rsp = DescribeRelatedIngressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRelatedIngressesOutcome(rsp);
        else
            return DescribeRelatedIngressesOutcome(o.GetError());
    }
    else
    {
        return DescribeRelatedIngressesOutcome(outcome.GetError());
    }
}

void TemClient::DescribeRelatedIngressesAsync(const DescribeRelatedIngressesRequest& request, const DescribeRelatedIngressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRelatedIngresses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::DescribeRelatedIngressesOutcomeCallable TemClient::DescribeRelatedIngressesCallable(const DescribeRelatedIngressesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRelatedIngressesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRelatedIngresses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::DescribeServiceRunPodListV2Outcome TemClient::DescribeServiceRunPodListV2(const DescribeServiceRunPodListV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceRunPodListV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceRunPodListV2Response rsp = DescribeServiceRunPodListV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceRunPodListV2Outcome(rsp);
        else
            return DescribeServiceRunPodListV2Outcome(o.GetError());
    }
    else
    {
        return DescribeServiceRunPodListV2Outcome(outcome.GetError());
    }
}

void TemClient::DescribeServiceRunPodListV2Async(const DescribeServiceRunPodListV2Request& request, const DescribeServiceRunPodListV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServiceRunPodListV2(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::DescribeServiceRunPodListV2OutcomeCallable TemClient::DescribeServiceRunPodListV2Callable(const DescribeServiceRunPodListV2Request &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServiceRunPodListV2Outcome()>>(
        [this, request]()
        {
            return this->DescribeServiceRunPodListV2(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::GenerateDownloadUrlOutcome TemClient::GenerateDownloadUrl(const GenerateDownloadUrlRequest &request)
{
    auto outcome = MakeRequest(request, "GenerateDownloadUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateDownloadUrlResponse rsp = GenerateDownloadUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateDownloadUrlOutcome(rsp);
        else
            return GenerateDownloadUrlOutcome(o.GetError());
    }
    else
    {
        return GenerateDownloadUrlOutcome(outcome.GetError());
    }
}

void TemClient::GenerateDownloadUrlAsync(const GenerateDownloadUrlRequest& request, const GenerateDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GenerateDownloadUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::GenerateDownloadUrlOutcomeCallable TemClient::GenerateDownloadUrlCallable(const GenerateDownloadUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GenerateDownloadUrlOutcome()>>(
        [this, request]()
        {
            return this->GenerateDownloadUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::ModifyIngressOutcome TemClient::ModifyIngress(const ModifyIngressRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIngress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIngressResponse rsp = ModifyIngressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIngressOutcome(rsp);
        else
            return ModifyIngressOutcome(o.GetError());
    }
    else
    {
        return ModifyIngressOutcome(outcome.GetError());
    }
}

void TemClient::ModifyIngressAsync(const ModifyIngressRequest& request, const ModifyIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyIngress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::ModifyIngressOutcomeCallable TemClient::ModifyIngressCallable(const ModifyIngressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyIngressOutcome()>>(
        [this, request]()
        {
            return this->ModifyIngress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::ModifyNamespaceOutcome TemClient::ModifyNamespace(const ModifyNamespaceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNamespace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNamespaceResponse rsp = ModifyNamespaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNamespaceOutcome(rsp);
        else
            return ModifyNamespaceOutcome(o.GetError());
    }
    else
    {
        return ModifyNamespaceOutcome(outcome.GetError());
    }
}

void TemClient::ModifyNamespaceAsync(const ModifyNamespaceRequest& request, const ModifyNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNamespace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::ModifyNamespaceOutcomeCallable TemClient::ModifyNamespaceCallable(const ModifyNamespaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNamespaceOutcome()>>(
        [this, request]()
        {
            return this->ModifyNamespace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::ModifyServiceInfoOutcome TemClient::ModifyServiceInfo(const ModifyServiceInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyServiceInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyServiceInfoResponse rsp = ModifyServiceInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyServiceInfoOutcome(rsp);
        else
            return ModifyServiceInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyServiceInfoOutcome(outcome.GetError());
    }
}

void TemClient::ModifyServiceInfoAsync(const ModifyServiceInfoRequest& request, const ModifyServiceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyServiceInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::ModifyServiceInfoOutcomeCallable TemClient::ModifyServiceInfoCallable(const ModifyServiceInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyServiceInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyServiceInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::RestartServiceRunPodOutcome TemClient::RestartServiceRunPod(const RestartServiceRunPodRequest &request)
{
    auto outcome = MakeRequest(request, "RestartServiceRunPod");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartServiceRunPodResponse rsp = RestartServiceRunPodResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartServiceRunPodOutcome(rsp);
        else
            return RestartServiceRunPodOutcome(o.GetError());
    }
    else
    {
        return RestartServiceRunPodOutcome(outcome.GetError());
    }
}

void TemClient::RestartServiceRunPodAsync(const RestartServiceRunPodRequest& request, const RestartServiceRunPodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartServiceRunPod(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::RestartServiceRunPodOutcomeCallable TemClient::RestartServiceRunPodCallable(const RestartServiceRunPodRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartServiceRunPodOutcome()>>(
        [this, request]()
        {
            return this->RestartServiceRunPod(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

