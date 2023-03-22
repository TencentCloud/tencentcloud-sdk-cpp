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

#include <tencentcloud/omics/v20221128/OmicsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Omics::V20221128;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-11-28";
    const string ENDPOINT = "omics.tencentcloudapi.com";
}

OmicsClient::OmicsClient(const Credential &credential, const string &region) :
    OmicsClient(credential, region, ClientProfile())
{
}

OmicsClient::OmicsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


OmicsClient::DescribeRunGroupsOutcome OmicsClient::DescribeRunGroups(const DescribeRunGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRunGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRunGroupsResponse rsp = DescribeRunGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRunGroupsOutcome(rsp);
        else
            return DescribeRunGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeRunGroupsOutcome(outcome.GetError());
    }
}

void OmicsClient::DescribeRunGroupsAsync(const DescribeRunGroupsRequest& request, const DescribeRunGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRunGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OmicsClient::DescribeRunGroupsOutcomeCallable OmicsClient::DescribeRunGroupsCallable(const DescribeRunGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRunGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRunGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OmicsClient::DescribeRunsOutcome OmicsClient::DescribeRuns(const DescribeRunsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRunsResponse rsp = DescribeRunsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRunsOutcome(rsp);
        else
            return DescribeRunsOutcome(o.GetError());
    }
    else
    {
        return DescribeRunsOutcome(outcome.GetError());
    }
}

void OmicsClient::DescribeRunsAsync(const DescribeRunsRequest& request, const DescribeRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuns(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OmicsClient::DescribeRunsOutcomeCallable OmicsClient::DescribeRunsCallable(const DescribeRunsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRunsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuns(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OmicsClient::GetRunCallsOutcome OmicsClient::GetRunCalls(const GetRunCallsRequest &request)
{
    auto outcome = MakeRequest(request, "GetRunCalls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRunCallsResponse rsp = GetRunCallsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRunCallsOutcome(rsp);
        else
            return GetRunCallsOutcome(o.GetError());
    }
    else
    {
        return GetRunCallsOutcome(outcome.GetError());
    }
}

void OmicsClient::GetRunCallsAsync(const GetRunCallsRequest& request, const GetRunCallsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRunCalls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OmicsClient::GetRunCallsOutcomeCallable OmicsClient::GetRunCallsCallable(const GetRunCallsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRunCallsOutcome()>>(
        [this, request]()
        {
            return this->GetRunCalls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OmicsClient::GetRunStatusOutcome OmicsClient::GetRunStatus(const GetRunStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetRunStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRunStatusResponse rsp = GetRunStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRunStatusOutcome(rsp);
        else
            return GetRunStatusOutcome(o.GetError());
    }
    else
    {
        return GetRunStatusOutcome(outcome.GetError());
    }
}

void OmicsClient::GetRunStatusAsync(const GetRunStatusRequest& request, const GetRunStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRunStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OmicsClient::GetRunStatusOutcomeCallable OmicsClient::GetRunStatusCallable(const GetRunStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRunStatusOutcome()>>(
        [this, request]()
        {
            return this->GetRunStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OmicsClient::ImportTableFileOutcome OmicsClient::ImportTableFile(const ImportTableFileRequest &request)
{
    auto outcome = MakeRequest(request, "ImportTableFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportTableFileResponse rsp = ImportTableFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportTableFileOutcome(rsp);
        else
            return ImportTableFileOutcome(o.GetError());
    }
    else
    {
        return ImportTableFileOutcome(outcome.GetError());
    }
}

void OmicsClient::ImportTableFileAsync(const ImportTableFileRequest& request, const ImportTableFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportTableFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OmicsClient::ImportTableFileOutcomeCallable OmicsClient::ImportTableFileCallable(const ImportTableFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportTableFileOutcome()>>(
        [this, request]()
        {
            return this->ImportTableFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OmicsClient::RunApplicationOutcome OmicsClient::RunApplication(const RunApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "RunApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunApplicationResponse rsp = RunApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunApplicationOutcome(rsp);
        else
            return RunApplicationOutcome(o.GetError());
    }
    else
    {
        return RunApplicationOutcome(outcome.GetError());
    }
}

void OmicsClient::RunApplicationAsync(const RunApplicationRequest& request, const RunApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OmicsClient::RunApplicationOutcomeCallable OmicsClient::RunApplicationCallable(const RunApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunApplicationOutcome()>>(
        [this, request]()
        {
            return this->RunApplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

