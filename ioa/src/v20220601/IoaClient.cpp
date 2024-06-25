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

#include <tencentcloud/ioa/v20220601/IoaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ioa::V20220601;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-06-01";
    const string ENDPOINT = "ioa.tencentcloudapi.com";
}

IoaClient::IoaClient(const Credential &credential, const string &region) :
    IoaClient(credential, region, ClientProfile())
{
}

IoaClient::IoaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IoaClient::DescribeAccountGroupsOutcome IoaClient::DescribeAccountGroups(const DescribeAccountGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountGroupsResponse rsp = DescribeAccountGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountGroupsOutcome(rsp);
        else
            return DescribeAccountGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountGroupsOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeAccountGroupsAsync(const DescribeAccountGroupsRequest& request, const DescribeAccountGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccountGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IoaClient::DescribeAccountGroupsOutcomeCallable IoaClient::DescribeAccountGroupsCallable(const DescribeAccountGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccountGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccountGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IoaClient::DescribeDevicesOutcome IoaClient::DescribeDevices(const DescribeDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDevicesResponse rsp = DescribeDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDevicesOutcome(rsp);
        else
            return DescribeDevicesOutcome(o.GetError());
    }
    else
    {
        return DescribeDevicesOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeDevicesAsync(const DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IoaClient::DescribeDevicesOutcomeCallable IoaClient::DescribeDevicesCallable(const DescribeDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDevicesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IoaClient::DescribeLocalAccountsOutcome IoaClient::DescribeLocalAccounts(const DescribeLocalAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLocalAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLocalAccountsResponse rsp = DescribeLocalAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLocalAccountsOutcome(rsp);
        else
            return DescribeLocalAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeLocalAccountsOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeLocalAccountsAsync(const DescribeLocalAccountsRequest& request, const DescribeLocalAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLocalAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IoaClient::DescribeLocalAccountsOutcomeCallable IoaClient::DescribeLocalAccountsCallable(const DescribeLocalAccountsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLocalAccountsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLocalAccounts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IoaClient::DescribeRootAccountGroupOutcome IoaClient::DescribeRootAccountGroup(const DescribeRootAccountGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRootAccountGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRootAccountGroupResponse rsp = DescribeRootAccountGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRootAccountGroupOutcome(rsp);
        else
            return DescribeRootAccountGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeRootAccountGroupOutcome(outcome.GetError());
    }
}

void IoaClient::DescribeRootAccountGroupAsync(const DescribeRootAccountGroupRequest& request, const DescribeRootAccountGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRootAccountGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IoaClient::DescribeRootAccountGroupOutcomeCallable IoaClient::DescribeRootAccountGroupCallable(const DescribeRootAccountGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRootAccountGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeRootAccountGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

