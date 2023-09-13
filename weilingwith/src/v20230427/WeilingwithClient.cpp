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

#include <tencentcloud/weilingwith/v20230427/WeilingwithClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Weilingwith::V20230427;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-04-27";
    const string ENDPOINT = "weilingwith.tencentcloudapi.com";
}

WeilingwithClient::WeilingwithClient(const Credential &credential, const string &region) :
    WeilingwithClient(credential, region, ClientProfile())
{
}

WeilingwithClient::WeilingwithClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


WeilingwithClient::DescribeApplicationListOutcome WeilingwithClient::DescribeApplicationList(const DescribeApplicationListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationListResponse rsp = DescribeApplicationListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationListOutcome(rsp);
        else
            return DescribeApplicationListOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeApplicationListAsync(const DescribeApplicationListRequest& request, const DescribeApplicationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplicationList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeApplicationListOutcomeCallable WeilingwithClient::DescribeApplicationListCallable(const DescribeApplicationListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationListOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplicationList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeEdgeApplicationTokenOutcome WeilingwithClient::DescribeEdgeApplicationToken(const DescribeEdgeApplicationTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeApplicationToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeApplicationTokenResponse rsp = DescribeEdgeApplicationTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeApplicationTokenOutcome(rsp);
        else
            return DescribeEdgeApplicationTokenOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeApplicationTokenOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeEdgeApplicationTokenAsync(const DescribeEdgeApplicationTokenRequest& request, const DescribeEdgeApplicationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgeApplicationToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeEdgeApplicationTokenOutcomeCallable WeilingwithClient::DescribeEdgeApplicationTokenCallable(const DescribeEdgeApplicationTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgeApplicationTokenOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgeApplicationToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeInterfaceListOutcome WeilingwithClient::DescribeInterfaceList(const DescribeInterfaceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInterfaceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInterfaceListResponse rsp = DescribeInterfaceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInterfaceListOutcome(rsp);
        else
            return DescribeInterfaceListOutcome(o.GetError());
    }
    else
    {
        return DescribeInterfaceListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeInterfaceListAsync(const DescribeInterfaceListRequest& request, const DescribeInterfaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInterfaceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeInterfaceListOutcomeCallable WeilingwithClient::DescribeInterfaceListCallable(const DescribeInterfaceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInterfaceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeInterfaceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeWorkspaceListOutcome WeilingwithClient::DescribeWorkspaceList(const DescribeWorkspaceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkspaceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkspaceListResponse rsp = DescribeWorkspaceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkspaceListOutcome(rsp);
        else
            return DescribeWorkspaceListOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkspaceListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeWorkspaceListAsync(const DescribeWorkspaceListRequest& request, const DescribeWorkspaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkspaceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeWorkspaceListOutcomeCallable WeilingwithClient::DescribeWorkspaceListCallable(const DescribeWorkspaceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkspaceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkspaceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

WeilingwithClient::DescribeWorkspaceUserListOutcome WeilingwithClient::DescribeWorkspaceUserList(const DescribeWorkspaceUserListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkspaceUserList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkspaceUserListResponse rsp = DescribeWorkspaceUserListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkspaceUserListOutcome(rsp);
        else
            return DescribeWorkspaceUserListOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkspaceUserListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeWorkspaceUserListAsync(const DescribeWorkspaceUserListRequest& request, const DescribeWorkspaceUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkspaceUserList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

WeilingwithClient::DescribeWorkspaceUserListOutcomeCallable WeilingwithClient::DescribeWorkspaceUserListCallable(const DescribeWorkspaceUserListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkspaceUserListOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkspaceUserList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

