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

#include <tencentcloud/lighthouse/v20200324/LighthouseClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Lighthouse::V20200324;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-03-24";
    const string ENDPOINT = "lighthouse.tencentcloudapi.com";
}

LighthouseClient::LighthouseClient(const Credential &credential, const string &region) :
    LighthouseClient(credential, region, ClientProfile())
{
}

LighthouseClient::LighthouseClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


LighthouseClient::CreateFirewallRulesOutcome LighthouseClient::CreateFirewallRules(const CreateFirewallRulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFirewallRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFirewallRulesResponse rsp = CreateFirewallRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFirewallRulesOutcome(rsp);
        else
            return CreateFirewallRulesOutcome(o.GetError());
    }
    else
    {
        return CreateFirewallRulesOutcome(outcome.GetError());
    }
}

void LighthouseClient::CreateFirewallRulesAsync(const CreateFirewallRulesRequest& request, const CreateFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFirewallRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::CreateFirewallRulesOutcomeCallable LighthouseClient::CreateFirewallRulesCallable(const CreateFirewallRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFirewallRulesOutcome()>>(
        [this, request]()
        {
            return this->CreateFirewallRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DeleteFirewallRulesOutcome LighthouseClient::DeleteFirewallRules(const DeleteFirewallRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFirewallRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFirewallRulesResponse rsp = DeleteFirewallRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFirewallRulesOutcome(rsp);
        else
            return DeleteFirewallRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteFirewallRulesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DeleteFirewallRulesAsync(const DeleteFirewallRulesRequest& request, const DeleteFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteFirewallRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DeleteFirewallRulesOutcomeCallable LighthouseClient::DeleteFirewallRulesCallable(const DeleteFirewallRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteFirewallRulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteFirewallRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeBlueprintsOutcome LighthouseClient::DescribeBlueprints(const DescribeBlueprintsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBlueprints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBlueprintsResponse rsp = DescribeBlueprintsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBlueprintsOutcome(rsp);
        else
            return DescribeBlueprintsOutcome(o.GetError());
    }
    else
    {
        return DescribeBlueprintsOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeBlueprintsAsync(const DescribeBlueprintsRequest& request, const DescribeBlueprintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBlueprints(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeBlueprintsOutcomeCallable LighthouseClient::DescribeBlueprintsCallable(const DescribeBlueprintsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBlueprintsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBlueprints(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeBundlesOutcome LighthouseClient::DescribeBundles(const DescribeBundlesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBundles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBundlesResponse rsp = DescribeBundlesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBundlesOutcome(rsp);
        else
            return DescribeBundlesOutcome(o.GetError());
    }
    else
    {
        return DescribeBundlesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeBundlesAsync(const DescribeBundlesRequest& request, const DescribeBundlesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBundles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeBundlesOutcomeCallable LighthouseClient::DescribeBundlesCallable(const DescribeBundlesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBundlesOutcome()>>(
        [this, request]()
        {
            return this->DescribeBundles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeFirewallRulesOutcome LighthouseClient::DescribeFirewallRules(const DescribeFirewallRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFirewallRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFirewallRulesResponse rsp = DescribeFirewallRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFirewallRulesOutcome(rsp);
        else
            return DescribeFirewallRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeFirewallRulesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeFirewallRulesAsync(const DescribeFirewallRulesRequest& request, const DescribeFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFirewallRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeFirewallRulesOutcomeCallable LighthouseClient::DescribeFirewallRulesCallable(const DescribeFirewallRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFirewallRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeFirewallRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::DescribeInstancesOutcome LighthouseClient::DescribeInstances(const DescribeInstancesRequest &request)
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

void LighthouseClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeInstancesOutcomeCallable LighthouseClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
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

LighthouseClient::DescribeInstancesTrafficPackagesOutcome LighthouseClient::DescribeInstancesTrafficPackages(const DescribeInstancesTrafficPackagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesTrafficPackages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesTrafficPackagesResponse rsp = DescribeInstancesTrafficPackagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesTrafficPackagesOutcome(rsp);
        else
            return DescribeInstancesTrafficPackagesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesTrafficPackagesOutcome(outcome.GetError());
    }
}

void LighthouseClient::DescribeInstancesTrafficPackagesAsync(const DescribeInstancesTrafficPackagesRequest& request, const DescribeInstancesTrafficPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancesTrafficPackages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::DescribeInstancesTrafficPackagesOutcomeCallable LighthouseClient::DescribeInstancesTrafficPackagesCallable(const DescribeInstancesTrafficPackagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesTrafficPackagesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancesTrafficPackages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::RebootInstancesOutcome LighthouseClient::RebootInstances(const RebootInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RebootInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RebootInstancesResponse rsp = RebootInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RebootInstancesOutcome(rsp);
        else
            return RebootInstancesOutcome(o.GetError());
    }
    else
    {
        return RebootInstancesOutcome(outcome.GetError());
    }
}

void LighthouseClient::RebootInstancesAsync(const RebootInstancesRequest& request, const RebootInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RebootInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::RebootInstancesOutcomeCallable LighthouseClient::RebootInstancesCallable(const RebootInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RebootInstancesOutcome()>>(
        [this, request]()
        {
            return this->RebootInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::ResetInstanceOutcome LighthouseClient::ResetInstance(const ResetInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ResetInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetInstanceResponse rsp = ResetInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetInstanceOutcome(rsp);
        else
            return ResetInstanceOutcome(o.GetError());
    }
    else
    {
        return ResetInstanceOutcome(outcome.GetError());
    }
}

void LighthouseClient::ResetInstanceAsync(const ResetInstanceRequest& request, const ResetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::ResetInstanceOutcomeCallable LighthouseClient::ResetInstanceCallable(const ResetInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetInstanceOutcome()>>(
        [this, request]()
        {
            return this->ResetInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::StartInstancesOutcome LighthouseClient::StartInstances(const StartInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "StartInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartInstancesResponse rsp = StartInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartInstancesOutcome(rsp);
        else
            return StartInstancesOutcome(o.GetError());
    }
    else
    {
        return StartInstancesOutcome(outcome.GetError());
    }
}

void LighthouseClient::StartInstancesAsync(const StartInstancesRequest& request, const StartInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::StartInstancesOutcomeCallable LighthouseClient::StartInstancesCallable(const StartInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartInstancesOutcome()>>(
        [this, request]()
        {
            return this->StartInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LighthouseClient::StopInstancesOutcome LighthouseClient::StopInstances(const StopInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "StopInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopInstancesResponse rsp = StopInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopInstancesOutcome(rsp);
        else
            return StopInstancesOutcome(o.GetError());
    }
    else
    {
        return StopInstancesOutcome(outcome.GetError());
    }
}

void LighthouseClient::StopInstancesAsync(const StopInstancesRequest& request, const StopInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LighthouseClient::StopInstancesOutcomeCallable LighthouseClient::StopInstancesCallable(const StopInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopInstancesOutcome()>>(
        [this, request]()
        {
            return this->StopInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

