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


CccClient::BindStaffSkillGroupListOutcome CccClient::BindStaffSkillGroupList(const BindStaffSkillGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "BindStaffSkillGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindStaffSkillGroupListResponse rsp = BindStaffSkillGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindStaffSkillGroupListOutcome(rsp);
        else
            return BindStaffSkillGroupListOutcome(o.GetError());
    }
    else
    {
        return BindStaffSkillGroupListOutcome(outcome.GetError());
    }
}

void CccClient::BindStaffSkillGroupListAsync(const BindStaffSkillGroupListRequest& request, const BindStaffSkillGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindStaffSkillGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::BindStaffSkillGroupListOutcomeCallable CccClient::BindStaffSkillGroupListCallable(const BindStaffSkillGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindStaffSkillGroupListOutcome()>>(
        [this, request]()
        {
            return this->BindStaffSkillGroupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::CreateAutoCalloutTaskOutcome CccClient::CreateAutoCalloutTask(const CreateAutoCalloutTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAutoCalloutTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAutoCalloutTaskResponse rsp = CreateAutoCalloutTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAutoCalloutTaskOutcome(rsp);
        else
            return CreateAutoCalloutTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAutoCalloutTaskOutcome(outcome.GetError());
    }
}

void CccClient::CreateAutoCalloutTaskAsync(const CreateAutoCalloutTaskRequest& request, const CreateAutoCalloutTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAutoCalloutTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::CreateAutoCalloutTaskOutcomeCallable CccClient::CreateAutoCalloutTaskCallable(const CreateAutoCalloutTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAutoCalloutTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateAutoCalloutTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::CreateCCCSkillGroupOutcome CccClient::CreateCCCSkillGroup(const CreateCCCSkillGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCCCSkillGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCCCSkillGroupResponse rsp = CreateCCCSkillGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCCCSkillGroupOutcome(rsp);
        else
            return CreateCCCSkillGroupOutcome(o.GetError());
    }
    else
    {
        return CreateCCCSkillGroupOutcome(outcome.GetError());
    }
}

void CccClient::CreateCCCSkillGroupAsync(const CreateCCCSkillGroupRequest& request, const CreateCCCSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCCCSkillGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::CreateCCCSkillGroupOutcomeCallable CccClient::CreateCCCSkillGroupCallable(const CreateCCCSkillGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCCCSkillGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateCCCSkillGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::CreateCallOutSessionOutcome CccClient::CreateCallOutSession(const CreateCallOutSessionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCallOutSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCallOutSessionResponse rsp = CreateCallOutSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCallOutSessionOutcome(rsp);
        else
            return CreateCallOutSessionOutcome(o.GetError());
    }
    else
    {
        return CreateCallOutSessionOutcome(outcome.GetError());
    }
}

void CccClient::CreateCallOutSessionAsync(const CreateCallOutSessionRequest& request, const CreateCallOutSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCallOutSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::CreateCallOutSessionOutcomeCallable CccClient::CreateCallOutSessionCallable(const CreateCallOutSessionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCallOutSessionOutcome()>>(
        [this, request]()
        {
            return this->CreateCallOutSession(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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

CccClient::CreateUserSigOutcome CccClient::CreateUserSig(const CreateUserSigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserSig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserSigResponse rsp = CreateUserSigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserSigOutcome(rsp);
        else
            return CreateUserSigOutcome(o.GetError());
    }
    else
    {
        return CreateUserSigOutcome(outcome.GetError());
    }
}

void CccClient::CreateUserSigAsync(const CreateUserSigRequest& request, const CreateUserSigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUserSig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::CreateUserSigOutcomeCallable CccClient::CreateUserSigCallable(const CreateUserSigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserSigOutcome()>>(
        [this, request]()
        {
            return this->CreateUserSig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DeleteStaffOutcome CccClient::DeleteStaff(const DeleteStaffRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStaff");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStaffResponse rsp = DeleteStaffResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStaffOutcome(rsp);
        else
            return DeleteStaffOutcome(o.GetError());
    }
    else
    {
        return DeleteStaffOutcome(outcome.GetError());
    }
}

void CccClient::DeleteStaffAsync(const DeleteStaffRequest& request, const DeleteStaffAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStaff(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DeleteStaffOutcomeCallable CccClient::DeleteStaffCallable(const DeleteStaffRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStaffOutcome()>>(
        [this, request]()
        {
            return this->DeleteStaff(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeAutoCalloutTaskOutcome CccClient::DescribeAutoCalloutTask(const DescribeAutoCalloutTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoCalloutTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoCalloutTaskResponse rsp = DescribeAutoCalloutTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoCalloutTaskOutcome(rsp);
        else
            return DescribeAutoCalloutTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoCalloutTaskOutcome(outcome.GetError());
    }
}

void CccClient::DescribeAutoCalloutTaskAsync(const DescribeAutoCalloutTaskRequest& request, const DescribeAutoCalloutTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAutoCalloutTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeAutoCalloutTaskOutcomeCallable CccClient::DescribeAutoCalloutTaskCallable(const DescribeAutoCalloutTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAutoCalloutTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeAutoCalloutTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeAutoCalloutTasksOutcome CccClient::DescribeAutoCalloutTasks(const DescribeAutoCalloutTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoCalloutTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoCalloutTasksResponse rsp = DescribeAutoCalloutTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoCalloutTasksOutcome(rsp);
        else
            return DescribeAutoCalloutTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoCalloutTasksOutcome(outcome.GetError());
    }
}

void CccClient::DescribeAutoCalloutTasksAsync(const DescribeAutoCalloutTasksRequest& request, const DescribeAutoCalloutTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAutoCalloutTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeAutoCalloutTasksOutcomeCallable CccClient::DescribeAutoCalloutTasksCallable(const DescribeAutoCalloutTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAutoCalloutTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeAutoCalloutTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeCCCBuyInfoListOutcome CccClient::DescribeCCCBuyInfoList(const DescribeCCCBuyInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCCCBuyInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCCCBuyInfoListResponse rsp = DescribeCCCBuyInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCCCBuyInfoListOutcome(rsp);
        else
            return DescribeCCCBuyInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeCCCBuyInfoListOutcome(outcome.GetError());
    }
}

void CccClient::DescribeCCCBuyInfoListAsync(const DescribeCCCBuyInfoListRequest& request, const DescribeCCCBuyInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCCCBuyInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeCCCBuyInfoListOutcomeCallable CccClient::DescribeCCCBuyInfoListCallable(const DescribeCCCBuyInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCCCBuyInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCCCBuyInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeCallInMetricsOutcome CccClient::DescribeCallInMetrics(const DescribeCallInMetricsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCallInMetrics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCallInMetricsResponse rsp = DescribeCallInMetricsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCallInMetricsOutcome(rsp);
        else
            return DescribeCallInMetricsOutcome(o.GetError());
    }
    else
    {
        return DescribeCallInMetricsOutcome(outcome.GetError());
    }
}

void CccClient::DescribeCallInMetricsAsync(const DescribeCallInMetricsRequest& request, const DescribeCallInMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCallInMetrics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeCallInMetricsOutcomeCallable CccClient::DescribeCallInMetricsCallable(const DescribeCallInMetricsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCallInMetricsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCallInMetrics(request);
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

CccClient::DescribePSTNActiveSessionListOutcome CccClient::DescribePSTNActiveSessionList(const DescribePSTNActiveSessionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePSTNActiveSessionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePSTNActiveSessionListResponse rsp = DescribePSTNActiveSessionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePSTNActiveSessionListOutcome(rsp);
        else
            return DescribePSTNActiveSessionListOutcome(o.GetError());
    }
    else
    {
        return DescribePSTNActiveSessionListOutcome(outcome.GetError());
    }
}

void CccClient::DescribePSTNActiveSessionListAsync(const DescribePSTNActiveSessionListRequest& request, const DescribePSTNActiveSessionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePSTNActiveSessionList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribePSTNActiveSessionListOutcomeCallable CccClient::DescribePSTNActiveSessionListCallable(const DescribePSTNActiveSessionListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePSTNActiveSessionListOutcome()>>(
        [this, request]()
        {
            return this->DescribePSTNActiveSessionList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeProtectedTelCdrOutcome CccClient::DescribeProtectedTelCdr(const DescribeProtectedTelCdrRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProtectedTelCdr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProtectedTelCdrResponse rsp = DescribeProtectedTelCdrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProtectedTelCdrOutcome(rsp);
        else
            return DescribeProtectedTelCdrOutcome(o.GetError());
    }
    else
    {
        return DescribeProtectedTelCdrOutcome(outcome.GetError());
    }
}

void CccClient::DescribeProtectedTelCdrAsync(const DescribeProtectedTelCdrRequest& request, const DescribeProtectedTelCdrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProtectedTelCdr(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeProtectedTelCdrOutcomeCallable CccClient::DescribeProtectedTelCdrCallable(const DescribeProtectedTelCdrRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProtectedTelCdrOutcome()>>(
        [this, request]()
        {
            return this->DescribeProtectedTelCdr(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeSeatUserListOutcome CccClient::DescribeSeatUserList(const DescribeSeatUserListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSeatUserList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSeatUserListResponse rsp = DescribeSeatUserListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSeatUserListOutcome(rsp);
        else
            return DescribeSeatUserListOutcome(o.GetError());
    }
    else
    {
        return DescribeSeatUserListOutcome(outcome.GetError());
    }
}

void CccClient::DescribeSeatUserListAsync(const DescribeSeatUserListRequest& request, const DescribeSeatUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSeatUserList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeSeatUserListOutcomeCallable CccClient::DescribeSeatUserListCallable(const DescribeSeatUserListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSeatUserListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSeatUserList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeSkillGroupInfoListOutcome CccClient::DescribeSkillGroupInfoList(const DescribeSkillGroupInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSkillGroupInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSkillGroupInfoListResponse rsp = DescribeSkillGroupInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSkillGroupInfoListOutcome(rsp);
        else
            return DescribeSkillGroupInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeSkillGroupInfoListOutcome(outcome.GetError());
    }
}

void CccClient::DescribeSkillGroupInfoListAsync(const DescribeSkillGroupInfoListRequest& request, const DescribeSkillGroupInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSkillGroupInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeSkillGroupInfoListOutcomeCallable CccClient::DescribeSkillGroupInfoListCallable(const DescribeSkillGroupInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSkillGroupInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSkillGroupInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeStaffInfoListOutcome CccClient::DescribeStaffInfoList(const DescribeStaffInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStaffInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStaffInfoListResponse rsp = DescribeStaffInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStaffInfoListOutcome(rsp);
        else
            return DescribeStaffInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeStaffInfoListOutcome(outcome.GetError());
    }
}

void CccClient::DescribeStaffInfoListAsync(const DescribeStaffInfoListRequest& request, const DescribeStaffInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStaffInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeStaffInfoListOutcomeCallable CccClient::DescribeStaffInfoListCallable(const DescribeStaffInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStaffInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeStaffInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::DescribeStaffStatusMetricsOutcome CccClient::DescribeStaffStatusMetrics(const DescribeStaffStatusMetricsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStaffStatusMetrics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStaffStatusMetricsResponse rsp = DescribeStaffStatusMetricsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStaffStatusMetricsOutcome(rsp);
        else
            return DescribeStaffStatusMetricsOutcome(o.GetError());
    }
    else
    {
        return DescribeStaffStatusMetricsOutcome(outcome.GetError());
    }
}

void CccClient::DescribeStaffStatusMetricsAsync(const DescribeStaffStatusMetricsRequest& request, const DescribeStaffStatusMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStaffStatusMetrics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeStaffStatusMetricsOutcomeCallable CccClient::DescribeStaffStatusMetricsCallable(const DescribeStaffStatusMetricsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStaffStatusMetricsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStaffStatusMetrics(request);
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

CccClient::DescribeTelSessionOutcome CccClient::DescribeTelSession(const DescribeTelSessionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTelSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTelSessionResponse rsp = DescribeTelSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTelSessionOutcome(rsp);
        else
            return DescribeTelSessionOutcome(o.GetError());
    }
    else
    {
        return DescribeTelSessionOutcome(outcome.GetError());
    }
}

void CccClient::DescribeTelSessionAsync(const DescribeTelSessionRequest& request, const DescribeTelSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTelSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::DescribeTelSessionOutcomeCallable CccClient::DescribeTelSessionCallable(const DescribeTelSessionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTelSessionOutcome()>>(
        [this, request]()
        {
            return this->DescribeTelSession(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::StopAutoCalloutTaskOutcome CccClient::StopAutoCalloutTask(const StopAutoCalloutTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StopAutoCalloutTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopAutoCalloutTaskResponse rsp = StopAutoCalloutTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopAutoCalloutTaskOutcome(rsp);
        else
            return StopAutoCalloutTaskOutcome(o.GetError());
    }
    else
    {
        return StopAutoCalloutTaskOutcome(outcome.GetError());
    }
}

void CccClient::StopAutoCalloutTaskAsync(const StopAutoCalloutTaskRequest& request, const StopAutoCalloutTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopAutoCalloutTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::StopAutoCalloutTaskOutcomeCallable CccClient::StopAutoCalloutTaskCallable(const StopAutoCalloutTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopAutoCalloutTaskOutcome()>>(
        [this, request]()
        {
            return this->StopAutoCalloutTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CccClient::UnbindStaffSkillGroupListOutcome CccClient::UnbindStaffSkillGroupList(const UnbindStaffSkillGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindStaffSkillGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindStaffSkillGroupListResponse rsp = UnbindStaffSkillGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindStaffSkillGroupListOutcome(rsp);
        else
            return UnbindStaffSkillGroupListOutcome(o.GetError());
    }
    else
    {
        return UnbindStaffSkillGroupListOutcome(outcome.GetError());
    }
}

void CccClient::UnbindStaffSkillGroupListAsync(const UnbindStaffSkillGroupListRequest& request, const UnbindStaffSkillGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindStaffSkillGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CccClient::UnbindStaffSkillGroupListOutcomeCallable CccClient::UnbindStaffSkillGroupListCallable(const UnbindStaffSkillGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindStaffSkillGroupListOutcome()>>(
        [this, request]()
        {
            return this->UnbindStaffSkillGroupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

