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

#include <tencentcloud/csip/v20221121/CsipClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Csip::V20221121;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-11-21";
    const string ENDPOINT = "csip.tencentcloudapi.com";
}

CsipClient::CsipClient(const Credential &credential, const string &region) :
    CsipClient(credential, region, ClientProfile())
{
}

CsipClient::CsipClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CsipClient::AddNewBindRoleUserOutcome CsipClient::AddNewBindRoleUser(const AddNewBindRoleUserRequest &request)
{
    auto outcome = MakeRequest(request, "AddNewBindRoleUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddNewBindRoleUserResponse rsp = AddNewBindRoleUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddNewBindRoleUserOutcome(rsp);
        else
            return AddNewBindRoleUserOutcome(o.GetError());
    }
    else
    {
        return AddNewBindRoleUserOutcome(outcome.GetError());
    }
}

void CsipClient::AddNewBindRoleUserAsync(const AddNewBindRoleUserRequest& request, const AddNewBindRoleUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddNewBindRoleUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::AddNewBindRoleUserOutcomeCallable CsipClient::AddNewBindRoleUserCallable(const AddNewBindRoleUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddNewBindRoleUserOutcome()>>(
        [this, request]()
        {
            return this->AddNewBindRoleUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::CreateAccessKeyCheckTaskOutcome CsipClient::CreateAccessKeyCheckTask(const CreateAccessKeyCheckTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAccessKeyCheckTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAccessKeyCheckTaskResponse rsp = CreateAccessKeyCheckTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAccessKeyCheckTaskOutcome(rsp);
        else
            return CreateAccessKeyCheckTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAccessKeyCheckTaskOutcome(outcome.GetError());
    }
}

void CsipClient::CreateAccessKeyCheckTaskAsync(const CreateAccessKeyCheckTaskRequest& request, const CreateAccessKeyCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAccessKeyCheckTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::CreateAccessKeyCheckTaskOutcomeCallable CsipClient::CreateAccessKeyCheckTaskCallable(const CreateAccessKeyCheckTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAccessKeyCheckTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateAccessKeyCheckTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::CreateAccessKeySyncTaskOutcome CsipClient::CreateAccessKeySyncTask(const CreateAccessKeySyncTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAccessKeySyncTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAccessKeySyncTaskResponse rsp = CreateAccessKeySyncTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAccessKeySyncTaskOutcome(rsp);
        else
            return CreateAccessKeySyncTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAccessKeySyncTaskOutcome(outcome.GetError());
    }
}

void CsipClient::CreateAccessKeySyncTaskAsync(const CreateAccessKeySyncTaskRequest& request, const CreateAccessKeySyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAccessKeySyncTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::CreateAccessKeySyncTaskOutcomeCallable CsipClient::CreateAccessKeySyncTaskCallable(const CreateAccessKeySyncTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAccessKeySyncTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateAccessKeySyncTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::CreateDomainAndIpOutcome CsipClient::CreateDomainAndIp(const CreateDomainAndIpRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomainAndIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainAndIpResponse rsp = CreateDomainAndIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainAndIpOutcome(rsp);
        else
            return CreateDomainAndIpOutcome(o.GetError());
    }
    else
    {
        return CreateDomainAndIpOutcome(outcome.GetError());
    }
}

void CsipClient::CreateDomainAndIpAsync(const CreateDomainAndIpRequest& request, const CreateDomainAndIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDomainAndIp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::CreateDomainAndIpOutcomeCallable CsipClient::CreateDomainAndIpCallable(const CreateDomainAndIpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDomainAndIpOutcome()>>(
        [this, request]()
        {
            return this->CreateDomainAndIp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::CreateRiskCenterScanTaskOutcome CsipClient::CreateRiskCenterScanTask(const CreateRiskCenterScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRiskCenterScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRiskCenterScanTaskResponse rsp = CreateRiskCenterScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRiskCenterScanTaskOutcome(rsp);
        else
            return CreateRiskCenterScanTaskOutcome(o.GetError());
    }
    else
    {
        return CreateRiskCenterScanTaskOutcome(outcome.GetError());
    }
}

void CsipClient::CreateRiskCenterScanTaskAsync(const CreateRiskCenterScanTaskRequest& request, const CreateRiskCenterScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRiskCenterScanTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::CreateRiskCenterScanTaskOutcomeCallable CsipClient::CreateRiskCenterScanTaskCallable(const CreateRiskCenterScanTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRiskCenterScanTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateRiskCenterScanTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DeleteDomainAndIpOutcome CsipClient::DeleteDomainAndIp(const DeleteDomainAndIpRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDomainAndIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDomainAndIpResponse rsp = DeleteDomainAndIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDomainAndIpOutcome(rsp);
        else
            return DeleteDomainAndIpOutcome(o.GetError());
    }
    else
    {
        return DeleteDomainAndIpOutcome(outcome.GetError());
    }
}

void CsipClient::DeleteDomainAndIpAsync(const DeleteDomainAndIpRequest& request, const DeleteDomainAndIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDomainAndIp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DeleteDomainAndIpOutcomeCallable CsipClient::DeleteDomainAndIpCallable(const DeleteDomainAndIpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDomainAndIpOutcome()>>(
        [this, request]()
        {
            return this->DeleteDomainAndIp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DeleteRiskScanTaskOutcome CsipClient::DeleteRiskScanTask(const DeleteRiskScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRiskScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRiskScanTaskResponse rsp = DeleteRiskScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRiskScanTaskOutcome(rsp);
        else
            return DeleteRiskScanTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteRiskScanTaskOutcome(outcome.GetError());
    }
}

void CsipClient::DeleteRiskScanTaskAsync(const DeleteRiskScanTaskRequest& request, const DeleteRiskScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRiskScanTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DeleteRiskScanTaskOutcomeCallable CsipClient::DeleteRiskScanTaskCallable(const DeleteRiskScanTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRiskScanTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteRiskScanTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeAbnormalCallRecordOutcome CsipClient::DescribeAbnormalCallRecord(const DescribeAbnormalCallRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAbnormalCallRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAbnormalCallRecordResponse rsp = DescribeAbnormalCallRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAbnormalCallRecordOutcome(rsp);
        else
            return DescribeAbnormalCallRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeAbnormalCallRecordOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAbnormalCallRecordAsync(const DescribeAbnormalCallRecordRequest& request, const DescribeAbnormalCallRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAbnormalCallRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeAbnormalCallRecordOutcomeCallable CsipClient::DescribeAbnormalCallRecordCallable(const DescribeAbnormalCallRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAbnormalCallRecordOutcome()>>(
        [this, request]()
        {
            return this->DescribeAbnormalCallRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeAccessKeyAlarmOutcome CsipClient::DescribeAccessKeyAlarm(const DescribeAccessKeyAlarmRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessKeyAlarm");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessKeyAlarmResponse rsp = DescribeAccessKeyAlarmResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessKeyAlarmOutcome(rsp);
        else
            return DescribeAccessKeyAlarmOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessKeyAlarmOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAccessKeyAlarmAsync(const DescribeAccessKeyAlarmRequest& request, const DescribeAccessKeyAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccessKeyAlarm(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeAccessKeyAlarmOutcomeCallable CsipClient::DescribeAccessKeyAlarmCallable(const DescribeAccessKeyAlarmRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccessKeyAlarmOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccessKeyAlarm(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeAccessKeyAlarmDetailOutcome CsipClient::DescribeAccessKeyAlarmDetail(const DescribeAccessKeyAlarmDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessKeyAlarmDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessKeyAlarmDetailResponse rsp = DescribeAccessKeyAlarmDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessKeyAlarmDetailOutcome(rsp);
        else
            return DescribeAccessKeyAlarmDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessKeyAlarmDetailOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAccessKeyAlarmDetailAsync(const DescribeAccessKeyAlarmDetailRequest& request, const DescribeAccessKeyAlarmDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccessKeyAlarmDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeAccessKeyAlarmDetailOutcomeCallable CsipClient::DescribeAccessKeyAlarmDetailCallable(const DescribeAccessKeyAlarmDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccessKeyAlarmDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccessKeyAlarmDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeAccessKeyAssetOutcome CsipClient::DescribeAccessKeyAsset(const DescribeAccessKeyAssetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessKeyAsset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessKeyAssetResponse rsp = DescribeAccessKeyAssetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessKeyAssetOutcome(rsp);
        else
            return DescribeAccessKeyAssetOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessKeyAssetOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAccessKeyAssetAsync(const DescribeAccessKeyAssetRequest& request, const DescribeAccessKeyAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccessKeyAsset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeAccessKeyAssetOutcomeCallable CsipClient::DescribeAccessKeyAssetCallable(const DescribeAccessKeyAssetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccessKeyAssetOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccessKeyAsset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeAccessKeyRiskOutcome CsipClient::DescribeAccessKeyRisk(const DescribeAccessKeyRiskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessKeyRisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessKeyRiskResponse rsp = DescribeAccessKeyRiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessKeyRiskOutcome(rsp);
        else
            return DescribeAccessKeyRiskOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessKeyRiskOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAccessKeyRiskAsync(const DescribeAccessKeyRiskRequest& request, const DescribeAccessKeyRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccessKeyRisk(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeAccessKeyRiskOutcomeCallable CsipClient::DescribeAccessKeyRiskCallable(const DescribeAccessKeyRiskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccessKeyRiskOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccessKeyRisk(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeAccessKeyRiskDetailOutcome CsipClient::DescribeAccessKeyRiskDetail(const DescribeAccessKeyRiskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessKeyRiskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessKeyRiskDetailResponse rsp = DescribeAccessKeyRiskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessKeyRiskDetailOutcome(rsp);
        else
            return DescribeAccessKeyRiskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessKeyRiskDetailOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAccessKeyRiskDetailAsync(const DescribeAccessKeyRiskDetailRequest& request, const DescribeAccessKeyRiskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccessKeyRiskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeAccessKeyRiskDetailOutcomeCallable CsipClient::DescribeAccessKeyRiskDetailCallable(const DescribeAccessKeyRiskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccessKeyRiskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccessKeyRiskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeAccessKeyUserDetailOutcome CsipClient::DescribeAccessKeyUserDetail(const DescribeAccessKeyUserDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessKeyUserDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessKeyUserDetailResponse rsp = DescribeAccessKeyUserDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessKeyUserDetailOutcome(rsp);
        else
            return DescribeAccessKeyUserDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessKeyUserDetailOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAccessKeyUserDetailAsync(const DescribeAccessKeyUserDetailRequest& request, const DescribeAccessKeyUserDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccessKeyUserDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeAccessKeyUserDetailOutcomeCallable CsipClient::DescribeAccessKeyUserDetailCallable(const DescribeAccessKeyUserDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccessKeyUserDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccessKeyUserDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeAccessKeyUserListOutcome CsipClient::DescribeAccessKeyUserList(const DescribeAccessKeyUserListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessKeyUserList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessKeyUserListResponse rsp = DescribeAccessKeyUserListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessKeyUserListOutcome(rsp);
        else
            return DescribeAccessKeyUserListOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessKeyUserListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAccessKeyUserListAsync(const DescribeAccessKeyUserListRequest& request, const DescribeAccessKeyUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccessKeyUserList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeAccessKeyUserListOutcomeCallable CsipClient::DescribeAccessKeyUserListCallable(const DescribeAccessKeyUserListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccessKeyUserListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccessKeyUserList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeAlertListOutcome CsipClient::DescribeAlertList(const DescribeAlertListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlertList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlertListResponse rsp = DescribeAlertListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlertListOutcome(rsp);
        else
            return DescribeAlertListOutcome(o.GetError());
    }
    else
    {
        return DescribeAlertListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAlertListAsync(const DescribeAlertListRequest& request, const DescribeAlertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAlertList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeAlertListOutcomeCallable CsipClient::DescribeAlertListCallable(const DescribeAlertListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAlertListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAlertList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeAssetProcessListOutcome CsipClient::DescribeAssetProcessList(const DescribeAssetProcessListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetProcessList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetProcessListResponse rsp = DescribeAssetProcessListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetProcessListOutcome(rsp);
        else
            return DescribeAssetProcessListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetProcessListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAssetProcessListAsync(const DescribeAssetProcessListRequest& request, const DescribeAssetProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetProcessList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeAssetProcessListOutcomeCallable CsipClient::DescribeAssetProcessListCallable(const DescribeAssetProcessListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetProcessListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetProcessList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeAssetRiskListOutcome CsipClient::DescribeAssetRiskList(const DescribeAssetRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetRiskListResponse rsp = DescribeAssetRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetRiskListOutcome(rsp);
        else
            return DescribeAssetRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAssetRiskListAsync(const DescribeAssetRiskListRequest& request, const DescribeAssetRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeAssetRiskListOutcomeCallable CsipClient::DescribeAssetRiskListCallable(const DescribeAssetRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeAssetViewVulRiskListOutcome CsipClient::DescribeAssetViewVulRiskList(const DescribeAssetViewVulRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetViewVulRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetViewVulRiskListResponse rsp = DescribeAssetViewVulRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetViewVulRiskListOutcome(rsp);
        else
            return DescribeAssetViewVulRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetViewVulRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAssetViewVulRiskListAsync(const DescribeAssetViewVulRiskListRequest& request, const DescribeAssetViewVulRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetViewVulRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeAssetViewVulRiskListOutcomeCallable CsipClient::DescribeAssetViewVulRiskListCallable(const DescribeAssetViewVulRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetViewVulRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetViewVulRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeCFWAssetStatisticsOutcome CsipClient::DescribeCFWAssetStatistics(const DescribeCFWAssetStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCFWAssetStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCFWAssetStatisticsResponse rsp = DescribeCFWAssetStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCFWAssetStatisticsOutcome(rsp);
        else
            return DescribeCFWAssetStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeCFWAssetStatisticsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCFWAssetStatisticsAsync(const DescribeCFWAssetStatisticsRequest& request, const DescribeCFWAssetStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCFWAssetStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeCFWAssetStatisticsOutcomeCallable CsipClient::DescribeCFWAssetStatisticsCallable(const DescribeCFWAssetStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCFWAssetStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCFWAssetStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeCSIPRiskStatisticsOutcome CsipClient::DescribeCSIPRiskStatistics(const DescribeCSIPRiskStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCSIPRiskStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCSIPRiskStatisticsResponse rsp = DescribeCSIPRiskStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCSIPRiskStatisticsOutcome(rsp);
        else
            return DescribeCSIPRiskStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeCSIPRiskStatisticsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCSIPRiskStatisticsAsync(const DescribeCSIPRiskStatisticsRequest& request, const DescribeCSIPRiskStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCSIPRiskStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeCSIPRiskStatisticsOutcomeCallable CsipClient::DescribeCSIPRiskStatisticsCallable(const DescribeCSIPRiskStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCSIPRiskStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCSIPRiskStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeCVMAssetInfoOutcome CsipClient::DescribeCVMAssetInfo(const DescribeCVMAssetInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCVMAssetInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCVMAssetInfoResponse rsp = DescribeCVMAssetInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCVMAssetInfoOutcome(rsp);
        else
            return DescribeCVMAssetInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCVMAssetInfoOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCVMAssetInfoAsync(const DescribeCVMAssetInfoRequest& request, const DescribeCVMAssetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCVMAssetInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeCVMAssetInfoOutcomeCallable CsipClient::DescribeCVMAssetInfoCallable(const DescribeCVMAssetInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCVMAssetInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeCVMAssetInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeCVMAssetsOutcome CsipClient::DescribeCVMAssets(const DescribeCVMAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCVMAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCVMAssetsResponse rsp = DescribeCVMAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCVMAssetsOutcome(rsp);
        else
            return DescribeCVMAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeCVMAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCVMAssetsAsync(const DescribeCVMAssetsRequest& request, const DescribeCVMAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCVMAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeCVMAssetsOutcomeCallable CsipClient::DescribeCVMAssetsCallable(const DescribeCVMAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCVMAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCVMAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeCallRecordOutcome CsipClient::DescribeCallRecord(const DescribeCallRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCallRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCallRecordResponse rsp = DescribeCallRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCallRecordOutcome(rsp);
        else
            return DescribeCallRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeCallRecordOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCallRecordAsync(const DescribeCallRecordRequest& request, const DescribeCallRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCallRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeCallRecordOutcomeCallable CsipClient::DescribeCallRecordCallable(const DescribeCallRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCallRecordOutcome()>>(
        [this, request]()
        {
            return this->DescribeCallRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeCheckViewRisksOutcome CsipClient::DescribeCheckViewRisks(const DescribeCheckViewRisksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCheckViewRisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCheckViewRisksResponse rsp = DescribeCheckViewRisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCheckViewRisksOutcome(rsp);
        else
            return DescribeCheckViewRisksOutcome(o.GetError());
    }
    else
    {
        return DescribeCheckViewRisksOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCheckViewRisksAsync(const DescribeCheckViewRisksRequest& request, const DescribeCheckViewRisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCheckViewRisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeCheckViewRisksOutcomeCallable CsipClient::DescribeCheckViewRisksCallable(const DescribeCheckViewRisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCheckViewRisksOutcome()>>(
        [this, request]()
        {
            return this->DescribeCheckViewRisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeClusterAssetsOutcome CsipClient::DescribeClusterAssets(const DescribeClusterAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterAssetsResponse rsp = DescribeClusterAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterAssetsOutcome(rsp);
        else
            return DescribeClusterAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeClusterAssetsAsync(const DescribeClusterAssetsRequest& request, const DescribeClusterAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeClusterAssetsOutcomeCallable CsipClient::DescribeClusterAssetsCallable(const DescribeClusterAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeClusterPodAssetsOutcome CsipClient::DescribeClusterPodAssets(const DescribeClusterPodAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterPodAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterPodAssetsResponse rsp = DescribeClusterPodAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterPodAssetsOutcome(rsp);
        else
            return DescribeClusterPodAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterPodAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeClusterPodAssetsAsync(const DescribeClusterPodAssetsRequest& request, const DescribeClusterPodAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterPodAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeClusterPodAssetsOutcomeCallable CsipClient::DescribeClusterPodAssetsCallable(const DescribeClusterPodAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterPodAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterPodAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeDbAssetInfoOutcome CsipClient::DescribeDbAssetInfo(const DescribeDbAssetInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDbAssetInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDbAssetInfoResponse rsp = DescribeDbAssetInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDbAssetInfoOutcome(rsp);
        else
            return DescribeDbAssetInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDbAssetInfoOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDbAssetInfoAsync(const DescribeDbAssetInfoRequest& request, const DescribeDbAssetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDbAssetInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeDbAssetInfoOutcomeCallable CsipClient::DescribeDbAssetInfoCallable(const DescribeDbAssetInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDbAssetInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDbAssetInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeDbAssetsOutcome CsipClient::DescribeDbAssets(const DescribeDbAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDbAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDbAssetsResponse rsp = DescribeDbAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDbAssetsOutcome(rsp);
        else
            return DescribeDbAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeDbAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDbAssetsAsync(const DescribeDbAssetsRequest& request, const DescribeDbAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDbAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeDbAssetsOutcomeCallable CsipClient::DescribeDbAssetsCallable(const DescribeDbAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDbAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDbAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeDomainAssetsOutcome CsipClient::DescribeDomainAssets(const DescribeDomainAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainAssetsResponse rsp = DescribeDomainAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainAssetsOutcome(rsp);
        else
            return DescribeDomainAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDomainAssetsAsync(const DescribeDomainAssetsRequest& request, const DescribeDomainAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeDomainAssetsOutcomeCallable CsipClient::DescribeDomainAssetsCallable(const DescribeDomainAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeExposeAssetCategoryOutcome CsipClient::DescribeExposeAssetCategory(const DescribeExposeAssetCategoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExposeAssetCategory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExposeAssetCategoryResponse rsp = DescribeExposeAssetCategoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExposeAssetCategoryOutcome(rsp);
        else
            return DescribeExposeAssetCategoryOutcome(o.GetError());
    }
    else
    {
        return DescribeExposeAssetCategoryOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeExposeAssetCategoryAsync(const DescribeExposeAssetCategoryRequest& request, const DescribeExposeAssetCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExposeAssetCategory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeExposeAssetCategoryOutcomeCallable CsipClient::DescribeExposeAssetCategoryCallable(const DescribeExposeAssetCategoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExposeAssetCategoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeExposeAssetCategory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeExposePathOutcome CsipClient::DescribeExposePath(const DescribeExposePathRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExposePath");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExposePathResponse rsp = DescribeExposePathResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExposePathOutcome(rsp);
        else
            return DescribeExposePathOutcome(o.GetError());
    }
    else
    {
        return DescribeExposePathOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeExposePathAsync(const DescribeExposePathRequest& request, const DescribeExposePathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExposePath(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeExposePathOutcomeCallable CsipClient::DescribeExposePathCallable(const DescribeExposePathRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExposePathOutcome()>>(
        [this, request]()
        {
            return this->DescribeExposePath(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeExposuresOutcome CsipClient::DescribeExposures(const DescribeExposuresRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExposures");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExposuresResponse rsp = DescribeExposuresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExposuresOutcome(rsp);
        else
            return DescribeExposuresOutcome(o.GetError());
    }
    else
    {
        return DescribeExposuresOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeExposuresAsync(const DescribeExposuresRequest& request, const DescribeExposuresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExposures(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeExposuresOutcomeCallable CsipClient::DescribeExposuresCallable(const DescribeExposuresRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExposuresOutcome()>>(
        [this, request]()
        {
            return this->DescribeExposures(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeGatewayAssetsOutcome CsipClient::DescribeGatewayAssets(const DescribeGatewayAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewayAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayAssetsResponse rsp = DescribeGatewayAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayAssetsOutcome(rsp);
        else
            return DescribeGatewayAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeGatewayAssetsAsync(const DescribeGatewayAssetsRequest& request, const DescribeGatewayAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGatewayAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeGatewayAssetsOutcomeCallable CsipClient::DescribeGatewayAssetsCallable(const DescribeGatewayAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGatewayAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeGatewayAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeHighBaseLineRiskListOutcome CsipClient::DescribeHighBaseLineRiskList(const DescribeHighBaseLineRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHighBaseLineRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHighBaseLineRiskListResponse rsp = DescribeHighBaseLineRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHighBaseLineRiskListOutcome(rsp);
        else
            return DescribeHighBaseLineRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeHighBaseLineRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeHighBaseLineRiskListAsync(const DescribeHighBaseLineRiskListRequest& request, const DescribeHighBaseLineRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHighBaseLineRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeHighBaseLineRiskListOutcomeCallable CsipClient::DescribeHighBaseLineRiskListCallable(const DescribeHighBaseLineRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHighBaseLineRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeHighBaseLineRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeListenerListOutcome CsipClient::DescribeListenerList(const DescribeListenerListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListenerList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListenerListResponse rsp = DescribeListenerListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListenerListOutcome(rsp);
        else
            return DescribeListenerListOutcome(o.GetError());
    }
    else
    {
        return DescribeListenerListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeListenerListAsync(const DescribeListenerListRequest& request, const DescribeListenerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeListenerList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeListenerListOutcomeCallable CsipClient::DescribeListenerListCallable(const DescribeListenerListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeListenerListOutcome()>>(
        [this, request]()
        {
            return this->DescribeListenerList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeNICAssetsOutcome CsipClient::DescribeNICAssets(const DescribeNICAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNICAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNICAssetsResponse rsp = DescribeNICAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNICAssetsOutcome(rsp);
        else
            return DescribeNICAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeNICAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeNICAssetsAsync(const DescribeNICAssetsRequest& request, const DescribeNICAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNICAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeNICAssetsOutcomeCallable CsipClient::DescribeNICAssetsCallable(const DescribeNICAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNICAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeNICAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeOrganizationInfoOutcome CsipClient::DescribeOrganizationInfo(const DescribeOrganizationInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationInfoResponse rsp = DescribeOrganizationInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationInfoOutcome(rsp);
        else
            return DescribeOrganizationInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationInfoOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeOrganizationInfoAsync(const DescribeOrganizationInfoRequest& request, const DescribeOrganizationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrganizationInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeOrganizationInfoOutcomeCallable CsipClient::DescribeOrganizationInfoCallable(const DescribeOrganizationInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrganizationInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrganizationInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeOrganizationUserInfoOutcome CsipClient::DescribeOrganizationUserInfo(const DescribeOrganizationUserInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationUserInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationUserInfoResponse rsp = DescribeOrganizationUserInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationUserInfoOutcome(rsp);
        else
            return DescribeOrganizationUserInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationUserInfoOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeOrganizationUserInfoAsync(const DescribeOrganizationUserInfoRequest& request, const DescribeOrganizationUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrganizationUserInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeOrganizationUserInfoOutcomeCallable CsipClient::DescribeOrganizationUserInfoCallable(const DescribeOrganizationUserInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrganizationUserInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrganizationUserInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeOtherCloudAssetsOutcome CsipClient::DescribeOtherCloudAssets(const DescribeOtherCloudAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOtherCloudAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOtherCloudAssetsResponse rsp = DescribeOtherCloudAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOtherCloudAssetsOutcome(rsp);
        else
            return DescribeOtherCloudAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeOtherCloudAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeOtherCloudAssetsAsync(const DescribeOtherCloudAssetsRequest& request, const DescribeOtherCloudAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOtherCloudAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeOtherCloudAssetsOutcomeCallable CsipClient::DescribeOtherCloudAssetsCallable(const DescribeOtherCloudAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOtherCloudAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeOtherCloudAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribePublicIpAssetsOutcome CsipClient::DescribePublicIpAssets(const DescribePublicIpAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicIpAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicIpAssetsResponse rsp = DescribePublicIpAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicIpAssetsOutcome(rsp);
        else
            return DescribePublicIpAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribePublicIpAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribePublicIpAssetsAsync(const DescribePublicIpAssetsRequest& request, const DescribePublicIpAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePublicIpAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribePublicIpAssetsOutcomeCallable CsipClient::DescribePublicIpAssetsCallable(const DescribePublicIpAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePublicIpAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribePublicIpAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeRepositoryImageAssetsOutcome CsipClient::DescribeRepositoryImageAssets(const DescribeRepositoryImageAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRepositoryImageAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRepositoryImageAssetsResponse rsp = DescribeRepositoryImageAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRepositoryImageAssetsOutcome(rsp);
        else
            return DescribeRepositoryImageAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeRepositoryImageAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRepositoryImageAssetsAsync(const DescribeRepositoryImageAssetsRequest& request, const DescribeRepositoryImageAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRepositoryImageAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeRepositoryImageAssetsOutcomeCallable CsipClient::DescribeRepositoryImageAssetsCallable(const DescribeRepositoryImageAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRepositoryImageAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRepositoryImageAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeRiskCallRecordOutcome CsipClient::DescribeRiskCallRecord(const DescribeRiskCallRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCallRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCallRecordResponse rsp = DescribeRiskCallRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCallRecordOutcome(rsp);
        else
            return DescribeRiskCallRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCallRecordOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCallRecordAsync(const DescribeRiskCallRecordRequest& request, const DescribeRiskCallRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskCallRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeRiskCallRecordOutcomeCallable CsipClient::DescribeRiskCallRecordCallable(const DescribeRiskCallRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskCallRecordOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskCallRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeRiskCenterAssetViewCFGRiskListOutcome CsipClient::DescribeRiskCenterAssetViewCFGRiskList(const DescribeRiskCenterAssetViewCFGRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterAssetViewCFGRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterAssetViewCFGRiskListResponse rsp = DescribeRiskCenterAssetViewCFGRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterAssetViewCFGRiskListOutcome(rsp);
        else
            return DescribeRiskCenterAssetViewCFGRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterAssetViewCFGRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterAssetViewCFGRiskListAsync(const DescribeRiskCenterAssetViewCFGRiskListRequest& request, const DescribeRiskCenterAssetViewCFGRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskCenterAssetViewCFGRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeRiskCenterAssetViewCFGRiskListOutcomeCallable CsipClient::DescribeRiskCenterAssetViewCFGRiskListCallable(const DescribeRiskCenterAssetViewCFGRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskCenterAssetViewCFGRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskCenterAssetViewCFGRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeRiskCenterAssetViewPortRiskListOutcome CsipClient::DescribeRiskCenterAssetViewPortRiskList(const DescribeRiskCenterAssetViewPortRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterAssetViewPortRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterAssetViewPortRiskListResponse rsp = DescribeRiskCenterAssetViewPortRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterAssetViewPortRiskListOutcome(rsp);
        else
            return DescribeRiskCenterAssetViewPortRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterAssetViewPortRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterAssetViewPortRiskListAsync(const DescribeRiskCenterAssetViewPortRiskListRequest& request, const DescribeRiskCenterAssetViewPortRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskCenterAssetViewPortRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeRiskCenterAssetViewPortRiskListOutcomeCallable CsipClient::DescribeRiskCenterAssetViewPortRiskListCallable(const DescribeRiskCenterAssetViewPortRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskCenterAssetViewPortRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskCenterAssetViewPortRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeRiskCenterAssetViewVULRiskListOutcome CsipClient::DescribeRiskCenterAssetViewVULRiskList(const DescribeRiskCenterAssetViewVULRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterAssetViewVULRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterAssetViewVULRiskListResponse rsp = DescribeRiskCenterAssetViewVULRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterAssetViewVULRiskListOutcome(rsp);
        else
            return DescribeRiskCenterAssetViewVULRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterAssetViewVULRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterAssetViewVULRiskListAsync(const DescribeRiskCenterAssetViewVULRiskListRequest& request, const DescribeRiskCenterAssetViewVULRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskCenterAssetViewVULRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeRiskCenterAssetViewVULRiskListOutcomeCallable CsipClient::DescribeRiskCenterAssetViewVULRiskListCallable(const DescribeRiskCenterAssetViewVULRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskCenterAssetViewVULRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskCenterAssetViewVULRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome CsipClient::DescribeRiskCenterAssetViewWeakPasswordRiskList(const DescribeRiskCenterAssetViewWeakPasswordRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterAssetViewWeakPasswordRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterAssetViewWeakPasswordRiskListResponse rsp = DescribeRiskCenterAssetViewWeakPasswordRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome(rsp);
        else
            return DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterAssetViewWeakPasswordRiskListAsync(const DescribeRiskCenterAssetViewWeakPasswordRiskListRequest& request, const DescribeRiskCenterAssetViewWeakPasswordRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskCenterAssetViewWeakPasswordRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeRiskCenterAssetViewWeakPasswordRiskListOutcomeCallable CsipClient::DescribeRiskCenterAssetViewWeakPasswordRiskListCallable(const DescribeRiskCenterAssetViewWeakPasswordRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskCenterAssetViewWeakPasswordRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeRiskCenterCFGViewCFGRiskListOutcome CsipClient::DescribeRiskCenterCFGViewCFGRiskList(const DescribeRiskCenterCFGViewCFGRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterCFGViewCFGRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterCFGViewCFGRiskListResponse rsp = DescribeRiskCenterCFGViewCFGRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterCFGViewCFGRiskListOutcome(rsp);
        else
            return DescribeRiskCenterCFGViewCFGRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterCFGViewCFGRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterCFGViewCFGRiskListAsync(const DescribeRiskCenterCFGViewCFGRiskListRequest& request, const DescribeRiskCenterCFGViewCFGRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskCenterCFGViewCFGRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeRiskCenterCFGViewCFGRiskListOutcomeCallable CsipClient::DescribeRiskCenterCFGViewCFGRiskListCallable(const DescribeRiskCenterCFGViewCFGRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskCenterCFGViewCFGRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskCenterCFGViewCFGRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeRiskCenterPortViewPortRiskListOutcome CsipClient::DescribeRiskCenterPortViewPortRiskList(const DescribeRiskCenterPortViewPortRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterPortViewPortRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterPortViewPortRiskListResponse rsp = DescribeRiskCenterPortViewPortRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterPortViewPortRiskListOutcome(rsp);
        else
            return DescribeRiskCenterPortViewPortRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterPortViewPortRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterPortViewPortRiskListAsync(const DescribeRiskCenterPortViewPortRiskListRequest& request, const DescribeRiskCenterPortViewPortRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskCenterPortViewPortRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeRiskCenterPortViewPortRiskListOutcomeCallable CsipClient::DescribeRiskCenterPortViewPortRiskListCallable(const DescribeRiskCenterPortViewPortRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskCenterPortViewPortRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskCenterPortViewPortRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeRiskCenterServerRiskListOutcome CsipClient::DescribeRiskCenterServerRiskList(const DescribeRiskCenterServerRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterServerRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterServerRiskListResponse rsp = DescribeRiskCenterServerRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterServerRiskListOutcome(rsp);
        else
            return DescribeRiskCenterServerRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterServerRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterServerRiskListAsync(const DescribeRiskCenterServerRiskListRequest& request, const DescribeRiskCenterServerRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskCenterServerRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeRiskCenterServerRiskListOutcomeCallable CsipClient::DescribeRiskCenterServerRiskListCallable(const DescribeRiskCenterServerRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskCenterServerRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskCenterServerRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeRiskCenterVULViewVULRiskListOutcome CsipClient::DescribeRiskCenterVULViewVULRiskList(const DescribeRiskCenterVULViewVULRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterVULViewVULRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterVULViewVULRiskListResponse rsp = DescribeRiskCenterVULViewVULRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterVULViewVULRiskListOutcome(rsp);
        else
            return DescribeRiskCenterVULViewVULRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterVULViewVULRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterVULViewVULRiskListAsync(const DescribeRiskCenterVULViewVULRiskListRequest& request, const DescribeRiskCenterVULViewVULRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskCenterVULViewVULRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeRiskCenterVULViewVULRiskListOutcomeCallable CsipClient::DescribeRiskCenterVULViewVULRiskListCallable(const DescribeRiskCenterVULViewVULRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskCenterVULViewVULRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskCenterVULViewVULRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeRiskCenterWebsiteRiskListOutcome CsipClient::DescribeRiskCenterWebsiteRiskList(const DescribeRiskCenterWebsiteRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterWebsiteRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterWebsiteRiskListResponse rsp = DescribeRiskCenterWebsiteRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterWebsiteRiskListOutcome(rsp);
        else
            return DescribeRiskCenterWebsiteRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterWebsiteRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterWebsiteRiskListAsync(const DescribeRiskCenterWebsiteRiskListRequest& request, const DescribeRiskCenterWebsiteRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskCenterWebsiteRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeRiskCenterWebsiteRiskListOutcomeCallable CsipClient::DescribeRiskCenterWebsiteRiskListCallable(const DescribeRiskCenterWebsiteRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskCenterWebsiteRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskCenterWebsiteRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeRiskDetailListOutcome CsipClient::DescribeRiskDetailList(const DescribeRiskDetailListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskDetailList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskDetailListResponse rsp = DescribeRiskDetailListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskDetailListOutcome(rsp);
        else
            return DescribeRiskDetailListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskDetailListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskDetailListAsync(const DescribeRiskDetailListRequest& request, const DescribeRiskDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskDetailList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeRiskDetailListOutcomeCallable CsipClient::DescribeRiskDetailListCallable(const DescribeRiskDetailListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskDetailListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskDetailList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeRiskRuleDetailOutcome CsipClient::DescribeRiskRuleDetail(const DescribeRiskRuleDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskRuleDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskRuleDetailResponse rsp = DescribeRiskRuleDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskRuleDetailOutcome(rsp);
        else
            return DescribeRiskRuleDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskRuleDetailOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskRuleDetailAsync(const DescribeRiskRuleDetailRequest& request, const DescribeRiskRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskRuleDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeRiskRuleDetailOutcomeCallable CsipClient::DescribeRiskRuleDetailCallable(const DescribeRiskRuleDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskRuleDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskRuleDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeRiskRulesOutcome CsipClient::DescribeRiskRules(const DescribeRiskRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskRulesResponse rsp = DescribeRiskRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskRulesOutcome(rsp);
        else
            return DescribeRiskRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskRulesOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskRulesAsync(const DescribeRiskRulesRequest& request, const DescribeRiskRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeRiskRulesOutcomeCallable CsipClient::DescribeRiskRulesCallable(const DescribeRiskRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeScanReportListOutcome CsipClient::DescribeScanReportList(const DescribeScanReportListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanReportList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanReportListResponse rsp = DescribeScanReportListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanReportListOutcome(rsp);
        else
            return DescribeScanReportListOutcome(o.GetError());
    }
    else
    {
        return DescribeScanReportListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeScanReportListAsync(const DescribeScanReportListRequest& request, const DescribeScanReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScanReportList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeScanReportListOutcomeCallable CsipClient::DescribeScanReportListCallable(const DescribeScanReportListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScanReportListOutcome()>>(
        [this, request]()
        {
            return this->DescribeScanReportList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeScanStatisticOutcome CsipClient::DescribeScanStatistic(const DescribeScanStatisticRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanStatistic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanStatisticResponse rsp = DescribeScanStatisticResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanStatisticOutcome(rsp);
        else
            return DescribeScanStatisticOutcome(o.GetError());
    }
    else
    {
        return DescribeScanStatisticOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeScanStatisticAsync(const DescribeScanStatisticRequest& request, const DescribeScanStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScanStatistic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeScanStatisticOutcomeCallable CsipClient::DescribeScanStatisticCallable(const DescribeScanStatisticRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScanStatisticOutcome()>>(
        [this, request]()
        {
            return this->DescribeScanStatistic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeScanTaskListOutcome CsipClient::DescribeScanTaskList(const DescribeScanTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanTaskListResponse rsp = DescribeScanTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanTaskListOutcome(rsp);
        else
            return DescribeScanTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeScanTaskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeScanTaskListAsync(const DescribeScanTaskListRequest& request, const DescribeScanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScanTaskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeScanTaskListOutcomeCallable CsipClient::DescribeScanTaskListCallable(const DescribeScanTaskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScanTaskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeScanTaskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeSearchBugInfoOutcome CsipClient::DescribeSearchBugInfo(const DescribeSearchBugInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSearchBugInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSearchBugInfoResponse rsp = DescribeSearchBugInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSearchBugInfoOutcome(rsp);
        else
            return DescribeSearchBugInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeSearchBugInfoOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeSearchBugInfoAsync(const DescribeSearchBugInfoRequest& request, const DescribeSearchBugInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSearchBugInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeSearchBugInfoOutcomeCallable CsipClient::DescribeSearchBugInfoCallable(const DescribeSearchBugInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSearchBugInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeSearchBugInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeSourceIPAssetOutcome CsipClient::DescribeSourceIPAsset(const DescribeSourceIPAssetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSourceIPAsset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSourceIPAssetResponse rsp = DescribeSourceIPAssetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSourceIPAssetOutcome(rsp);
        else
            return DescribeSourceIPAssetOutcome(o.GetError());
    }
    else
    {
        return DescribeSourceIPAssetOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeSourceIPAssetAsync(const DescribeSourceIPAssetRequest& request, const DescribeSourceIPAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSourceIPAsset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeSourceIPAssetOutcomeCallable CsipClient::DescribeSourceIPAssetCallable(const DescribeSourceIPAssetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSourceIPAssetOutcome()>>(
        [this, request]()
        {
            return this->DescribeSourceIPAsset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeSubUserInfoOutcome CsipClient::DescribeSubUserInfo(const DescribeSubUserInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubUserInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubUserInfoResponse rsp = DescribeSubUserInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubUserInfoOutcome(rsp);
        else
            return DescribeSubUserInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeSubUserInfoOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeSubUserInfoAsync(const DescribeSubUserInfoRequest& request, const DescribeSubUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubUserInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeSubUserInfoOutcomeCallable CsipClient::DescribeSubUserInfoCallable(const DescribeSubUserInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubUserInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubUserInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeSubnetAssetsOutcome CsipClient::DescribeSubnetAssets(const DescribeSubnetAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubnetAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubnetAssetsResponse rsp = DescribeSubnetAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubnetAssetsOutcome(rsp);
        else
            return DescribeSubnetAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeSubnetAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeSubnetAssetsAsync(const DescribeSubnetAssetsRequest& request, const DescribeSubnetAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubnetAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeSubnetAssetsOutcomeCallable CsipClient::DescribeSubnetAssetsCallable(const DescribeSubnetAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubnetAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubnetAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeTaskLogListOutcome CsipClient::DescribeTaskLogList(const DescribeTaskLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskLogListResponse rsp = DescribeTaskLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskLogListOutcome(rsp);
        else
            return DescribeTaskLogListOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskLogListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeTaskLogListAsync(const DescribeTaskLogListRequest& request, const DescribeTaskLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskLogList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeTaskLogListOutcomeCallable CsipClient::DescribeTaskLogListCallable(const DescribeTaskLogListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskLogListOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskLogList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeTaskLogURLOutcome CsipClient::DescribeTaskLogURL(const DescribeTaskLogURLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskLogURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskLogURLResponse rsp = DescribeTaskLogURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskLogURLOutcome(rsp);
        else
            return DescribeTaskLogURLOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskLogURLOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeTaskLogURLAsync(const DescribeTaskLogURLRequest& request, const DescribeTaskLogURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskLogURL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeTaskLogURLOutcomeCallable CsipClient::DescribeTaskLogURLCallable(const DescribeTaskLogURLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskLogURLOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskLogURL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeTopAttackInfoOutcome CsipClient::DescribeTopAttackInfo(const DescribeTopAttackInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopAttackInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopAttackInfoResponse rsp = DescribeTopAttackInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopAttackInfoOutcome(rsp);
        else
            return DescribeTopAttackInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeTopAttackInfoOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeTopAttackInfoAsync(const DescribeTopAttackInfoRequest& request, const DescribeTopAttackInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopAttackInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeTopAttackInfoOutcomeCallable CsipClient::DescribeTopAttackInfoCallable(const DescribeTopAttackInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopAttackInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopAttackInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeUebaRuleOutcome CsipClient::DescribeUebaRule(const DescribeUebaRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUebaRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUebaRuleResponse rsp = DescribeUebaRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUebaRuleOutcome(rsp);
        else
            return DescribeUebaRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeUebaRuleOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeUebaRuleAsync(const DescribeUebaRuleRequest& request, const DescribeUebaRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUebaRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeUebaRuleOutcomeCallable CsipClient::DescribeUebaRuleCallable(const DescribeUebaRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUebaRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeUebaRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeUserCallRecordOutcome CsipClient::DescribeUserCallRecord(const DescribeUserCallRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserCallRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserCallRecordResponse rsp = DescribeUserCallRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserCallRecordOutcome(rsp);
        else
            return DescribeUserCallRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeUserCallRecordOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeUserCallRecordAsync(const DescribeUserCallRecordRequest& request, const DescribeUserCallRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserCallRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeUserCallRecordOutcomeCallable CsipClient::DescribeUserCallRecordCallable(const DescribeUserCallRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserCallRecordOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserCallRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeVULListOutcome CsipClient::DescribeVULList(const DescribeVULListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVULList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVULListResponse rsp = DescribeVULListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVULListOutcome(rsp);
        else
            return DescribeVULListOutcome(o.GetError());
    }
    else
    {
        return DescribeVULListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeVULListAsync(const DescribeVULListRequest& request, const DescribeVULListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVULList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeVULListOutcomeCallable CsipClient::DescribeVULListCallable(const DescribeVULListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVULListOutcome()>>(
        [this, request]()
        {
            return this->DescribeVULList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeVULRiskAdvanceCFGListOutcome CsipClient::DescribeVULRiskAdvanceCFGList(const DescribeVULRiskAdvanceCFGListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVULRiskAdvanceCFGList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVULRiskAdvanceCFGListResponse rsp = DescribeVULRiskAdvanceCFGListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVULRiskAdvanceCFGListOutcome(rsp);
        else
            return DescribeVULRiskAdvanceCFGListOutcome(o.GetError());
    }
    else
    {
        return DescribeVULRiskAdvanceCFGListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeVULRiskAdvanceCFGListAsync(const DescribeVULRiskAdvanceCFGListRequest& request, const DescribeVULRiskAdvanceCFGListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVULRiskAdvanceCFGList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeVULRiskAdvanceCFGListOutcomeCallable CsipClient::DescribeVULRiskAdvanceCFGListCallable(const DescribeVULRiskAdvanceCFGListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVULRiskAdvanceCFGListOutcome()>>(
        [this, request]()
        {
            return this->DescribeVULRiskAdvanceCFGList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeVULRiskDetailOutcome CsipClient::DescribeVULRiskDetail(const DescribeVULRiskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVULRiskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVULRiskDetailResponse rsp = DescribeVULRiskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVULRiskDetailOutcome(rsp);
        else
            return DescribeVULRiskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeVULRiskDetailOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeVULRiskDetailAsync(const DescribeVULRiskDetailRequest& request, const DescribeVULRiskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVULRiskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeVULRiskDetailOutcomeCallable CsipClient::DescribeVULRiskDetailCallable(const DescribeVULRiskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVULRiskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeVULRiskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeVpcAssetsOutcome CsipClient::DescribeVpcAssets(const DescribeVpcAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcAssetsResponse rsp = DescribeVpcAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcAssetsOutcome(rsp);
        else
            return DescribeVpcAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeVpcAssetsAsync(const DescribeVpcAssetsRequest& request, const DescribeVpcAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVpcAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeVpcAssetsOutcomeCallable CsipClient::DescribeVpcAssetsCallable(const DescribeVpcAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVpcAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeVpcAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeVulRiskListOutcome CsipClient::DescribeVulRiskList(const DescribeVulRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulRiskListResponse rsp = DescribeVulRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulRiskListOutcome(rsp);
        else
            return DescribeVulRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeVulRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeVulRiskListAsync(const DescribeVulRiskListRequest& request, const DescribeVulRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeVulRiskListOutcomeCallable CsipClient::DescribeVulRiskListCallable(const DescribeVulRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeVulViewVulRiskListOutcome CsipClient::DescribeVulViewVulRiskList(const DescribeVulViewVulRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulViewVulRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulViewVulRiskListResponse rsp = DescribeVulViewVulRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulViewVulRiskListOutcome(rsp);
        else
            return DescribeVulViewVulRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeVulViewVulRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeVulViewVulRiskListAsync(const DescribeVulViewVulRiskListRequest& request, const DescribeVulViewVulRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulViewVulRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeVulViewVulRiskListOutcomeCallable CsipClient::DescribeVulViewVulRiskListCallable(const DescribeVulViewVulRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulViewVulRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulViewVulRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::ModifyOrganizationAccountStatusOutcome CsipClient::ModifyOrganizationAccountStatus(const ModifyOrganizationAccountStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyOrganizationAccountStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyOrganizationAccountStatusResponse rsp = ModifyOrganizationAccountStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyOrganizationAccountStatusOutcome(rsp);
        else
            return ModifyOrganizationAccountStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyOrganizationAccountStatusOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyOrganizationAccountStatusAsync(const ModifyOrganizationAccountStatusRequest& request, const ModifyOrganizationAccountStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyOrganizationAccountStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::ModifyOrganizationAccountStatusOutcomeCallable CsipClient::ModifyOrganizationAccountStatusCallable(const ModifyOrganizationAccountStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyOrganizationAccountStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyOrganizationAccountStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::ModifyRiskCenterRiskStatusOutcome CsipClient::ModifyRiskCenterRiskStatus(const ModifyRiskCenterRiskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRiskCenterRiskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRiskCenterRiskStatusResponse rsp = ModifyRiskCenterRiskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRiskCenterRiskStatusOutcome(rsp);
        else
            return ModifyRiskCenterRiskStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyRiskCenterRiskStatusOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyRiskCenterRiskStatusAsync(const ModifyRiskCenterRiskStatusRequest& request, const ModifyRiskCenterRiskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRiskCenterRiskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::ModifyRiskCenterRiskStatusOutcomeCallable CsipClient::ModifyRiskCenterRiskStatusCallable(const ModifyRiskCenterRiskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRiskCenterRiskStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyRiskCenterRiskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::ModifyRiskCenterScanTaskOutcome CsipClient::ModifyRiskCenterScanTask(const ModifyRiskCenterScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRiskCenterScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRiskCenterScanTaskResponse rsp = ModifyRiskCenterScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRiskCenterScanTaskOutcome(rsp);
        else
            return ModifyRiskCenterScanTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyRiskCenterScanTaskOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyRiskCenterScanTaskAsync(const ModifyRiskCenterScanTaskRequest& request, const ModifyRiskCenterScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRiskCenterScanTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::ModifyRiskCenterScanTaskOutcomeCallable CsipClient::ModifyRiskCenterScanTaskCallable(const ModifyRiskCenterScanTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRiskCenterScanTaskOutcome()>>(
        [this, request]()
        {
            return this->ModifyRiskCenterScanTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::ModifyUebaRuleSwitchOutcome CsipClient::ModifyUebaRuleSwitch(const ModifyUebaRuleSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUebaRuleSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUebaRuleSwitchResponse rsp = ModifyUebaRuleSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUebaRuleSwitchOutcome(rsp);
        else
            return ModifyUebaRuleSwitchOutcome(o.GetError());
    }
    else
    {
        return ModifyUebaRuleSwitchOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyUebaRuleSwitchAsync(const ModifyUebaRuleSwitchRequest& request, const ModifyUebaRuleSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUebaRuleSwitch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::ModifyUebaRuleSwitchOutcomeCallable CsipClient::ModifyUebaRuleSwitchCallable(const ModifyUebaRuleSwitchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUebaRuleSwitchOutcome()>>(
        [this, request]()
        {
            return this->ModifyUebaRuleSwitch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::StopRiskCenterTaskOutcome CsipClient::StopRiskCenterTask(const StopRiskCenterTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StopRiskCenterTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopRiskCenterTaskResponse rsp = StopRiskCenterTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopRiskCenterTaskOutcome(rsp);
        else
            return StopRiskCenterTaskOutcome(o.GetError());
    }
    else
    {
        return StopRiskCenterTaskOutcome(outcome.GetError());
    }
}

void CsipClient::StopRiskCenterTaskAsync(const StopRiskCenterTaskRequest& request, const StopRiskCenterTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopRiskCenterTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::StopRiskCenterTaskOutcomeCallable CsipClient::StopRiskCenterTaskCallable(const StopRiskCenterTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopRiskCenterTaskOutcome()>>(
        [this, request]()
        {
            return this->StopRiskCenterTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::UpdateAccessKeyAlarmStatusOutcome CsipClient::UpdateAccessKeyAlarmStatus(const UpdateAccessKeyAlarmStatusRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAccessKeyAlarmStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAccessKeyAlarmStatusResponse rsp = UpdateAccessKeyAlarmStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAccessKeyAlarmStatusOutcome(rsp);
        else
            return UpdateAccessKeyAlarmStatusOutcome(o.GetError());
    }
    else
    {
        return UpdateAccessKeyAlarmStatusOutcome(outcome.GetError());
    }
}

void CsipClient::UpdateAccessKeyAlarmStatusAsync(const UpdateAccessKeyAlarmStatusRequest& request, const UpdateAccessKeyAlarmStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateAccessKeyAlarmStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::UpdateAccessKeyAlarmStatusOutcomeCallable CsipClient::UpdateAccessKeyAlarmStatusCallable(const UpdateAccessKeyAlarmStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateAccessKeyAlarmStatusOutcome()>>(
        [this, request]()
        {
            return this->UpdateAccessKeyAlarmStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::UpdateAccessKeyRemarkOutcome CsipClient::UpdateAccessKeyRemark(const UpdateAccessKeyRemarkRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAccessKeyRemark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAccessKeyRemarkResponse rsp = UpdateAccessKeyRemarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAccessKeyRemarkOutcome(rsp);
        else
            return UpdateAccessKeyRemarkOutcome(o.GetError());
    }
    else
    {
        return UpdateAccessKeyRemarkOutcome(outcome.GetError());
    }
}

void CsipClient::UpdateAccessKeyRemarkAsync(const UpdateAccessKeyRemarkRequest& request, const UpdateAccessKeyRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateAccessKeyRemark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::UpdateAccessKeyRemarkOutcomeCallable CsipClient::UpdateAccessKeyRemarkCallable(const UpdateAccessKeyRemarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateAccessKeyRemarkOutcome()>>(
        [this, request]()
        {
            return this->UpdateAccessKeyRemark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::UpdateAlertStatusListOutcome CsipClient::UpdateAlertStatusList(const UpdateAlertStatusListRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAlertStatusList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAlertStatusListResponse rsp = UpdateAlertStatusListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAlertStatusListOutcome(rsp);
        else
            return UpdateAlertStatusListOutcome(o.GetError());
    }
    else
    {
        return UpdateAlertStatusListOutcome(outcome.GetError());
    }
}

void CsipClient::UpdateAlertStatusListAsync(const UpdateAlertStatusListRequest& request, const UpdateAlertStatusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateAlertStatusList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::UpdateAlertStatusListOutcomeCallable CsipClient::UpdateAlertStatusListCallable(const UpdateAlertStatusListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateAlertStatusListOutcome()>>(
        [this, request]()
        {
            return this->UpdateAlertStatusList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

