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

#include <tencentcloud/cloudstudio/v20230508/CloudstudioClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cloudstudio::V20230508;
using namespace TencentCloud::Cloudstudio::V20230508::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-05-08";
    const string ENDPOINT = "cloudstudio.tencentcloudapi.com";
}

CloudstudioClient::CloudstudioClient(const Credential &credential, const string &region) :
    CloudstudioClient(credential, region, ClientProfile())
{
}

CloudstudioClient::CloudstudioClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CloudstudioClient::CreateWorkspaceOutcome CloudstudioClient::CreateWorkspace(const CreateWorkspaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkspace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkspaceResponse rsp = CreateWorkspaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkspaceOutcome(rsp);
        else
            return CreateWorkspaceOutcome(o.GetError());
    }
    else
    {
        return CreateWorkspaceOutcome(outcome.GetError());
    }
}

void CloudstudioClient::CreateWorkspaceAsync(const CreateWorkspaceRequest& request, const CreateWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWorkspace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::CreateWorkspaceOutcomeCallable CloudstudioClient::CreateWorkspaceCallable(const CreateWorkspaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWorkspaceOutcome()>>(
        [this, request]()
        {
            return this->CreateWorkspace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::CreateWorkspaceTokenOutcome CloudstudioClient::CreateWorkspaceToken(const CreateWorkspaceTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkspaceToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkspaceTokenResponse rsp = CreateWorkspaceTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkspaceTokenOutcome(rsp);
        else
            return CreateWorkspaceTokenOutcome(o.GetError());
    }
    else
    {
        return CreateWorkspaceTokenOutcome(outcome.GetError());
    }
}

void CloudstudioClient::CreateWorkspaceTokenAsync(const CreateWorkspaceTokenRequest& request, const CreateWorkspaceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWorkspaceToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::CreateWorkspaceTokenOutcomeCallable CloudstudioClient::CreateWorkspaceTokenCallable(const CreateWorkspaceTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWorkspaceTokenOutcome()>>(
        [this, request]()
        {
            return this->CreateWorkspaceToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::DescribeConfigOutcome CloudstudioClient::DescribeConfig(const DescribeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigResponse rsp = DescribeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigOutcome(rsp);
        else
            return DescribeConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigOutcome(outcome.GetError());
    }
}

void CloudstudioClient::DescribeConfigAsync(const DescribeConfigRequest& request, const DescribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::DescribeConfigOutcomeCallable CloudstudioClient::DescribeConfigCallable(const DescribeConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::DescribeImagesOutcome CloudstudioClient::DescribeImages(const DescribeImagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImagesResponse rsp = DescribeImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImagesOutcome(rsp);
        else
            return DescribeImagesOutcome(o.GetError());
    }
    else
    {
        return DescribeImagesOutcome(outcome.GetError());
    }
}

void CloudstudioClient::DescribeImagesAsync(const DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::DescribeImagesOutcomeCallable CloudstudioClient::DescribeImagesCallable(const DescribeImagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImagesOutcome()>>(
        [this, request]()
        {
            return this->DescribeImages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::DescribeWorkspacesOutcome CloudstudioClient::DescribeWorkspaces(const DescribeWorkspacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkspaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkspacesResponse rsp = DescribeWorkspacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkspacesOutcome(rsp);
        else
            return DescribeWorkspacesOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkspacesOutcome(outcome.GetError());
    }
}

void CloudstudioClient::DescribeWorkspacesAsync(const DescribeWorkspacesRequest& request, const DescribeWorkspacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkspaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::DescribeWorkspacesOutcomeCallable CloudstudioClient::DescribeWorkspacesCallable(const DescribeWorkspacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkspacesOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkspaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::ModifyWorkspaceOutcome CloudstudioClient::ModifyWorkspace(const ModifyWorkspaceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWorkspace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWorkspaceResponse rsp = ModifyWorkspaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWorkspaceOutcome(rsp);
        else
            return ModifyWorkspaceOutcome(o.GetError());
    }
    else
    {
        return ModifyWorkspaceOutcome(outcome.GetError());
    }
}

void CloudstudioClient::ModifyWorkspaceAsync(const ModifyWorkspaceRequest& request, const ModifyWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWorkspace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::ModifyWorkspaceOutcomeCallable CloudstudioClient::ModifyWorkspaceCallable(const ModifyWorkspaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWorkspaceOutcome()>>(
        [this, request]()
        {
            return this->ModifyWorkspace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::RemoveWorkspaceOutcome CloudstudioClient::RemoveWorkspace(const RemoveWorkspaceRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveWorkspace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveWorkspaceResponse rsp = RemoveWorkspaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveWorkspaceOutcome(rsp);
        else
            return RemoveWorkspaceOutcome(o.GetError());
    }
    else
    {
        return RemoveWorkspaceOutcome(outcome.GetError());
    }
}

void CloudstudioClient::RemoveWorkspaceAsync(const RemoveWorkspaceRequest& request, const RemoveWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveWorkspace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::RemoveWorkspaceOutcomeCallable CloudstudioClient::RemoveWorkspaceCallable(const RemoveWorkspaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveWorkspaceOutcome()>>(
        [this, request]()
        {
            return this->RemoveWorkspace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::RunWorkspaceOutcome CloudstudioClient::RunWorkspace(const RunWorkspaceRequest &request)
{
    auto outcome = MakeRequest(request, "RunWorkspace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunWorkspaceResponse rsp = RunWorkspaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunWorkspaceOutcome(rsp);
        else
            return RunWorkspaceOutcome(o.GetError());
    }
    else
    {
        return RunWorkspaceOutcome(outcome.GetError());
    }
}

void CloudstudioClient::RunWorkspaceAsync(const RunWorkspaceRequest& request, const RunWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunWorkspace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::RunWorkspaceOutcomeCallable CloudstudioClient::RunWorkspaceCallable(const RunWorkspaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunWorkspaceOutcome()>>(
        [this, request]()
        {
            return this->RunWorkspace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudstudioClient::StopWorkspaceOutcome CloudstudioClient::StopWorkspace(const StopWorkspaceRequest &request)
{
    auto outcome = MakeRequest(request, "StopWorkspace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopWorkspaceResponse rsp = StopWorkspaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopWorkspaceOutcome(rsp);
        else
            return StopWorkspaceOutcome(o.GetError());
    }
    else
    {
        return StopWorkspaceOutcome(outcome.GetError());
    }
}

void CloudstudioClient::StopWorkspaceAsync(const StopWorkspaceRequest& request, const StopWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopWorkspace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudstudioClient::StopWorkspaceOutcomeCallable CloudstudioClient::StopWorkspaceCallable(const StopWorkspaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopWorkspaceOutcome()>>(
        [this, request]()
        {
            return this->StopWorkspace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

