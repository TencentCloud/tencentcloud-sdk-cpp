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

#include <tencentcloud/hai/v20230812/HaiClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Hai::V20230812;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-08-12";
    const string ENDPOINT = "hai.tencentcloudapi.com";
}

HaiClient::HaiClient(const Credential &credential, const string &region) :
    HaiClient(credential, region, ClientProfile())
{
}

HaiClient::HaiClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


HaiClient::CreateApplicationOutcome HaiClient::CreateApplication(const CreateApplicationRequest &request)
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

void HaiClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HaiClient::CreateApplicationOutcomeCallable HaiClient::CreateApplicationCallable(const CreateApplicationRequest &request)
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

HaiClient::CreateMuskPromptOutcome HaiClient::CreateMuskPrompt(const CreateMuskPromptRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMuskPrompt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMuskPromptResponse rsp = CreateMuskPromptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMuskPromptOutcome(rsp);
        else
            return CreateMuskPromptOutcome(o.GetError());
    }
    else
    {
        return CreateMuskPromptOutcome(outcome.GetError());
    }
}

void HaiClient::CreateMuskPromptAsync(const CreateMuskPromptRequest& request, const CreateMuskPromptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMuskPrompt(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HaiClient::CreateMuskPromptOutcomeCallable HaiClient::CreateMuskPromptCallable(const CreateMuskPromptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMuskPromptOutcome()>>(
        [this, request]()
        {
            return this->CreateMuskPrompt(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

HaiClient::DescribeApplicationsOutcome HaiClient::DescribeApplications(const DescribeApplicationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplications");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationsResponse rsp = DescribeApplicationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationsOutcome(rsp);
        else
            return DescribeApplicationsOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationsOutcome(outcome.GetError());
    }
}

void HaiClient::DescribeApplicationsAsync(const DescribeApplicationsRequest& request, const DescribeApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplications(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HaiClient::DescribeApplicationsOutcomeCallable HaiClient::DescribeApplicationsCallable(const DescribeApplicationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplications(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

HaiClient::DescribeInstanceNetworkStatusOutcome HaiClient::DescribeInstanceNetworkStatus(const DescribeInstanceNetworkStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceNetworkStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceNetworkStatusResponse rsp = DescribeInstanceNetworkStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceNetworkStatusOutcome(rsp);
        else
            return DescribeInstanceNetworkStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceNetworkStatusOutcome(outcome.GetError());
    }
}

void HaiClient::DescribeInstanceNetworkStatusAsync(const DescribeInstanceNetworkStatusRequest& request, const DescribeInstanceNetworkStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceNetworkStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HaiClient::DescribeInstanceNetworkStatusOutcomeCallable HaiClient::DescribeInstanceNetworkStatusCallable(const DescribeInstanceNetworkStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceNetworkStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceNetworkStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

HaiClient::DescribeInstancesOutcome HaiClient::DescribeInstances(const DescribeInstancesRequest &request)
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

void HaiClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HaiClient::DescribeInstancesOutcomeCallable HaiClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
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

HaiClient::DescribeMuskPromptsOutcome HaiClient::DescribeMuskPrompts(const DescribeMuskPromptsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMuskPrompts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMuskPromptsResponse rsp = DescribeMuskPromptsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMuskPromptsOutcome(rsp);
        else
            return DescribeMuskPromptsOutcome(o.GetError());
    }
    else
    {
        return DescribeMuskPromptsOutcome(outcome.GetError());
    }
}

void HaiClient::DescribeMuskPromptsAsync(const DescribeMuskPromptsRequest& request, const DescribeMuskPromptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMuskPrompts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HaiClient::DescribeMuskPromptsOutcomeCallable HaiClient::DescribeMuskPromptsCallable(const DescribeMuskPromptsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMuskPromptsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMuskPrompts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

HaiClient::DescribeRegionsOutcome HaiClient::DescribeRegions(const DescribeRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegionsResponse rsp = DescribeRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegionsOutcome(rsp);
        else
            return DescribeRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeRegionsOutcome(outcome.GetError());
    }
}

void HaiClient::DescribeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HaiClient::DescribeRegionsOutcomeCallable HaiClient::DescribeRegionsCallable(const DescribeRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

HaiClient::DescribeScenesOutcome HaiClient::DescribeScenes(const DescribeScenesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScenes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScenesResponse rsp = DescribeScenesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScenesOutcome(rsp);
        else
            return DescribeScenesOutcome(o.GetError());
    }
    else
    {
        return DescribeScenesOutcome(outcome.GetError());
    }
}

void HaiClient::DescribeScenesAsync(const DescribeScenesRequest& request, const DescribeScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScenes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HaiClient::DescribeScenesOutcomeCallable HaiClient::DescribeScenesCallable(const DescribeScenesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScenesOutcome()>>(
        [this, request]()
        {
            return this->DescribeScenes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

HaiClient::DescribeServiceLoginSettingsOutcome HaiClient::DescribeServiceLoginSettings(const DescribeServiceLoginSettingsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceLoginSettings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceLoginSettingsResponse rsp = DescribeServiceLoginSettingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceLoginSettingsOutcome(rsp);
        else
            return DescribeServiceLoginSettingsOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceLoginSettingsOutcome(outcome.GetError());
    }
}

void HaiClient::DescribeServiceLoginSettingsAsync(const DescribeServiceLoginSettingsRequest& request, const DescribeServiceLoginSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServiceLoginSettings(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HaiClient::DescribeServiceLoginSettingsOutcomeCallable HaiClient::DescribeServiceLoginSettingsCallable(const DescribeServiceLoginSettingsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServiceLoginSettingsOutcome()>>(
        [this, request]()
        {
            return this->DescribeServiceLoginSettings(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

HaiClient::InquirePriceRunInstancesOutcome HaiClient::InquirePriceRunInstances(const InquirePriceRunInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceRunInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceRunInstancesResponse rsp = InquirePriceRunInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceRunInstancesOutcome(rsp);
        else
            return InquirePriceRunInstancesOutcome(o.GetError());
    }
    else
    {
        return InquirePriceRunInstancesOutcome(outcome.GetError());
    }
}

void HaiClient::InquirePriceRunInstancesAsync(const InquirePriceRunInstancesRequest& request, const InquirePriceRunInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquirePriceRunInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HaiClient::InquirePriceRunInstancesOutcomeCallable HaiClient::InquirePriceRunInstancesCallable(const InquirePriceRunInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquirePriceRunInstancesOutcome()>>(
        [this, request]()
        {
            return this->InquirePriceRunInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

HaiClient::ResetInstancesPasswordOutcome HaiClient::ResetInstancesPassword(const ResetInstancesPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetInstancesPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetInstancesPasswordResponse rsp = ResetInstancesPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetInstancesPasswordOutcome(rsp);
        else
            return ResetInstancesPasswordOutcome(o.GetError());
    }
    else
    {
        return ResetInstancesPasswordOutcome(outcome.GetError());
    }
}

void HaiClient::ResetInstancesPasswordAsync(const ResetInstancesPasswordRequest& request, const ResetInstancesPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetInstancesPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HaiClient::ResetInstancesPasswordOutcomeCallable HaiClient::ResetInstancesPasswordCallable(const ResetInstancesPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetInstancesPasswordOutcome()>>(
        [this, request]()
        {
            return this->ResetInstancesPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

HaiClient::ResizeInstanceDiskOutcome HaiClient::ResizeInstanceDisk(const ResizeInstanceDiskRequest &request)
{
    auto outcome = MakeRequest(request, "ResizeInstanceDisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResizeInstanceDiskResponse rsp = ResizeInstanceDiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResizeInstanceDiskOutcome(rsp);
        else
            return ResizeInstanceDiskOutcome(o.GetError());
    }
    else
    {
        return ResizeInstanceDiskOutcome(outcome.GetError());
    }
}

void HaiClient::ResizeInstanceDiskAsync(const ResizeInstanceDiskRequest& request, const ResizeInstanceDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResizeInstanceDisk(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HaiClient::ResizeInstanceDiskOutcomeCallable HaiClient::ResizeInstanceDiskCallable(const ResizeInstanceDiskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResizeInstanceDiskOutcome()>>(
        [this, request]()
        {
            return this->ResizeInstanceDisk(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

HaiClient::RunInstancesOutcome HaiClient::RunInstances(const RunInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RunInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunInstancesResponse rsp = RunInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunInstancesOutcome(rsp);
        else
            return RunInstancesOutcome(o.GetError());
    }
    else
    {
        return RunInstancesOutcome(outcome.GetError());
    }
}

void HaiClient::RunInstancesAsync(const RunInstancesRequest& request, const RunInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HaiClient::RunInstancesOutcomeCallable HaiClient::RunInstancesCallable(const RunInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunInstancesOutcome()>>(
        [this, request]()
        {
            return this->RunInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

HaiClient::StartInstanceOutcome HaiClient::StartInstance(const StartInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "StartInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartInstanceResponse rsp = StartInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartInstanceOutcome(rsp);
        else
            return StartInstanceOutcome(o.GetError());
    }
    else
    {
        return StartInstanceOutcome(outcome.GetError());
    }
}

void HaiClient::StartInstanceAsync(const StartInstanceRequest& request, const StartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HaiClient::StartInstanceOutcomeCallable HaiClient::StartInstanceCallable(const StartInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartInstanceOutcome()>>(
        [this, request]()
        {
            return this->StartInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

HaiClient::StopInstanceOutcome HaiClient::StopInstance(const StopInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "StopInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopInstanceResponse rsp = StopInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopInstanceOutcome(rsp);
        else
            return StopInstanceOutcome(o.GetError());
    }
    else
    {
        return StopInstanceOutcome(outcome.GetError());
    }
}

void HaiClient::StopInstanceAsync(const StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HaiClient::StopInstanceOutcomeCallable HaiClient::StopInstanceCallable(const StopInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopInstanceOutcome()>>(
        [this, request]()
        {
            return this->StopInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

HaiClient::TerminateInstancesOutcome HaiClient::TerminateInstances(const TerminateInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateInstancesResponse rsp = TerminateInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateInstancesOutcome(rsp);
        else
            return TerminateInstancesOutcome(o.GetError());
    }
    else
    {
        return TerminateInstancesOutcome(outcome.GetError());
    }
}

void HaiClient::TerminateInstancesAsync(const TerminateInstancesRequest& request, const TerminateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HaiClient::TerminateInstancesOutcomeCallable HaiClient::TerminateInstancesCallable(const TerminateInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateInstancesOutcome()>>(
        [this, request]()
        {
            return this->TerminateInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

