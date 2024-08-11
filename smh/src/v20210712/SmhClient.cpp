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

#include <tencentcloud/smh/v20210712/SmhClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Smh::V20210712;
using namespace TencentCloud::Smh::V20210712::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-07-12";
    const string ENDPOINT = "smh.tencentcloudapi.com";
}

SmhClient::SmhClient(const Credential &credential, const string &region) :
    SmhClient(credential, region, ClientProfile())
{
}

SmhClient::SmhClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


SmhClient::CreateLibraryOutcome SmhClient::CreateLibrary(const CreateLibraryRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLibrary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLibraryResponse rsp = CreateLibraryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLibraryOutcome(rsp);
        else
            return CreateLibraryOutcome(o.GetError());
    }
    else
    {
        return CreateLibraryOutcome(outcome.GetError());
    }
}

void SmhClient::CreateLibraryAsync(const CreateLibraryRequest& request, const CreateLibraryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLibrary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmhClient::CreateLibraryOutcomeCallable SmhClient::CreateLibraryCallable(const CreateLibraryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLibraryOutcome()>>(
        [this, request]()
        {
            return this->CreateLibrary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmhClient::CreateUserOutcome SmhClient::CreateUser(const CreateUserRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserResponse rsp = CreateUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserOutcome(rsp);
        else
            return CreateUserOutcome(o.GetError());
    }
    else
    {
        return CreateUserOutcome(outcome.GetError());
    }
}

void SmhClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmhClient::CreateUserOutcomeCallable SmhClient::CreateUserCallable(const CreateUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserOutcome()>>(
        [this, request]()
        {
            return this->CreateUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmhClient::CreateUserLifecycleOutcome SmhClient::CreateUserLifecycle(const CreateUserLifecycleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserLifecycle");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserLifecycleResponse rsp = CreateUserLifecycleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserLifecycleOutcome(rsp);
        else
            return CreateUserLifecycleOutcome(o.GetError());
    }
    else
    {
        return CreateUserLifecycleOutcome(outcome.GetError());
    }
}

void SmhClient::CreateUserLifecycleAsync(const CreateUserLifecycleRequest& request, const CreateUserLifecycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUserLifecycle(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmhClient::CreateUserLifecycleOutcomeCallable SmhClient::CreateUserLifecycleCallable(const CreateUserLifecycleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserLifecycleOutcome()>>(
        [this, request]()
        {
            return this->CreateUserLifecycle(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmhClient::DeleteLibraryOutcome SmhClient::DeleteLibrary(const DeleteLibraryRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLibrary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLibraryResponse rsp = DeleteLibraryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLibraryOutcome(rsp);
        else
            return DeleteLibraryOutcome(o.GetError());
    }
    else
    {
        return DeleteLibraryOutcome(outcome.GetError());
    }
}

void SmhClient::DeleteLibraryAsync(const DeleteLibraryRequest& request, const DeleteLibraryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLibrary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmhClient::DeleteLibraryOutcomeCallable SmhClient::DeleteLibraryCallable(const DeleteLibraryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLibraryOutcome()>>(
        [this, request]()
        {
            return this->DeleteLibrary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmhClient::DeleteUserOutcome SmhClient::DeleteUser(const DeleteUserRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserResponse rsp = DeleteUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserOutcome(rsp);
        else
            return DeleteUserOutcome(o.GetError());
    }
    else
    {
        return DeleteUserOutcome(outcome.GetError());
    }
}

void SmhClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmhClient::DeleteUserOutcomeCallable SmhClient::DeleteUserCallable(const DeleteUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteUserOutcome()>>(
        [this, request]()
        {
            return this->DeleteUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmhClient::DescribeLibrariesOutcome SmhClient::DescribeLibraries(const DescribeLibrariesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLibraries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLibrariesResponse rsp = DescribeLibrariesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLibrariesOutcome(rsp);
        else
            return DescribeLibrariesOutcome(o.GetError());
    }
    else
    {
        return DescribeLibrariesOutcome(outcome.GetError());
    }
}

void SmhClient::DescribeLibrariesAsync(const DescribeLibrariesRequest& request, const DescribeLibrariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLibraries(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmhClient::DescribeLibrariesOutcomeCallable SmhClient::DescribeLibrariesCallable(const DescribeLibrariesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLibrariesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLibraries(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmhClient::DescribeLibrarySecretOutcome SmhClient::DescribeLibrarySecret(const DescribeLibrarySecretRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLibrarySecret");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLibrarySecretResponse rsp = DescribeLibrarySecretResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLibrarySecretOutcome(rsp);
        else
            return DescribeLibrarySecretOutcome(o.GetError());
    }
    else
    {
        return DescribeLibrarySecretOutcome(outcome.GetError());
    }
}

void SmhClient::DescribeLibrarySecretAsync(const DescribeLibrarySecretRequest& request, const DescribeLibrarySecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLibrarySecret(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmhClient::DescribeLibrarySecretOutcomeCallable SmhClient::DescribeLibrarySecretCallable(const DescribeLibrarySecretRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLibrarySecretOutcome()>>(
        [this, request]()
        {
            return this->DescribeLibrarySecret(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmhClient::DescribeOfficialInstancesOutcome SmhClient::DescribeOfficialInstances(const DescribeOfficialInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOfficialInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOfficialInstancesResponse rsp = DescribeOfficialInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOfficialInstancesOutcome(rsp);
        else
            return DescribeOfficialInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeOfficialInstancesOutcome(outcome.GetError());
    }
}

void SmhClient::DescribeOfficialInstancesAsync(const DescribeOfficialInstancesRequest& request, const DescribeOfficialInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOfficialInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmhClient::DescribeOfficialInstancesOutcomeCallable SmhClient::DescribeOfficialInstancesCallable(const DescribeOfficialInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOfficialInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeOfficialInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmhClient::DescribeOfficialOverviewOutcome SmhClient::DescribeOfficialOverview(const DescribeOfficialOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOfficialOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOfficialOverviewResponse rsp = DescribeOfficialOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOfficialOverviewOutcome(rsp);
        else
            return DescribeOfficialOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeOfficialOverviewOutcome(outcome.GetError());
    }
}

void SmhClient::DescribeOfficialOverviewAsync(const DescribeOfficialOverviewRequest& request, const DescribeOfficialOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOfficialOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmhClient::DescribeOfficialOverviewOutcomeCallable SmhClient::DescribeOfficialOverviewCallable(const DescribeOfficialOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOfficialOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeOfficialOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmhClient::DescribeTrafficPackagesOutcome SmhClient::DescribeTrafficPackages(const DescribeTrafficPackagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrafficPackages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrafficPackagesResponse rsp = DescribeTrafficPackagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrafficPackagesOutcome(rsp);
        else
            return DescribeTrafficPackagesOutcome(o.GetError());
    }
    else
    {
        return DescribeTrafficPackagesOutcome(outcome.GetError());
    }
}

void SmhClient::DescribeTrafficPackagesAsync(const DescribeTrafficPackagesRequest& request, const DescribeTrafficPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrafficPackages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmhClient::DescribeTrafficPackagesOutcomeCallable SmhClient::DescribeTrafficPackagesCallable(const DescribeTrafficPackagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrafficPackagesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrafficPackages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmhClient::DescribeUserLifecycleOutcome SmhClient::DescribeUserLifecycle(const DescribeUserLifecycleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserLifecycle");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserLifecycleResponse rsp = DescribeUserLifecycleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserLifecycleOutcome(rsp);
        else
            return DescribeUserLifecycleOutcome(o.GetError());
    }
    else
    {
        return DescribeUserLifecycleOutcome(outcome.GetError());
    }
}

void SmhClient::DescribeUserLifecycleAsync(const DescribeUserLifecycleRequest& request, const DescribeUserLifecycleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserLifecycle(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmhClient::DescribeUserLifecycleOutcomeCallable SmhClient::DescribeUserLifecycleCallable(const DescribeUserLifecycleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserLifecycleOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserLifecycle(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmhClient::ModifyLibraryOutcome SmhClient::ModifyLibrary(const ModifyLibraryRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLibrary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLibraryResponse rsp = ModifyLibraryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLibraryOutcome(rsp);
        else
            return ModifyLibraryOutcome(o.GetError());
    }
    else
    {
        return ModifyLibraryOutcome(outcome.GetError());
    }
}

void SmhClient::ModifyLibraryAsync(const ModifyLibraryRequest& request, const ModifyLibraryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLibrary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmhClient::ModifyLibraryOutcomeCallable SmhClient::ModifyLibraryCallable(const ModifyLibraryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLibraryOutcome()>>(
        [this, request]()
        {
            return this->ModifyLibrary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmhClient::ModifyUserOutcome SmhClient::ModifyUser(const ModifyUserRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserResponse rsp = ModifyUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserOutcome(rsp);
        else
            return ModifyUserOutcome(o.GetError());
    }
    else
    {
        return ModifyUserOutcome(outcome.GetError());
    }
}

void SmhClient::ModifyUserAsync(const ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmhClient::ModifyUserOutcomeCallable SmhClient::ModifyUserCallable(const ModifyUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserOutcome()>>(
        [this, request]()
        {
            return this->ModifyUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmhClient::SendSmsCodeOutcome SmhClient::SendSmsCode(const SendSmsCodeRequest &request)
{
    auto outcome = MakeRequest(request, "SendSmsCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendSmsCodeResponse rsp = SendSmsCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendSmsCodeOutcome(rsp);
        else
            return SendSmsCodeOutcome(o.GetError());
    }
    else
    {
        return SendSmsCodeOutcome(outcome.GetError());
    }
}

void SmhClient::SendSmsCodeAsync(const SendSmsCodeRequest& request, const SendSmsCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendSmsCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmhClient::SendSmsCodeOutcomeCallable SmhClient::SendSmsCodeCallable(const SendSmsCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendSmsCodeOutcome()>>(
        [this, request]()
        {
            return this->SendSmsCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SmhClient::VerifySmsCodeOutcome SmhClient::VerifySmsCode(const VerifySmsCodeRequest &request)
{
    auto outcome = MakeRequest(request, "VerifySmsCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifySmsCodeResponse rsp = VerifySmsCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifySmsCodeOutcome(rsp);
        else
            return VerifySmsCodeOutcome(o.GetError());
    }
    else
    {
        return VerifySmsCodeOutcome(outcome.GetError());
    }
}

void SmhClient::VerifySmsCodeAsync(const VerifySmsCodeRequest& request, const VerifySmsCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifySmsCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SmhClient::VerifySmsCodeOutcomeCallable SmhClient::VerifySmsCodeCallable(const VerifySmsCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifySmsCodeOutcome()>>(
        [this, request]()
        {
            return this->VerifySmsCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

