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

#include <tencentcloud/tem/v20210701/TemClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tem::V20210701;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-07-01";
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


TemClient::CreateApplicationOutcome TemClient::CreateApplication(const CreateApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationResponse rsp = CreateApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationOutcome(rsp);
        else
            return CreateApplicationOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationOutcome(outcome.GetError());
    }
}

void TemClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::CreateApplicationOutcomeCallable TemClient::CreateApplicationCallable(const CreateApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateApplicationOutcome()>>(
        [this, request]()
        {
            return this->CreateApplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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

TemClient::CreateEnvironmentOutcome TemClient::CreateEnvironment(const CreateEnvironmentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEnvironment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEnvironmentResponse rsp = CreateEnvironmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEnvironmentOutcome(rsp);
        else
            return CreateEnvironmentOutcome(o.GetError());
    }
    else
    {
        return CreateEnvironmentOutcome(outcome.GetError());
    }
}

void TemClient::CreateEnvironmentAsync(const CreateEnvironmentRequest& request, const CreateEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEnvironment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::CreateEnvironmentOutcomeCallable TemClient::CreateEnvironmentCallable(const CreateEnvironmentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEnvironmentOutcome()>>(
        [this, request]()
        {
            return this->CreateEnvironment(request);
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

TemClient::DeleteApplicationOutcome TemClient::DeleteApplication(const DeleteApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApplicationResponse rsp = DeleteApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApplicationOutcome(rsp);
        else
            return DeleteApplicationOutcome(o.GetError());
    }
    else
    {
        return DeleteApplicationOutcome(outcome.GetError());
    }
}

void TemClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::DeleteApplicationOutcomeCallable TemClient::DeleteApplicationCallable(const DeleteApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteApplicationOutcome()>>(
        [this, request]()
        {
            return this->DeleteApplication(request);
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

TemClient::DeployApplicationOutcome TemClient::DeployApplication(const DeployApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "DeployApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeployApplicationResponse rsp = DeployApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeployApplicationOutcome(rsp);
        else
            return DeployApplicationOutcome(o.GetError());
    }
    else
    {
        return DeployApplicationOutcome(outcome.GetError());
    }
}

void TemClient::DeployApplicationAsync(const DeployApplicationRequest& request, const DeployApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeployApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::DeployApplicationOutcomeCallable TemClient::DeployApplicationCallable(const DeployApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeployApplicationOutcome()>>(
        [this, request]()
        {
            return this->DeployApplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::DescribeApplicationPodsOutcome TemClient::DescribeApplicationPods(const DescribeApplicationPodsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationPods");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationPodsResponse rsp = DescribeApplicationPodsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationPodsOutcome(rsp);
        else
            return DescribeApplicationPodsOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationPodsOutcome(outcome.GetError());
    }
}

void TemClient::DescribeApplicationPodsAsync(const DescribeApplicationPodsRequest& request, const DescribeApplicationPodsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplicationPods(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::DescribeApplicationPodsOutcomeCallable TemClient::DescribeApplicationPodsCallable(const DescribeApplicationPodsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationPodsOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplicationPods(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::DescribeApplicationsStatusOutcome TemClient::DescribeApplicationsStatus(const DescribeApplicationsStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationsStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationsStatusResponse rsp = DescribeApplicationsStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationsStatusOutcome(rsp);
        else
            return DescribeApplicationsStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationsStatusOutcome(outcome.GetError());
    }
}

void TemClient::DescribeApplicationsStatusAsync(const DescribeApplicationsStatusRequest& request, const DescribeApplicationsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplicationsStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::DescribeApplicationsStatusOutcomeCallable TemClient::DescribeApplicationsStatusCallable(const DescribeApplicationsStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationsStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplicationsStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::DescribeDeployApplicationDetailOutcome TemClient::DescribeDeployApplicationDetail(const DescribeDeployApplicationDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeployApplicationDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeployApplicationDetailResponse rsp = DescribeDeployApplicationDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeployApplicationDetailOutcome(rsp);
        else
            return DescribeDeployApplicationDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDeployApplicationDetailOutcome(outcome.GetError());
    }
}

void TemClient::DescribeDeployApplicationDetailAsync(const DescribeDeployApplicationDetailRequest& request, const DescribeDeployApplicationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeployApplicationDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::DescribeDeployApplicationDetailOutcomeCallable TemClient::DescribeDeployApplicationDetailCallable(const DescribeDeployApplicationDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeployApplicationDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeployApplicationDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::DescribeEnvironmentsOutcome TemClient::DescribeEnvironments(const DescribeEnvironmentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvironments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvironmentsResponse rsp = DescribeEnvironmentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvironmentsOutcome(rsp);
        else
            return DescribeEnvironmentsOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvironmentsOutcome(outcome.GetError());
    }
}

void TemClient::DescribeEnvironmentsAsync(const DescribeEnvironmentsRequest& request, const DescribeEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnvironments(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::DescribeEnvironmentsOutcomeCallable TemClient::DescribeEnvironmentsCallable(const DescribeEnvironmentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEnvironmentsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEnvironments(request);
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

TemClient::GenerateApplicationPackageDownloadUrlOutcome TemClient::GenerateApplicationPackageDownloadUrl(const GenerateApplicationPackageDownloadUrlRequest &request)
{
    auto outcome = MakeRequest(request, "GenerateApplicationPackageDownloadUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateApplicationPackageDownloadUrlResponse rsp = GenerateApplicationPackageDownloadUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateApplicationPackageDownloadUrlOutcome(rsp);
        else
            return GenerateApplicationPackageDownloadUrlOutcome(o.GetError());
    }
    else
    {
        return GenerateApplicationPackageDownloadUrlOutcome(outcome.GetError());
    }
}

void TemClient::GenerateApplicationPackageDownloadUrlAsync(const GenerateApplicationPackageDownloadUrlRequest& request, const GenerateApplicationPackageDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GenerateApplicationPackageDownloadUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::GenerateApplicationPackageDownloadUrlOutcomeCallable TemClient::GenerateApplicationPackageDownloadUrlCallable(const GenerateApplicationPackageDownloadUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GenerateApplicationPackageDownloadUrlOutcome()>>(
        [this, request]()
        {
            return this->GenerateApplicationPackageDownloadUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::ModifyApplicationInfoOutcome TemClient::ModifyApplicationInfo(const ModifyApplicationInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationInfoResponse rsp = ModifyApplicationInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationInfoOutcome(rsp);
        else
            return ModifyApplicationInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationInfoOutcome(outcome.GetError());
    }
}

void TemClient::ModifyApplicationInfoAsync(const ModifyApplicationInfoRequest& request, const ModifyApplicationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApplicationInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::ModifyApplicationInfoOutcomeCallable TemClient::ModifyApplicationInfoCallable(const ModifyApplicationInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApplicationInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyApplicationInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::ModifyApplicationReplicasOutcome TemClient::ModifyApplicationReplicas(const ModifyApplicationReplicasRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationReplicas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationReplicasResponse rsp = ModifyApplicationReplicasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationReplicasOutcome(rsp);
        else
            return ModifyApplicationReplicasOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationReplicasOutcome(outcome.GetError());
    }
}

void TemClient::ModifyApplicationReplicasAsync(const ModifyApplicationReplicasRequest& request, const ModifyApplicationReplicasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApplicationReplicas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::ModifyApplicationReplicasOutcomeCallable TemClient::ModifyApplicationReplicasCallable(const ModifyApplicationReplicasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApplicationReplicasOutcome()>>(
        [this, request]()
        {
            return this->ModifyApplicationReplicas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::ModifyEnvironmentOutcome TemClient::ModifyEnvironment(const ModifyEnvironmentRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEnvironment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEnvironmentResponse rsp = ModifyEnvironmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEnvironmentOutcome(rsp);
        else
            return ModifyEnvironmentOutcome(o.GetError());
    }
    else
    {
        return ModifyEnvironmentOutcome(outcome.GetError());
    }
}

void TemClient::ModifyEnvironmentAsync(const ModifyEnvironmentRequest& request, const ModifyEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEnvironment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::ModifyEnvironmentOutcomeCallable TemClient::ModifyEnvironmentCallable(const ModifyEnvironmentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEnvironmentOutcome()>>(
        [this, request]()
        {
            return this->ModifyEnvironment(request);
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

TemClient::RestartApplicationOutcome TemClient::RestartApplication(const RestartApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "RestartApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartApplicationResponse rsp = RestartApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartApplicationOutcome(rsp);
        else
            return RestartApplicationOutcome(o.GetError());
    }
    else
    {
        return RestartApplicationOutcome(outcome.GetError());
    }
}

void TemClient::RestartApplicationAsync(const RestartApplicationRequest& request, const RestartApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::RestartApplicationOutcomeCallable TemClient::RestartApplicationCallable(const RestartApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartApplicationOutcome()>>(
        [this, request]()
        {
            return this->RestartApplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::RestartApplicationPodOutcome TemClient::RestartApplicationPod(const RestartApplicationPodRequest &request)
{
    auto outcome = MakeRequest(request, "RestartApplicationPod");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartApplicationPodResponse rsp = RestartApplicationPodResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartApplicationPodOutcome(rsp);
        else
            return RestartApplicationPodOutcome(o.GetError());
    }
    else
    {
        return RestartApplicationPodOutcome(outcome.GetError());
    }
}

void TemClient::RestartApplicationPodAsync(const RestartApplicationPodRequest& request, const RestartApplicationPodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartApplicationPod(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::RestartApplicationPodOutcomeCallable TemClient::RestartApplicationPodCallable(const RestartApplicationPodRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartApplicationPodOutcome()>>(
        [this, request]()
        {
            return this->RestartApplicationPod(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::ResumeDeployApplicationOutcome TemClient::ResumeDeployApplication(const ResumeDeployApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeDeployApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeDeployApplicationResponse rsp = ResumeDeployApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeDeployApplicationOutcome(rsp);
        else
            return ResumeDeployApplicationOutcome(o.GetError());
    }
    else
    {
        return ResumeDeployApplicationOutcome(outcome.GetError());
    }
}

void TemClient::ResumeDeployApplicationAsync(const ResumeDeployApplicationRequest& request, const ResumeDeployApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResumeDeployApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::ResumeDeployApplicationOutcomeCallable TemClient::ResumeDeployApplicationCallable(const ResumeDeployApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResumeDeployApplicationOutcome()>>(
        [this, request]()
        {
            return this->ResumeDeployApplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::RevertDeployApplicationOutcome TemClient::RevertDeployApplication(const RevertDeployApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "RevertDeployApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RevertDeployApplicationResponse rsp = RevertDeployApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RevertDeployApplicationOutcome(rsp);
        else
            return RevertDeployApplicationOutcome(o.GetError());
    }
    else
    {
        return RevertDeployApplicationOutcome(outcome.GetError());
    }
}

void TemClient::RevertDeployApplicationAsync(const RevertDeployApplicationRequest& request, const RevertDeployApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RevertDeployApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::RevertDeployApplicationOutcomeCallable TemClient::RevertDeployApplicationCallable(const RevertDeployApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RevertDeployApplicationOutcome()>>(
        [this, request]()
        {
            return this->RevertDeployApplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::RollingUpdateApplicationByVersionOutcome TemClient::RollingUpdateApplicationByVersion(const RollingUpdateApplicationByVersionRequest &request)
{
    auto outcome = MakeRequest(request, "RollingUpdateApplicationByVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollingUpdateApplicationByVersionResponse rsp = RollingUpdateApplicationByVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollingUpdateApplicationByVersionOutcome(rsp);
        else
            return RollingUpdateApplicationByVersionOutcome(o.GetError());
    }
    else
    {
        return RollingUpdateApplicationByVersionOutcome(outcome.GetError());
    }
}

void TemClient::RollingUpdateApplicationByVersionAsync(const RollingUpdateApplicationByVersionRequest& request, const RollingUpdateApplicationByVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RollingUpdateApplicationByVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::RollingUpdateApplicationByVersionOutcomeCallable TemClient::RollingUpdateApplicationByVersionCallable(const RollingUpdateApplicationByVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RollingUpdateApplicationByVersionOutcome()>>(
        [this, request]()
        {
            return this->RollingUpdateApplicationByVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::StopApplicationOutcome TemClient::StopApplication(const StopApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "StopApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopApplicationResponse rsp = StopApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopApplicationOutcome(rsp);
        else
            return StopApplicationOutcome(o.GetError());
    }
    else
    {
        return StopApplicationOutcome(outcome.GetError());
    }
}

void TemClient::StopApplicationAsync(const StopApplicationRequest& request, const StopApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::StopApplicationOutcomeCallable TemClient::StopApplicationCallable(const StopApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopApplicationOutcome()>>(
        [this, request]()
        {
            return this->StopApplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

