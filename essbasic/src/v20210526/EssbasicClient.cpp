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

#include <tencentcloud/essbasic/v20210526/EssbasicClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Essbasic::V20210526;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-05-26";
    const string ENDPOINT = "essbasic.tencentcloudapi.com";
}

EssbasicClient::EssbasicClient(const Credential &credential, const string &region) :
    EssbasicClient(credential, region, ClientProfile())
{
}

EssbasicClient::EssbasicClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EssbasicClient::CreateConsoleLoginUrlOutcome EssbasicClient::CreateConsoleLoginUrl(const CreateConsoleLoginUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConsoleLoginUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConsoleLoginUrlResponse rsp = CreateConsoleLoginUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConsoleLoginUrlOutcome(rsp);
        else
            return CreateConsoleLoginUrlOutcome(o.GetError());
    }
    else
    {
        return CreateConsoleLoginUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateConsoleLoginUrlAsync(const CreateConsoleLoginUrlRequest& request, const CreateConsoleLoginUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateConsoleLoginUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateConsoleLoginUrlOutcomeCallable EssbasicClient::CreateConsoleLoginUrlCallable(const CreateConsoleLoginUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateConsoleLoginUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateConsoleLoginUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::CreateFlowsByTemplatesOutcome EssbasicClient::CreateFlowsByTemplates(const CreateFlowsByTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowsByTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowsByTemplatesResponse rsp = CreateFlowsByTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowsByTemplatesOutcome(rsp);
        else
            return CreateFlowsByTemplatesOutcome(o.GetError());
    }
    else
    {
        return CreateFlowsByTemplatesOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateFlowsByTemplatesAsync(const CreateFlowsByTemplatesRequest& request, const CreateFlowsByTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlowsByTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateFlowsByTemplatesOutcomeCallable EssbasicClient::CreateFlowsByTemplatesCallable(const CreateFlowsByTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlowsByTemplatesOutcome()>>(
        [this, request]()
        {
            return this->CreateFlowsByTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::CreateSignUrlsOutcome EssbasicClient::CreateSignUrls(const CreateSignUrlsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSignUrls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSignUrlsResponse rsp = CreateSignUrlsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSignUrlsOutcome(rsp);
        else
            return CreateSignUrlsOutcome(o.GetError());
    }
    else
    {
        return CreateSignUrlsOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateSignUrlsAsync(const CreateSignUrlsRequest& request, const CreateSignUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSignUrls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateSignUrlsOutcomeCallable EssbasicClient::CreateSignUrlsCallable(const CreateSignUrlsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSignUrlsOutcome()>>(
        [this, request]()
        {
            return this->CreateSignUrls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::DescribeResourceUrlsByFlowsOutcome EssbasicClient::DescribeResourceUrlsByFlows(const DescribeResourceUrlsByFlowsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceUrlsByFlows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceUrlsByFlowsResponse rsp = DescribeResourceUrlsByFlowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceUrlsByFlowsOutcome(rsp);
        else
            return DescribeResourceUrlsByFlowsOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceUrlsByFlowsOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeResourceUrlsByFlowsAsync(const DescribeResourceUrlsByFlowsRequest& request, const DescribeResourceUrlsByFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceUrlsByFlows(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeResourceUrlsByFlowsOutcomeCallable EssbasicClient::DescribeResourceUrlsByFlowsCallable(const DescribeResourceUrlsByFlowsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceUrlsByFlowsOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceUrlsByFlows(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::DescribeTemplatesOutcome EssbasicClient::DescribeTemplates(const DescribeTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTemplatesResponse rsp = DescribeTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTemplatesOutcome(rsp);
        else
            return DescribeTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeTemplatesOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeTemplatesAsync(const DescribeTemplatesRequest& request, const DescribeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeTemplatesOutcomeCallable EssbasicClient::DescribeTemplatesCallable(const DescribeTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::DescribeUsageOutcome EssbasicClient::DescribeUsage(const DescribeUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsageResponse rsp = DescribeUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsageOutcome(rsp);
        else
            return DescribeUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeUsageOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeUsageAsync(const DescribeUsageRequest& request, const DescribeUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeUsageOutcomeCallable EssbasicClient::DescribeUsageCallable(const DescribeUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::PrepareFlowsOutcome EssbasicClient::PrepareFlows(const PrepareFlowsRequest &request)
{
    auto outcome = MakeRequest(request, "PrepareFlows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PrepareFlowsResponse rsp = PrepareFlowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PrepareFlowsOutcome(rsp);
        else
            return PrepareFlowsOutcome(o.GetError());
    }
    else
    {
        return PrepareFlowsOutcome(outcome.GetError());
    }
}

void EssbasicClient::PrepareFlowsAsync(const PrepareFlowsRequest& request, const PrepareFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PrepareFlows(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::PrepareFlowsOutcomeCallable EssbasicClient::PrepareFlowsCallable(const PrepareFlowsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PrepareFlowsOutcome()>>(
        [this, request]()
        {
            return this->PrepareFlows(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::SyncProxyOrganizationOutcome EssbasicClient::SyncProxyOrganization(const SyncProxyOrganizationRequest &request)
{
    auto outcome = MakeRequest(request, "SyncProxyOrganization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncProxyOrganizationResponse rsp = SyncProxyOrganizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncProxyOrganizationOutcome(rsp);
        else
            return SyncProxyOrganizationOutcome(o.GetError());
    }
    else
    {
        return SyncProxyOrganizationOutcome(outcome.GetError());
    }
}

void EssbasicClient::SyncProxyOrganizationAsync(const SyncProxyOrganizationRequest& request, const SyncProxyOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SyncProxyOrganization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::SyncProxyOrganizationOutcomeCallable EssbasicClient::SyncProxyOrganizationCallable(const SyncProxyOrganizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SyncProxyOrganizationOutcome()>>(
        [this, request]()
        {
            return this->SyncProxyOrganization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EssbasicClient::SyncProxyOrganizationOperatorsOutcome EssbasicClient::SyncProxyOrganizationOperators(const SyncProxyOrganizationOperatorsRequest &request)
{
    auto outcome = MakeRequest(request, "SyncProxyOrganizationOperators");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncProxyOrganizationOperatorsResponse rsp = SyncProxyOrganizationOperatorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncProxyOrganizationOperatorsOutcome(rsp);
        else
            return SyncProxyOrganizationOperatorsOutcome(o.GetError());
    }
    else
    {
        return SyncProxyOrganizationOperatorsOutcome(outcome.GetError());
    }
}

void EssbasicClient::SyncProxyOrganizationOperatorsAsync(const SyncProxyOrganizationOperatorsRequest& request, const SyncProxyOrganizationOperatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SyncProxyOrganizationOperators(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::SyncProxyOrganizationOperatorsOutcomeCallable EssbasicClient::SyncProxyOrganizationOperatorsCallable(const SyncProxyOrganizationOperatorsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SyncProxyOrganizationOperatorsOutcome()>>(
        [this, request]()
        {
            return this->SyncProxyOrganizationOperators(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

