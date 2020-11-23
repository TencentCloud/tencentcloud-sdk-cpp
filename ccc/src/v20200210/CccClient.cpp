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

#include <tencentcloud/ccc/v20200210/CccClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ccc::V20200210;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-02-10";
    const string ENDPOINT = "ccc.tencentcloudapi.com";
}

CccClient::CccClient(const Credential &credential, const string &region) :
    CccClient(credential, region, ClientProfile())
{
}

CccClient::CccClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CccClient::CreateSDKLoginTokenOutcome CccClient::CreateSDKLoginToken(const CreateSDKLoginTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSDKLoginToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSDKLoginTokenResponse rsp = CreateSDKLoginTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSDKLoginTokenOutcome(rsp);
        else
            return CreateSDKLoginTokenOutcome(o.GetError());
    }
    else
    {
        return CreateSDKLoginTokenOutcome(outcome.GetError());
    }
}

void CccClient::CreateSDKLoginTokenAsync(const CreateSDKLoginTokenRequest& request, const CreateSDKLoginTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSDKLoginToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::CreateSDKLoginTokenOutcomeCallable CccClient::CreateSDKLoginTokenCallable(const CreateSDKLoginTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSDKLoginTokenOutcome()>>(
        [this, request]()
        {
            return this->CreateSDKLoginToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::CreateStaffOutcome CccClient::CreateStaff(const CreateStaffRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStaff");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStaffResponse rsp = CreateStaffResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStaffOutcome(rsp);
        else
            return CreateStaffOutcome(o.GetError());
    }
    else
    {
        return CreateStaffOutcome(outcome.GetError());
    }
}

void CccClient::CreateStaffAsync(const CreateStaffRequest& request, const CreateStaffAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStaff(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::CreateStaffOutcomeCallable CccClient::CreateStaffCallable(const CreateStaffRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStaffOutcome()>>(
        [this, request]()
        {
            return this->CreateStaff(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeChatMessagesOutcome CccClient::DescribeChatMessages(const DescribeChatMessagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChatMessages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChatMessagesResponse rsp = DescribeChatMessagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChatMessagesOutcome(rsp);
        else
            return DescribeChatMessagesOutcome(o.GetError());
    }
    else
    {
        return DescribeChatMessagesOutcome(outcome.GetError());
    }
}

void CccClient::DescribeChatMessagesAsync(const DescribeChatMessagesRequest& request, const DescribeChatMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeChatMessages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeChatMessagesOutcomeCallable CccClient::DescribeChatMessagesCallable(const DescribeChatMessagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeChatMessagesOutcome()>>(
        [this, request]()
        {
            return this->DescribeChatMessages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeIMCdrsOutcome CccClient::DescribeIMCdrs(const DescribeIMCdrsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIMCdrs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIMCdrsResponse rsp = DescribeIMCdrsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIMCdrsOutcome(rsp);
        else
            return DescribeIMCdrsOutcome(o.GetError());
    }
    else
    {
        return DescribeIMCdrsOutcome(outcome.GetError());
    }
}

void CccClient::DescribeIMCdrsAsync(const DescribeIMCdrsRequest& request, const DescribeIMCdrsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIMCdrs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeIMCdrsOutcomeCallable CccClient::DescribeIMCdrsCallable(const DescribeIMCdrsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIMCdrsOutcome()>>(
        [this, request]()
        {
            return this->DescribeIMCdrs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeTelCallInfoOutcome CccClient::DescribeTelCallInfo(const DescribeTelCallInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTelCallInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTelCallInfoResponse rsp = DescribeTelCallInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTelCallInfoOutcome(rsp);
        else
            return DescribeTelCallInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeTelCallInfoOutcome(outcome.GetError());
    }
}

void CccClient::DescribeTelCallInfoAsync(const DescribeTelCallInfoRequest& request, const DescribeTelCallInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTelCallInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeTelCallInfoOutcomeCallable CccClient::DescribeTelCallInfoCallable(const DescribeTelCallInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTelCallInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeTelCallInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeTelCdrOutcome CccClient::DescribeTelCdr(const DescribeTelCdrRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTelCdr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTelCdrResponse rsp = DescribeTelCdrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTelCdrOutcome(rsp);
        else
            return DescribeTelCdrOutcome(o.GetError());
    }
    else
    {
        return DescribeTelCdrOutcome(outcome.GetError());
    }
}

void CccClient::DescribeTelCdrAsync(const DescribeTelCdrRequest& request, const DescribeTelCdrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTelCdr(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeTelCdrOutcomeCallable CccClient::DescribeTelCdrCallable(const DescribeTelCdrRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTelCdrOutcome()>>(
        [this, request]()
        {
            return this->DescribeTelCdr(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

