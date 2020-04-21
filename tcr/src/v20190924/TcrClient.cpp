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

#include <tencentcloud/tcr/v20190924/TcrClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tcr::V20190924;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-09-24";
    const string ENDPOINT = "tcr.tencentcloudapi.com";
}

TcrClient::TcrClient(const Credential &credential, const string &region) :
    TcrClient(credential, region, ClientProfile())
{
}

TcrClient::TcrClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TcrClient::BatchDeleteImagePersonalOutcome TcrClient::BatchDeleteImagePersonal(const BatchDeleteImagePersonalRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeleteImagePersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeleteImagePersonalResponse rsp = BatchDeleteImagePersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeleteImagePersonalOutcome(rsp);
        else
            return BatchDeleteImagePersonalOutcome(o.GetError());
    }
    else
    {
        return BatchDeleteImagePersonalOutcome(outcome.GetError());
    }
}

void TcrClient::BatchDeleteImagePersonalAsync(const BatchDeleteImagePersonalRequest& request, const BatchDeleteImagePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchDeleteImagePersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::BatchDeleteImagePersonalOutcomeCallable TcrClient::BatchDeleteImagePersonalCallable(const BatchDeleteImagePersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchDeleteImagePersonalOutcome()>>(
        [this, request]()
        {
            return this->BatchDeleteImagePersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::BatchDeleteRepositoryPersonalOutcome TcrClient::BatchDeleteRepositoryPersonal(const BatchDeleteRepositoryPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeleteRepositoryPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeleteRepositoryPersonalResponse rsp = BatchDeleteRepositoryPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeleteRepositoryPersonalOutcome(rsp);
        else
            return BatchDeleteRepositoryPersonalOutcome(o.GetError());
    }
    else
    {
        return BatchDeleteRepositoryPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::BatchDeleteRepositoryPersonalAsync(const BatchDeleteRepositoryPersonalRequest& request, const BatchDeleteRepositoryPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchDeleteRepositoryPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::BatchDeleteRepositoryPersonalOutcomeCallable TcrClient::BatchDeleteRepositoryPersonalCallable(const BatchDeleteRepositoryPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchDeleteRepositoryPersonalOutcome()>>(
        [this, request]()
        {
            return this->BatchDeleteRepositoryPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateApplicationTriggerPersonalOutcome TcrClient::CreateApplicationTriggerPersonal(const CreateApplicationTriggerPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplicationTriggerPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationTriggerPersonalResponse rsp = CreateApplicationTriggerPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationTriggerPersonalOutcome(rsp);
        else
            return CreateApplicationTriggerPersonalOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationTriggerPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::CreateApplicationTriggerPersonalAsync(const CreateApplicationTriggerPersonalRequest& request, const CreateApplicationTriggerPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApplicationTriggerPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateApplicationTriggerPersonalOutcomeCallable TcrClient::CreateApplicationTriggerPersonalCallable(const CreateApplicationTriggerPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateApplicationTriggerPersonalOutcome()>>(
        [this, request]()
        {
            return this->CreateApplicationTriggerPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateImageLifecyclePersonalOutcome TcrClient::CreateImageLifecyclePersonal(const CreateImageLifecyclePersonalRequest &request)
{
    auto outcome = MakeRequest(request, "CreateImageLifecyclePersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateImageLifecyclePersonalResponse rsp = CreateImageLifecyclePersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateImageLifecyclePersonalOutcome(rsp);
        else
            return CreateImageLifecyclePersonalOutcome(o.GetError());
    }
    else
    {
        return CreateImageLifecyclePersonalOutcome(outcome.GetError());
    }
}

void TcrClient::CreateImageLifecyclePersonalAsync(const CreateImageLifecyclePersonalRequest& request, const CreateImageLifecyclePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateImageLifecyclePersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateImageLifecyclePersonalOutcomeCallable TcrClient::CreateImageLifecyclePersonalCallable(const CreateImageLifecyclePersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateImageLifecyclePersonalOutcome()>>(
        [this, request]()
        {
            return this->CreateImageLifecyclePersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateInstanceOutcome TcrClient::CreateInstance(const CreateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceResponse rsp = CreateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceOutcome(rsp);
        else
            return CreateInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceOutcome(outcome.GetError());
    }
}

void TcrClient::CreateInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateInstanceOutcomeCallable TcrClient::CreateInstanceCallable(const CreateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateInstanceTokenOutcome TcrClient::CreateInstanceToken(const CreateInstanceTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstanceToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceTokenResponse rsp = CreateInstanceTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceTokenOutcome(rsp);
        else
            return CreateInstanceTokenOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceTokenOutcome(outcome.GetError());
    }
}

void TcrClient::CreateInstanceTokenAsync(const CreateInstanceTokenRequest& request, const CreateInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstanceToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateInstanceTokenOutcomeCallable TcrClient::CreateInstanceTokenCallable(const CreateInstanceTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInstanceTokenOutcome()>>(
        [this, request]()
        {
            return this->CreateInstanceToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateNamespaceOutcome TcrClient::CreateNamespace(const CreateNamespaceRequest &request)
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

void TcrClient::CreateNamespaceAsync(const CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNamespace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateNamespaceOutcomeCallable TcrClient::CreateNamespaceCallable(const CreateNamespaceRequest &request)
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

TcrClient::CreateNamespacePersonalOutcome TcrClient::CreateNamespacePersonal(const CreateNamespacePersonalRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNamespacePersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNamespacePersonalResponse rsp = CreateNamespacePersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNamespacePersonalOutcome(rsp);
        else
            return CreateNamespacePersonalOutcome(o.GetError());
    }
    else
    {
        return CreateNamespacePersonalOutcome(outcome.GetError());
    }
}

void TcrClient::CreateNamespacePersonalAsync(const CreateNamespacePersonalRequest& request, const CreateNamespacePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNamespacePersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateNamespacePersonalOutcomeCallable TcrClient::CreateNamespacePersonalCallable(const CreateNamespacePersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNamespacePersonalOutcome()>>(
        [this, request]()
        {
            return this->CreateNamespacePersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateRepositoryOutcome TcrClient::CreateRepository(const CreateRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRepositoryResponse rsp = CreateRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRepositoryOutcome(rsp);
        else
            return CreateRepositoryOutcome(o.GetError());
    }
    else
    {
        return CreateRepositoryOutcome(outcome.GetError());
    }
}

void TcrClient::CreateRepositoryAsync(const CreateRepositoryRequest& request, const CreateRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRepository(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateRepositoryOutcomeCallable TcrClient::CreateRepositoryCallable(const CreateRepositoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRepositoryOutcome()>>(
        [this, request]()
        {
            return this->CreateRepository(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateRepositoryPersonalOutcome TcrClient::CreateRepositoryPersonal(const CreateRepositoryPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRepositoryPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRepositoryPersonalResponse rsp = CreateRepositoryPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRepositoryPersonalOutcome(rsp);
        else
            return CreateRepositoryPersonalOutcome(o.GetError());
    }
    else
    {
        return CreateRepositoryPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::CreateRepositoryPersonalAsync(const CreateRepositoryPersonalRequest& request, const CreateRepositoryPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRepositoryPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateRepositoryPersonalOutcomeCallable TcrClient::CreateRepositoryPersonalCallable(const CreateRepositoryPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRepositoryPersonalOutcome()>>(
        [this, request]()
        {
            return this->CreateRepositoryPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateUserPersonalOutcome TcrClient::CreateUserPersonal(const CreateUserPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserPersonalResponse rsp = CreateUserPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserPersonalOutcome(rsp);
        else
            return CreateUserPersonalOutcome(o.GetError());
    }
    else
    {
        return CreateUserPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::CreateUserPersonalAsync(const CreateUserPersonalRequest& request, const CreateUserPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUserPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateUserPersonalOutcomeCallable TcrClient::CreateUserPersonalCallable(const CreateUserPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserPersonalOutcome()>>(
        [this, request]()
        {
            return this->CreateUserPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::CreateWebhookTriggerOutcome TcrClient::CreateWebhookTrigger(const CreateWebhookTriggerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWebhookTrigger");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWebhookTriggerResponse rsp = CreateWebhookTriggerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWebhookTriggerOutcome(rsp);
        else
            return CreateWebhookTriggerOutcome(o.GetError());
    }
    else
    {
        return CreateWebhookTriggerOutcome(outcome.GetError());
    }
}

void TcrClient::CreateWebhookTriggerAsync(const CreateWebhookTriggerRequest& request, const CreateWebhookTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWebhookTrigger(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::CreateWebhookTriggerOutcomeCallable TcrClient::CreateWebhookTriggerCallable(const CreateWebhookTriggerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWebhookTriggerOutcome()>>(
        [this, request]()
        {
            return this->CreateWebhookTrigger(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteApplicationTriggerPersonalOutcome TcrClient::DeleteApplicationTriggerPersonal(const DeleteApplicationTriggerPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApplicationTriggerPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApplicationTriggerPersonalResponse rsp = DeleteApplicationTriggerPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApplicationTriggerPersonalOutcome(rsp);
        else
            return DeleteApplicationTriggerPersonalOutcome(o.GetError());
    }
    else
    {
        return DeleteApplicationTriggerPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteApplicationTriggerPersonalAsync(const DeleteApplicationTriggerPersonalRequest& request, const DeleteApplicationTriggerPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteApplicationTriggerPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteApplicationTriggerPersonalOutcomeCallable TcrClient::DeleteApplicationTriggerPersonalCallable(const DeleteApplicationTriggerPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteApplicationTriggerPersonalOutcome()>>(
        [this, request]()
        {
            return this->DeleteApplicationTriggerPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteImageLifecycleGlobalPersonalOutcome TcrClient::DeleteImageLifecycleGlobalPersonal(const DeleteImageLifecycleGlobalPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteImageLifecycleGlobalPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteImageLifecycleGlobalPersonalResponse rsp = DeleteImageLifecycleGlobalPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteImageLifecycleGlobalPersonalOutcome(rsp);
        else
            return DeleteImageLifecycleGlobalPersonalOutcome(o.GetError());
    }
    else
    {
        return DeleteImageLifecycleGlobalPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteImageLifecycleGlobalPersonalAsync(const DeleteImageLifecycleGlobalPersonalRequest& request, const DeleteImageLifecycleGlobalPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteImageLifecycleGlobalPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteImageLifecycleGlobalPersonalOutcomeCallable TcrClient::DeleteImageLifecycleGlobalPersonalCallable(const DeleteImageLifecycleGlobalPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteImageLifecycleGlobalPersonalOutcome()>>(
        [this, request]()
        {
            return this->DeleteImageLifecycleGlobalPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteImageLifecyclePersonalOutcome TcrClient::DeleteImageLifecyclePersonal(const DeleteImageLifecyclePersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteImageLifecyclePersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteImageLifecyclePersonalResponse rsp = DeleteImageLifecyclePersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteImageLifecyclePersonalOutcome(rsp);
        else
            return DeleteImageLifecyclePersonalOutcome(o.GetError());
    }
    else
    {
        return DeleteImageLifecyclePersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteImageLifecyclePersonalAsync(const DeleteImageLifecyclePersonalRequest& request, const DeleteImageLifecyclePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteImageLifecyclePersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteImageLifecyclePersonalOutcomeCallable TcrClient::DeleteImageLifecyclePersonalCallable(const DeleteImageLifecyclePersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteImageLifecyclePersonalOutcome()>>(
        [this, request]()
        {
            return this->DeleteImageLifecyclePersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteImagePersonalOutcome TcrClient::DeleteImagePersonal(const DeleteImagePersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteImagePersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteImagePersonalResponse rsp = DeleteImagePersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteImagePersonalOutcome(rsp);
        else
            return DeleteImagePersonalOutcome(o.GetError());
    }
    else
    {
        return DeleteImagePersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteImagePersonalAsync(const DeleteImagePersonalRequest& request, const DeleteImagePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteImagePersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteImagePersonalOutcomeCallable TcrClient::DeleteImagePersonalCallable(const DeleteImagePersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteImagePersonalOutcome()>>(
        [this, request]()
        {
            return this->DeleteImagePersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteInstanceTokenOutcome TcrClient::DeleteInstanceToken(const DeleteInstanceTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInstanceToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInstanceTokenResponse rsp = DeleteInstanceTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInstanceTokenOutcome(rsp);
        else
            return DeleteInstanceTokenOutcome(o.GetError());
    }
    else
    {
        return DeleteInstanceTokenOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteInstanceTokenAsync(const DeleteInstanceTokenRequest& request, const DeleteInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteInstanceToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteInstanceTokenOutcomeCallable TcrClient::DeleteInstanceTokenCallable(const DeleteInstanceTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteInstanceTokenOutcome()>>(
        [this, request]()
        {
            return this->DeleteInstanceToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteNamespaceOutcome TcrClient::DeleteNamespace(const DeleteNamespaceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNamespace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNamespaceResponse rsp = DeleteNamespaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNamespaceOutcome(rsp);
        else
            return DeleteNamespaceOutcome(o.GetError());
    }
    else
    {
        return DeleteNamespaceOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteNamespaceAsync(const DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNamespace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteNamespaceOutcomeCallable TcrClient::DeleteNamespaceCallable(const DeleteNamespaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNamespaceOutcome()>>(
        [this, request]()
        {
            return this->DeleteNamespace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteNamespacePersonalOutcome TcrClient::DeleteNamespacePersonal(const DeleteNamespacePersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNamespacePersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNamespacePersonalResponse rsp = DeleteNamespacePersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNamespacePersonalOutcome(rsp);
        else
            return DeleteNamespacePersonalOutcome(o.GetError());
    }
    else
    {
        return DeleteNamespacePersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteNamespacePersonalAsync(const DeleteNamespacePersonalRequest& request, const DeleteNamespacePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNamespacePersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteNamespacePersonalOutcomeCallable TcrClient::DeleteNamespacePersonalCallable(const DeleteNamespacePersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNamespacePersonalOutcome()>>(
        [this, request]()
        {
            return this->DeleteNamespacePersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteRepositoryOutcome TcrClient::DeleteRepository(const DeleteRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRepositoryResponse rsp = DeleteRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRepositoryOutcome(rsp);
        else
            return DeleteRepositoryOutcome(o.GetError());
    }
    else
    {
        return DeleteRepositoryOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteRepositoryAsync(const DeleteRepositoryRequest& request, const DeleteRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRepository(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteRepositoryOutcomeCallable TcrClient::DeleteRepositoryCallable(const DeleteRepositoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRepositoryOutcome()>>(
        [this, request]()
        {
            return this->DeleteRepository(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteRepositoryPersonalOutcome TcrClient::DeleteRepositoryPersonal(const DeleteRepositoryPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRepositoryPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRepositoryPersonalResponse rsp = DeleteRepositoryPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRepositoryPersonalOutcome(rsp);
        else
            return DeleteRepositoryPersonalOutcome(o.GetError());
    }
    else
    {
        return DeleteRepositoryPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteRepositoryPersonalAsync(const DeleteRepositoryPersonalRequest& request, const DeleteRepositoryPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRepositoryPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteRepositoryPersonalOutcomeCallable TcrClient::DeleteRepositoryPersonalCallable(const DeleteRepositoryPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRepositoryPersonalOutcome()>>(
        [this, request]()
        {
            return this->DeleteRepositoryPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DeleteWebhookTriggerOutcome TcrClient::DeleteWebhookTrigger(const DeleteWebhookTriggerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWebhookTrigger");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWebhookTriggerResponse rsp = DeleteWebhookTriggerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWebhookTriggerOutcome(rsp);
        else
            return DeleteWebhookTriggerOutcome(o.GetError());
    }
    else
    {
        return DeleteWebhookTriggerOutcome(outcome.GetError());
    }
}

void TcrClient::DeleteWebhookTriggerAsync(const DeleteWebhookTriggerRequest& request, const DeleteWebhookTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWebhookTrigger(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DeleteWebhookTriggerOutcomeCallable TcrClient::DeleteWebhookTriggerCallable(const DeleteWebhookTriggerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWebhookTriggerOutcome()>>(
        [this, request]()
        {
            return this->DeleteWebhookTrigger(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeApplicationTriggerLogPersonalOutcome TcrClient::DescribeApplicationTriggerLogPersonal(const DescribeApplicationTriggerLogPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationTriggerLogPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationTriggerLogPersonalResponse rsp = DescribeApplicationTriggerLogPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationTriggerLogPersonalOutcome(rsp);
        else
            return DescribeApplicationTriggerLogPersonalOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationTriggerLogPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeApplicationTriggerLogPersonalAsync(const DescribeApplicationTriggerLogPersonalRequest& request, const DescribeApplicationTriggerLogPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplicationTriggerLogPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeApplicationTriggerLogPersonalOutcomeCallable TcrClient::DescribeApplicationTriggerLogPersonalCallable(const DescribeApplicationTriggerLogPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationTriggerLogPersonalOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplicationTriggerLogPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeApplicationTriggerPersonalOutcome TcrClient::DescribeApplicationTriggerPersonal(const DescribeApplicationTriggerPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationTriggerPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationTriggerPersonalResponse rsp = DescribeApplicationTriggerPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationTriggerPersonalOutcome(rsp);
        else
            return DescribeApplicationTriggerPersonalOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationTriggerPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeApplicationTriggerPersonalAsync(const DescribeApplicationTriggerPersonalRequest& request, const DescribeApplicationTriggerPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplicationTriggerPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeApplicationTriggerPersonalOutcomeCallable TcrClient::DescribeApplicationTriggerPersonalCallable(const DescribeApplicationTriggerPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationTriggerPersonalOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplicationTriggerPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeFavorRepositoryPersonalOutcome TcrClient::DescribeFavorRepositoryPersonal(const DescribeFavorRepositoryPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFavorRepositoryPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFavorRepositoryPersonalResponse rsp = DescribeFavorRepositoryPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFavorRepositoryPersonalOutcome(rsp);
        else
            return DescribeFavorRepositoryPersonalOutcome(o.GetError());
    }
    else
    {
        return DescribeFavorRepositoryPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeFavorRepositoryPersonalAsync(const DescribeFavorRepositoryPersonalRequest& request, const DescribeFavorRepositoryPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFavorRepositoryPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeFavorRepositoryPersonalOutcomeCallable TcrClient::DescribeFavorRepositoryPersonalCallable(const DescribeFavorRepositoryPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFavorRepositoryPersonalOutcome()>>(
        [this, request]()
        {
            return this->DescribeFavorRepositoryPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeImageFilterPersonalOutcome TcrClient::DescribeImageFilterPersonal(const DescribeImageFilterPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageFilterPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageFilterPersonalResponse rsp = DescribeImageFilterPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageFilterPersonalOutcome(rsp);
        else
            return DescribeImageFilterPersonalOutcome(o.GetError());
    }
    else
    {
        return DescribeImageFilterPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeImageFilterPersonalAsync(const DescribeImageFilterPersonalRequest& request, const DescribeImageFilterPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageFilterPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeImageFilterPersonalOutcomeCallable TcrClient::DescribeImageFilterPersonalCallable(const DescribeImageFilterPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageFilterPersonalOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageFilterPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeImageLifecycleGlobalPersonalOutcome TcrClient::DescribeImageLifecycleGlobalPersonal(const DescribeImageLifecycleGlobalPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageLifecycleGlobalPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageLifecycleGlobalPersonalResponse rsp = DescribeImageLifecycleGlobalPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageLifecycleGlobalPersonalOutcome(rsp);
        else
            return DescribeImageLifecycleGlobalPersonalOutcome(o.GetError());
    }
    else
    {
        return DescribeImageLifecycleGlobalPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeImageLifecycleGlobalPersonalAsync(const DescribeImageLifecycleGlobalPersonalRequest& request, const DescribeImageLifecycleGlobalPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageLifecycleGlobalPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeImageLifecycleGlobalPersonalOutcomeCallable TcrClient::DescribeImageLifecycleGlobalPersonalCallable(const DescribeImageLifecycleGlobalPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageLifecycleGlobalPersonalOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageLifecycleGlobalPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeImageLifecyclePersonalOutcome TcrClient::DescribeImageLifecyclePersonal(const DescribeImageLifecyclePersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageLifecyclePersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageLifecyclePersonalResponse rsp = DescribeImageLifecyclePersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageLifecyclePersonalOutcome(rsp);
        else
            return DescribeImageLifecyclePersonalOutcome(o.GetError());
    }
    else
    {
        return DescribeImageLifecyclePersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeImageLifecyclePersonalAsync(const DescribeImageLifecyclePersonalRequest& request, const DescribeImageLifecyclePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageLifecyclePersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeImageLifecyclePersonalOutcomeCallable TcrClient::DescribeImageLifecyclePersonalCallable(const DescribeImageLifecyclePersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageLifecyclePersonalOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageLifecyclePersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeImageManifestsOutcome TcrClient::DescribeImageManifests(const DescribeImageManifestsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageManifests");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageManifestsResponse rsp = DescribeImageManifestsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageManifestsOutcome(rsp);
        else
            return DescribeImageManifestsOutcome(o.GetError());
    }
    else
    {
        return DescribeImageManifestsOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeImageManifestsAsync(const DescribeImageManifestsRequest& request, const DescribeImageManifestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageManifests(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeImageManifestsOutcomeCallable TcrClient::DescribeImageManifestsCallable(const DescribeImageManifestsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageManifestsOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageManifests(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeImagePersonalOutcome TcrClient::DescribeImagePersonal(const DescribeImagePersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImagePersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImagePersonalResponse rsp = DescribeImagePersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImagePersonalOutcome(rsp);
        else
            return DescribeImagePersonalOutcome(o.GetError());
    }
    else
    {
        return DescribeImagePersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeImagePersonalAsync(const DescribeImagePersonalRequest& request, const DescribeImagePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImagePersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeImagePersonalOutcomeCallable TcrClient::DescribeImagePersonalCallable(const DescribeImagePersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImagePersonalOutcome()>>(
        [this, request]()
        {
            return this->DescribeImagePersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeImagesOutcome TcrClient::DescribeImages(const DescribeImagesRequest &request)
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

void TcrClient::DescribeImagesAsync(const DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeImagesOutcomeCallable TcrClient::DescribeImagesCallable(const DescribeImagesRequest &request)
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

TcrClient::DescribeInstanceStatusOutcome TcrClient::DescribeInstanceStatus(const DescribeInstanceStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceStatusResponse rsp = DescribeInstanceStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceStatusOutcome(rsp);
        else
            return DescribeInstanceStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceStatusOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeInstanceStatusAsync(const DescribeInstanceStatusRequest& request, const DescribeInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeInstanceStatusOutcomeCallable TcrClient::DescribeInstanceStatusCallable(const DescribeInstanceStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeInstanceTokenOutcome TcrClient::DescribeInstanceToken(const DescribeInstanceTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceTokenResponse rsp = DescribeInstanceTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceTokenOutcome(rsp);
        else
            return DescribeInstanceTokenOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceTokenOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeInstanceTokenAsync(const DescribeInstanceTokenRequest& request, const DescribeInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeInstanceTokenOutcomeCallable TcrClient::DescribeInstanceTokenCallable(const DescribeInstanceTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceTokenOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeInstancesOutcome TcrClient::DescribeInstances(const DescribeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesResponse rsp = DescribeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesOutcome(rsp);
        else
            return DescribeInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeInstancesOutcomeCallable TcrClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeNamespacePersonalOutcome TcrClient::DescribeNamespacePersonal(const DescribeNamespacePersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNamespacePersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNamespacePersonalResponse rsp = DescribeNamespacePersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNamespacePersonalOutcome(rsp);
        else
            return DescribeNamespacePersonalOutcome(o.GetError());
    }
    else
    {
        return DescribeNamespacePersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeNamespacePersonalAsync(const DescribeNamespacePersonalRequest& request, const DescribeNamespacePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNamespacePersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeNamespacePersonalOutcomeCallable TcrClient::DescribeNamespacePersonalCallable(const DescribeNamespacePersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNamespacePersonalOutcome()>>(
        [this, request]()
        {
            return this->DescribeNamespacePersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeNamespacesOutcome TcrClient::DescribeNamespaces(const DescribeNamespacesRequest &request)
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

void TcrClient::DescribeNamespacesAsync(const DescribeNamespacesRequest& request, const DescribeNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNamespaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeNamespacesOutcomeCallable TcrClient::DescribeNamespacesCallable(const DescribeNamespacesRequest &request)
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

TcrClient::DescribeRepositoriesOutcome TcrClient::DescribeRepositories(const DescribeRepositoriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRepositories");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRepositoriesResponse rsp = DescribeRepositoriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRepositoriesOutcome(rsp);
        else
            return DescribeRepositoriesOutcome(o.GetError());
    }
    else
    {
        return DescribeRepositoriesOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeRepositoriesAsync(const DescribeRepositoriesRequest& request, const DescribeRepositoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRepositories(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeRepositoriesOutcomeCallable TcrClient::DescribeRepositoriesCallable(const DescribeRepositoriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRepositoriesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRepositories(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeRepositoryFilterPersonalOutcome TcrClient::DescribeRepositoryFilterPersonal(const DescribeRepositoryFilterPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRepositoryFilterPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRepositoryFilterPersonalResponse rsp = DescribeRepositoryFilterPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRepositoryFilterPersonalOutcome(rsp);
        else
            return DescribeRepositoryFilterPersonalOutcome(o.GetError());
    }
    else
    {
        return DescribeRepositoryFilterPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeRepositoryFilterPersonalAsync(const DescribeRepositoryFilterPersonalRequest& request, const DescribeRepositoryFilterPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRepositoryFilterPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeRepositoryFilterPersonalOutcomeCallable TcrClient::DescribeRepositoryFilterPersonalCallable(const DescribeRepositoryFilterPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRepositoryFilterPersonalOutcome()>>(
        [this, request]()
        {
            return this->DescribeRepositoryFilterPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeRepositoryOwnerPersonalOutcome TcrClient::DescribeRepositoryOwnerPersonal(const DescribeRepositoryOwnerPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRepositoryOwnerPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRepositoryOwnerPersonalResponse rsp = DescribeRepositoryOwnerPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRepositoryOwnerPersonalOutcome(rsp);
        else
            return DescribeRepositoryOwnerPersonalOutcome(o.GetError());
    }
    else
    {
        return DescribeRepositoryOwnerPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeRepositoryOwnerPersonalAsync(const DescribeRepositoryOwnerPersonalRequest& request, const DescribeRepositoryOwnerPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRepositoryOwnerPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeRepositoryOwnerPersonalOutcomeCallable TcrClient::DescribeRepositoryOwnerPersonalCallable(const DescribeRepositoryOwnerPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRepositoryOwnerPersonalOutcome()>>(
        [this, request]()
        {
            return this->DescribeRepositoryOwnerPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeRepositoryPersonalOutcome TcrClient::DescribeRepositoryPersonal(const DescribeRepositoryPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRepositoryPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRepositoryPersonalResponse rsp = DescribeRepositoryPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRepositoryPersonalOutcome(rsp);
        else
            return DescribeRepositoryPersonalOutcome(o.GetError());
    }
    else
    {
        return DescribeRepositoryPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeRepositoryPersonalAsync(const DescribeRepositoryPersonalRequest& request, const DescribeRepositoryPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRepositoryPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeRepositoryPersonalOutcomeCallable TcrClient::DescribeRepositoryPersonalCallable(const DescribeRepositoryPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRepositoryPersonalOutcome()>>(
        [this, request]()
        {
            return this->DescribeRepositoryPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeUserQuotaPersonalOutcome TcrClient::DescribeUserQuotaPersonal(const DescribeUserQuotaPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserQuotaPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserQuotaPersonalResponse rsp = DescribeUserQuotaPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserQuotaPersonalOutcome(rsp);
        else
            return DescribeUserQuotaPersonalOutcome(o.GetError());
    }
    else
    {
        return DescribeUserQuotaPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeUserQuotaPersonalAsync(const DescribeUserQuotaPersonalRequest& request, const DescribeUserQuotaPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserQuotaPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeUserQuotaPersonalOutcomeCallable TcrClient::DescribeUserQuotaPersonalCallable(const DescribeUserQuotaPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserQuotaPersonalOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserQuotaPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeWebhookTriggerOutcome TcrClient::DescribeWebhookTrigger(const DescribeWebhookTriggerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebhookTrigger");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebhookTriggerResponse rsp = DescribeWebhookTriggerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebhookTriggerOutcome(rsp);
        else
            return DescribeWebhookTriggerOutcome(o.GetError());
    }
    else
    {
        return DescribeWebhookTriggerOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeWebhookTriggerAsync(const DescribeWebhookTriggerRequest& request, const DescribeWebhookTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebhookTrigger(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeWebhookTriggerOutcomeCallable TcrClient::DescribeWebhookTriggerCallable(const DescribeWebhookTriggerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebhookTriggerOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebhookTrigger(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DescribeWebhookTriggerLogOutcome TcrClient::DescribeWebhookTriggerLog(const DescribeWebhookTriggerLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebhookTriggerLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebhookTriggerLogResponse rsp = DescribeWebhookTriggerLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebhookTriggerLogOutcome(rsp);
        else
            return DescribeWebhookTriggerLogOutcome(o.GetError());
    }
    else
    {
        return DescribeWebhookTriggerLogOutcome(outcome.GetError());
    }
}

void TcrClient::DescribeWebhookTriggerLogAsync(const DescribeWebhookTriggerLogRequest& request, const DescribeWebhookTriggerLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebhookTriggerLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DescribeWebhookTriggerLogOutcomeCallable TcrClient::DescribeWebhookTriggerLogCallable(const DescribeWebhookTriggerLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebhookTriggerLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebhookTriggerLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::DuplicateImagePersonalOutcome TcrClient::DuplicateImagePersonal(const DuplicateImagePersonalRequest &request)
{
    auto outcome = MakeRequest(request, "DuplicateImagePersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DuplicateImagePersonalResponse rsp = DuplicateImagePersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DuplicateImagePersonalOutcome(rsp);
        else
            return DuplicateImagePersonalOutcome(o.GetError());
    }
    else
    {
        return DuplicateImagePersonalOutcome(outcome.GetError());
    }
}

void TcrClient::DuplicateImagePersonalAsync(const DuplicateImagePersonalRequest& request, const DuplicateImagePersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DuplicateImagePersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::DuplicateImagePersonalOutcomeCallable TcrClient::DuplicateImagePersonalCallable(const DuplicateImagePersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DuplicateImagePersonalOutcome()>>(
        [this, request]()
        {
            return this->DuplicateImagePersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ManageImageLifecycleGlobalPersonalOutcome TcrClient::ManageImageLifecycleGlobalPersonal(const ManageImageLifecycleGlobalPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "ManageImageLifecycleGlobalPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ManageImageLifecycleGlobalPersonalResponse rsp = ManageImageLifecycleGlobalPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ManageImageLifecycleGlobalPersonalOutcome(rsp);
        else
            return ManageImageLifecycleGlobalPersonalOutcome(o.GetError());
    }
    else
    {
        return ManageImageLifecycleGlobalPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::ManageImageLifecycleGlobalPersonalAsync(const ManageImageLifecycleGlobalPersonalRequest& request, const ManageImageLifecycleGlobalPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ManageImageLifecycleGlobalPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ManageImageLifecycleGlobalPersonalOutcomeCallable TcrClient::ManageImageLifecycleGlobalPersonalCallable(const ManageImageLifecycleGlobalPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ManageImageLifecycleGlobalPersonalOutcome()>>(
        [this, request]()
        {
            return this->ManageImageLifecycleGlobalPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ModifyApplicationTriggerPersonalOutcome TcrClient::ModifyApplicationTriggerPersonal(const ModifyApplicationTriggerPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationTriggerPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationTriggerPersonalResponse rsp = ModifyApplicationTriggerPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationTriggerPersonalOutcome(rsp);
        else
            return ModifyApplicationTriggerPersonalOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationTriggerPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyApplicationTriggerPersonalAsync(const ModifyApplicationTriggerPersonalRequest& request, const ModifyApplicationTriggerPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApplicationTriggerPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ModifyApplicationTriggerPersonalOutcomeCallable TcrClient::ModifyApplicationTriggerPersonalCallable(const ModifyApplicationTriggerPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApplicationTriggerPersonalOutcome()>>(
        [this, request]()
        {
            return this->ModifyApplicationTriggerPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ModifyInstanceTokenOutcome TcrClient::ModifyInstanceToken(const ModifyInstanceTokenRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceTokenResponse rsp = ModifyInstanceTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceTokenOutcome(rsp);
        else
            return ModifyInstanceTokenOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceTokenOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyInstanceTokenAsync(const ModifyInstanceTokenRequest& request, const ModifyInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ModifyInstanceTokenOutcomeCallable TcrClient::ModifyInstanceTokenCallable(const ModifyInstanceTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceTokenOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstanceToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ModifyNamespaceOutcome TcrClient::ModifyNamespace(const ModifyNamespaceRequest &request)
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

void TcrClient::ModifyNamespaceAsync(const ModifyNamespaceRequest& request, const ModifyNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNamespace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ModifyNamespaceOutcomeCallable TcrClient::ModifyNamespaceCallable(const ModifyNamespaceRequest &request)
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

TcrClient::ModifyRepositoryOutcome TcrClient::ModifyRepository(const ModifyRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRepositoryResponse rsp = ModifyRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRepositoryOutcome(rsp);
        else
            return ModifyRepositoryOutcome(o.GetError());
    }
    else
    {
        return ModifyRepositoryOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyRepositoryAsync(const ModifyRepositoryRequest& request, const ModifyRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRepository(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ModifyRepositoryOutcomeCallable TcrClient::ModifyRepositoryCallable(const ModifyRepositoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRepositoryOutcome()>>(
        [this, request]()
        {
            return this->ModifyRepository(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ModifyRepositoryAccessPersonalOutcome TcrClient::ModifyRepositoryAccessPersonal(const ModifyRepositoryAccessPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRepositoryAccessPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRepositoryAccessPersonalResponse rsp = ModifyRepositoryAccessPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRepositoryAccessPersonalOutcome(rsp);
        else
            return ModifyRepositoryAccessPersonalOutcome(o.GetError());
    }
    else
    {
        return ModifyRepositoryAccessPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyRepositoryAccessPersonalAsync(const ModifyRepositoryAccessPersonalRequest& request, const ModifyRepositoryAccessPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRepositoryAccessPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ModifyRepositoryAccessPersonalOutcomeCallable TcrClient::ModifyRepositoryAccessPersonalCallable(const ModifyRepositoryAccessPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRepositoryAccessPersonalOutcome()>>(
        [this, request]()
        {
            return this->ModifyRepositoryAccessPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ModifyRepositoryInfoPersonalOutcome TcrClient::ModifyRepositoryInfoPersonal(const ModifyRepositoryInfoPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRepositoryInfoPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRepositoryInfoPersonalResponse rsp = ModifyRepositoryInfoPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRepositoryInfoPersonalOutcome(rsp);
        else
            return ModifyRepositoryInfoPersonalOutcome(o.GetError());
    }
    else
    {
        return ModifyRepositoryInfoPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyRepositoryInfoPersonalAsync(const ModifyRepositoryInfoPersonalRequest& request, const ModifyRepositoryInfoPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRepositoryInfoPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ModifyRepositoryInfoPersonalOutcomeCallable TcrClient::ModifyRepositoryInfoPersonalCallable(const ModifyRepositoryInfoPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRepositoryInfoPersonalOutcome()>>(
        [this, request]()
        {
            return this->ModifyRepositoryInfoPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ModifyUserPasswordPersonalOutcome TcrClient::ModifyUserPasswordPersonal(const ModifyUserPasswordPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserPasswordPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserPasswordPersonalResponse rsp = ModifyUserPasswordPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserPasswordPersonalOutcome(rsp);
        else
            return ModifyUserPasswordPersonalOutcome(o.GetError());
    }
    else
    {
        return ModifyUserPasswordPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyUserPasswordPersonalAsync(const ModifyUserPasswordPersonalRequest& request, const ModifyUserPasswordPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUserPasswordPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ModifyUserPasswordPersonalOutcomeCallable TcrClient::ModifyUserPasswordPersonalCallable(const ModifyUserPasswordPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserPasswordPersonalOutcome()>>(
        [this, request]()
        {
            return this->ModifyUserPasswordPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ModifyWebhookTriggerOutcome TcrClient::ModifyWebhookTrigger(const ModifyWebhookTriggerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWebhookTrigger");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWebhookTriggerResponse rsp = ModifyWebhookTriggerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWebhookTriggerOutcome(rsp);
        else
            return ModifyWebhookTriggerOutcome(o.GetError());
    }
    else
    {
        return ModifyWebhookTriggerOutcome(outcome.GetError());
    }
}

void TcrClient::ModifyWebhookTriggerAsync(const ModifyWebhookTriggerRequest& request, const ModifyWebhookTriggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWebhookTrigger(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ModifyWebhookTriggerOutcomeCallable TcrClient::ModifyWebhookTriggerCallable(const ModifyWebhookTriggerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWebhookTriggerOutcome()>>(
        [this, request]()
        {
            return this->ModifyWebhookTrigger(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ValidateNamespaceExistPersonalOutcome TcrClient::ValidateNamespaceExistPersonal(const ValidateNamespaceExistPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "ValidateNamespaceExistPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ValidateNamespaceExistPersonalResponse rsp = ValidateNamespaceExistPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ValidateNamespaceExistPersonalOutcome(rsp);
        else
            return ValidateNamespaceExistPersonalOutcome(o.GetError());
    }
    else
    {
        return ValidateNamespaceExistPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::ValidateNamespaceExistPersonalAsync(const ValidateNamespaceExistPersonalRequest& request, const ValidateNamespaceExistPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ValidateNamespaceExistPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ValidateNamespaceExistPersonalOutcomeCallable TcrClient::ValidateNamespaceExistPersonalCallable(const ValidateNamespaceExistPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ValidateNamespaceExistPersonalOutcome()>>(
        [this, request]()
        {
            return this->ValidateNamespaceExistPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TcrClient::ValidateRepositoryExistPersonalOutcome TcrClient::ValidateRepositoryExistPersonal(const ValidateRepositoryExistPersonalRequest &request)
{
    auto outcome = MakeRequest(request, "ValidateRepositoryExistPersonal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ValidateRepositoryExistPersonalResponse rsp = ValidateRepositoryExistPersonalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ValidateRepositoryExistPersonalOutcome(rsp);
        else
            return ValidateRepositoryExistPersonalOutcome(o.GetError());
    }
    else
    {
        return ValidateRepositoryExistPersonalOutcome(outcome.GetError());
    }
}

void TcrClient::ValidateRepositoryExistPersonalAsync(const ValidateRepositoryExistPersonalRequest& request, const ValidateRepositoryExistPersonalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ValidateRepositoryExistPersonal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcrClient::ValidateRepositoryExistPersonalOutcomeCallable TcrClient::ValidateRepositoryExistPersonalCallable(const ValidateRepositoryExistPersonalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ValidateRepositoryExistPersonalOutcome()>>(
        [this, request]()
        {
            return this->ValidateRepositoryExistPersonal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

