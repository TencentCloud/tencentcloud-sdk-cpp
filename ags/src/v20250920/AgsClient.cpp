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

#include <tencentcloud/ags/v20250920/AgsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ags::V20250920;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

namespace
{
    const string VERSION = "2025-09-20";
    const string ENDPOINT = "ags.tencentcloudapi.com";
}

AgsClient::AgsClient(const Credential &credential, const string &region) :
    AgsClient(credential, region, ClientProfile())
{
}

AgsClient::AgsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AgsClient::AcquireSandboxInstanceTokenOutcome AgsClient::AcquireSandboxInstanceToken(const AcquireSandboxInstanceTokenRequest &request)
{
    auto outcome = MakeRequest(request, "AcquireSandboxInstanceToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AcquireSandboxInstanceTokenResponse rsp = AcquireSandboxInstanceTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AcquireSandboxInstanceTokenOutcome(rsp);
        else
            return AcquireSandboxInstanceTokenOutcome(o.GetError());
    }
    else
    {
        return AcquireSandboxInstanceTokenOutcome(outcome.GetError());
    }
}

void AgsClient::AcquireSandboxInstanceTokenAsync(const AcquireSandboxInstanceTokenRequest& request, const AcquireSandboxInstanceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AcquireSandboxInstanceToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AgsClient::AcquireSandboxInstanceTokenOutcomeCallable AgsClient::AcquireSandboxInstanceTokenCallable(const AcquireSandboxInstanceTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AcquireSandboxInstanceTokenOutcome()>>(
        [this, request]()
        {
            return this->AcquireSandboxInstanceToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AgsClient::CreateAPIKeyOutcome AgsClient::CreateAPIKey(const CreateAPIKeyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAPIKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAPIKeyResponse rsp = CreateAPIKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAPIKeyOutcome(rsp);
        else
            return CreateAPIKeyOutcome(o.GetError());
    }
    else
    {
        return CreateAPIKeyOutcome(outcome.GetError());
    }
}

void AgsClient::CreateAPIKeyAsync(const CreateAPIKeyRequest& request, const CreateAPIKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAPIKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AgsClient::CreateAPIKeyOutcomeCallable AgsClient::CreateAPIKeyCallable(const CreateAPIKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAPIKeyOutcome()>>(
        [this, request]()
        {
            return this->CreateAPIKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AgsClient::CreateSandboxToolOutcome AgsClient::CreateSandboxTool(const CreateSandboxToolRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSandboxTool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSandboxToolResponse rsp = CreateSandboxToolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSandboxToolOutcome(rsp);
        else
            return CreateSandboxToolOutcome(o.GetError());
    }
    else
    {
        return CreateSandboxToolOutcome(outcome.GetError());
    }
}

void AgsClient::CreateSandboxToolAsync(const CreateSandboxToolRequest& request, const CreateSandboxToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSandboxTool(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AgsClient::CreateSandboxToolOutcomeCallable AgsClient::CreateSandboxToolCallable(const CreateSandboxToolRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSandboxToolOutcome()>>(
        [this, request]()
        {
            return this->CreateSandboxTool(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AgsClient::DeleteAPIKeyOutcome AgsClient::DeleteAPIKey(const DeleteAPIKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAPIKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAPIKeyResponse rsp = DeleteAPIKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAPIKeyOutcome(rsp);
        else
            return DeleteAPIKeyOutcome(o.GetError());
    }
    else
    {
        return DeleteAPIKeyOutcome(outcome.GetError());
    }
}

void AgsClient::DeleteAPIKeyAsync(const DeleteAPIKeyRequest& request, const DeleteAPIKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAPIKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AgsClient::DeleteAPIKeyOutcomeCallable AgsClient::DeleteAPIKeyCallable(const DeleteAPIKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAPIKeyOutcome()>>(
        [this, request]()
        {
            return this->DeleteAPIKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AgsClient::DeleteSandboxToolOutcome AgsClient::DeleteSandboxTool(const DeleteSandboxToolRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSandboxTool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSandboxToolResponse rsp = DeleteSandboxToolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSandboxToolOutcome(rsp);
        else
            return DeleteSandboxToolOutcome(o.GetError());
    }
    else
    {
        return DeleteSandboxToolOutcome(outcome.GetError());
    }
}

void AgsClient::DeleteSandboxToolAsync(const DeleteSandboxToolRequest& request, const DeleteSandboxToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSandboxTool(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AgsClient::DeleteSandboxToolOutcomeCallable AgsClient::DeleteSandboxToolCallable(const DeleteSandboxToolRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSandboxToolOutcome()>>(
        [this, request]()
        {
            return this->DeleteSandboxTool(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AgsClient::DescribeAPIKeyListOutcome AgsClient::DescribeAPIKeyList(const DescribeAPIKeyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAPIKeyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAPIKeyListResponse rsp = DescribeAPIKeyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAPIKeyListOutcome(rsp);
        else
            return DescribeAPIKeyListOutcome(o.GetError());
    }
    else
    {
        return DescribeAPIKeyListOutcome(outcome.GetError());
    }
}

void AgsClient::DescribeAPIKeyListAsync(const DescribeAPIKeyListRequest& request, const DescribeAPIKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAPIKeyList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AgsClient::DescribeAPIKeyListOutcomeCallable AgsClient::DescribeAPIKeyListCallable(const DescribeAPIKeyListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAPIKeyListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAPIKeyList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AgsClient::DescribeSandboxInstanceListOutcome AgsClient::DescribeSandboxInstanceList(const DescribeSandboxInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSandboxInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSandboxInstanceListResponse rsp = DescribeSandboxInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSandboxInstanceListOutcome(rsp);
        else
            return DescribeSandboxInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeSandboxInstanceListOutcome(outcome.GetError());
    }
}

void AgsClient::DescribeSandboxInstanceListAsync(const DescribeSandboxInstanceListRequest& request, const DescribeSandboxInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSandboxInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AgsClient::DescribeSandboxInstanceListOutcomeCallable AgsClient::DescribeSandboxInstanceListCallable(const DescribeSandboxInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSandboxInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSandboxInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AgsClient::DescribeSandboxToolListOutcome AgsClient::DescribeSandboxToolList(const DescribeSandboxToolListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSandboxToolList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSandboxToolListResponse rsp = DescribeSandboxToolListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSandboxToolListOutcome(rsp);
        else
            return DescribeSandboxToolListOutcome(o.GetError());
    }
    else
    {
        return DescribeSandboxToolListOutcome(outcome.GetError());
    }
}

void AgsClient::DescribeSandboxToolListAsync(const DescribeSandboxToolListRequest& request, const DescribeSandboxToolListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSandboxToolList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AgsClient::DescribeSandboxToolListOutcomeCallable AgsClient::DescribeSandboxToolListCallable(const DescribeSandboxToolListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSandboxToolListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSandboxToolList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AgsClient::StartSandboxInstanceOutcome AgsClient::StartSandboxInstance(const StartSandboxInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "StartSandboxInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartSandboxInstanceResponse rsp = StartSandboxInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartSandboxInstanceOutcome(rsp);
        else
            return StartSandboxInstanceOutcome(o.GetError());
    }
    else
    {
        return StartSandboxInstanceOutcome(outcome.GetError());
    }
}

void AgsClient::StartSandboxInstanceAsync(const StartSandboxInstanceRequest& request, const StartSandboxInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartSandboxInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AgsClient::StartSandboxInstanceOutcomeCallable AgsClient::StartSandboxInstanceCallable(const StartSandboxInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartSandboxInstanceOutcome()>>(
        [this, request]()
        {
            return this->StartSandboxInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AgsClient::StopSandboxInstanceOutcome AgsClient::StopSandboxInstance(const StopSandboxInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "StopSandboxInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopSandboxInstanceResponse rsp = StopSandboxInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopSandboxInstanceOutcome(rsp);
        else
            return StopSandboxInstanceOutcome(o.GetError());
    }
    else
    {
        return StopSandboxInstanceOutcome(outcome.GetError());
    }
}

void AgsClient::StopSandboxInstanceAsync(const StopSandboxInstanceRequest& request, const StopSandboxInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopSandboxInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AgsClient::StopSandboxInstanceOutcomeCallable AgsClient::StopSandboxInstanceCallable(const StopSandboxInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopSandboxInstanceOutcome()>>(
        [this, request]()
        {
            return this->StopSandboxInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AgsClient::UpdateSandboxInstanceOutcome AgsClient::UpdateSandboxInstance(const UpdateSandboxInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateSandboxInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateSandboxInstanceResponse rsp = UpdateSandboxInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateSandboxInstanceOutcome(rsp);
        else
            return UpdateSandboxInstanceOutcome(o.GetError());
    }
    else
    {
        return UpdateSandboxInstanceOutcome(outcome.GetError());
    }
}

void AgsClient::UpdateSandboxInstanceAsync(const UpdateSandboxInstanceRequest& request, const UpdateSandboxInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateSandboxInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AgsClient::UpdateSandboxInstanceOutcomeCallable AgsClient::UpdateSandboxInstanceCallable(const UpdateSandboxInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateSandboxInstanceOutcome()>>(
        [this, request]()
        {
            return this->UpdateSandboxInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AgsClient::UpdateSandboxToolOutcome AgsClient::UpdateSandboxTool(const UpdateSandboxToolRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateSandboxTool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateSandboxToolResponse rsp = UpdateSandboxToolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateSandboxToolOutcome(rsp);
        else
            return UpdateSandboxToolOutcome(o.GetError());
    }
    else
    {
        return UpdateSandboxToolOutcome(outcome.GetError());
    }
}

void AgsClient::UpdateSandboxToolAsync(const UpdateSandboxToolRequest& request, const UpdateSandboxToolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateSandboxTool(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AgsClient::UpdateSandboxToolOutcomeCallable AgsClient::UpdateSandboxToolCallable(const UpdateSandboxToolRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateSandboxToolOutcome()>>(
        [this, request]()
        {
            return this->UpdateSandboxTool(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

