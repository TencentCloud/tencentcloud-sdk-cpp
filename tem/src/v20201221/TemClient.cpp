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

