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

#include <tencentcloud/cbs/v20170312/CbsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cbs::V20170312;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

namespace
{
    const string VERSION = "2017-03-12";
    const string ENDPOINT = "cbs.tencentcloudapi.com";
}

CbsClient::CbsClient(const Credential &credential, const string &region) :
    CbsClient(credential, region, ClientProfile())
{
}

CbsClient::CbsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CbsClient::ApplySnapshotOutcome CbsClient::ApplySnapshot(const ApplySnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "ApplySnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplySnapshotResponse rsp = ApplySnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplySnapshotOutcome(rsp);
        else
            return ApplySnapshotOutcome(o.GetError());
    }
    else
    {
        return ApplySnapshotOutcome(outcome.GetError());
    }
}

void CbsClient::ApplySnapshotAsync(const ApplySnapshotRequest& request, const ApplySnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplySnapshot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::ApplySnapshotOutcomeCallable CbsClient::ApplySnapshotCallable(const ApplySnapshotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplySnapshotOutcome()>>(
        [this, request]()
        {
            return this->ApplySnapshot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::AttachDisksOutcome CbsClient::AttachDisks(const AttachDisksRequest &request)
{
    auto outcome = MakeRequest(request, "AttachDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachDisksResponse rsp = AttachDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachDisksOutcome(rsp);
        else
            return AttachDisksOutcome(o.GetError());
    }
    else
    {
        return AttachDisksOutcome(outcome.GetError());
    }
}

void CbsClient::AttachDisksAsync(const AttachDisksRequest& request, const AttachDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::AttachDisksOutcomeCallable CbsClient::AttachDisksCallable(const AttachDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachDisksOutcome()>>(
        [this, request]()
        {
            return this->AttachDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::BindAutoSnapshotPolicyOutcome CbsClient::BindAutoSnapshotPolicy(const BindAutoSnapshotPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "BindAutoSnapshotPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindAutoSnapshotPolicyResponse rsp = BindAutoSnapshotPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindAutoSnapshotPolicyOutcome(rsp);
        else
            return BindAutoSnapshotPolicyOutcome(o.GetError());
    }
    else
    {
        return BindAutoSnapshotPolicyOutcome(outcome.GetError());
    }
}

void CbsClient::BindAutoSnapshotPolicyAsync(const BindAutoSnapshotPolicyRequest& request, const BindAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindAutoSnapshotPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::BindAutoSnapshotPolicyOutcomeCallable CbsClient::BindAutoSnapshotPolicyCallable(const BindAutoSnapshotPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindAutoSnapshotPolicyOutcome()>>(
        [this, request]()
        {
            return this->BindAutoSnapshotPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::CreateAutoSnapshotPolicyOutcome CbsClient::CreateAutoSnapshotPolicy(const CreateAutoSnapshotPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAutoSnapshotPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAutoSnapshotPolicyResponse rsp = CreateAutoSnapshotPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAutoSnapshotPolicyOutcome(rsp);
        else
            return CreateAutoSnapshotPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateAutoSnapshotPolicyOutcome(outcome.GetError());
    }
}

void CbsClient::CreateAutoSnapshotPolicyAsync(const CreateAutoSnapshotPolicyRequest& request, const CreateAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAutoSnapshotPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::CreateAutoSnapshotPolicyOutcomeCallable CbsClient::CreateAutoSnapshotPolicyCallable(const CreateAutoSnapshotPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAutoSnapshotPolicyOutcome()>>(
        [this, request]()
        {
            return this->CreateAutoSnapshotPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::CreateDisksOutcome CbsClient::CreateDisks(const CreateDisksRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDisksResponse rsp = CreateDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDisksOutcome(rsp);
        else
            return CreateDisksOutcome(o.GetError());
    }
    else
    {
        return CreateDisksOutcome(outcome.GetError());
    }
}

void CbsClient::CreateDisksAsync(const CreateDisksRequest& request, const CreateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::CreateDisksOutcomeCallable CbsClient::CreateDisksCallable(const CreateDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDisksOutcome()>>(
        [this, request]()
        {
            return this->CreateDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::CreateSnapshotOutcome CbsClient::CreateSnapshot(const CreateSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSnapshotResponse rsp = CreateSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSnapshotOutcome(rsp);
        else
            return CreateSnapshotOutcome(o.GetError());
    }
    else
    {
        return CreateSnapshotOutcome(outcome.GetError());
    }
}

void CbsClient::CreateSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSnapshot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::CreateSnapshotOutcomeCallable CbsClient::CreateSnapshotCallable(const CreateSnapshotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSnapshotOutcome()>>(
        [this, request]()
        {
            return this->CreateSnapshot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::DeleteAutoSnapshotPoliciesOutcome CbsClient::DeleteAutoSnapshotPolicies(const DeleteAutoSnapshotPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAutoSnapshotPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAutoSnapshotPoliciesResponse rsp = DeleteAutoSnapshotPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAutoSnapshotPoliciesOutcome(rsp);
        else
            return DeleteAutoSnapshotPoliciesOutcome(o.GetError());
    }
    else
    {
        return DeleteAutoSnapshotPoliciesOutcome(outcome.GetError());
    }
}

void CbsClient::DeleteAutoSnapshotPoliciesAsync(const DeleteAutoSnapshotPoliciesRequest& request, const DeleteAutoSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAutoSnapshotPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DeleteAutoSnapshotPoliciesOutcomeCallable CbsClient::DeleteAutoSnapshotPoliciesCallable(const DeleteAutoSnapshotPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAutoSnapshotPoliciesOutcome()>>(
        [this, request]()
        {
            return this->DeleteAutoSnapshotPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::DeleteSnapshotsOutcome CbsClient::DeleteSnapshots(const DeleteSnapshotsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSnapshots");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSnapshotsResponse rsp = DeleteSnapshotsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSnapshotsOutcome(rsp);
        else
            return DeleteSnapshotsOutcome(o.GetError());
    }
    else
    {
        return DeleteSnapshotsOutcome(outcome.GetError());
    }
}

void CbsClient::DeleteSnapshotsAsync(const DeleteSnapshotsRequest& request, const DeleteSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSnapshots(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DeleteSnapshotsOutcomeCallable CbsClient::DeleteSnapshotsCallable(const DeleteSnapshotsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSnapshotsOutcome()>>(
        [this, request]()
        {
            return this->DeleteSnapshots(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::DescribeAutoSnapshotPoliciesOutcome CbsClient::DescribeAutoSnapshotPolicies(const DescribeAutoSnapshotPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoSnapshotPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoSnapshotPoliciesResponse rsp = DescribeAutoSnapshotPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoSnapshotPoliciesOutcome(rsp);
        else
            return DescribeAutoSnapshotPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoSnapshotPoliciesOutcome(outcome.GetError());
    }
}

void CbsClient::DescribeAutoSnapshotPoliciesAsync(const DescribeAutoSnapshotPoliciesRequest& request, const DescribeAutoSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAutoSnapshotPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DescribeAutoSnapshotPoliciesOutcomeCallable CbsClient::DescribeAutoSnapshotPoliciesCallable(const DescribeAutoSnapshotPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAutoSnapshotPoliciesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAutoSnapshotPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::DescribeDiskAssociatedAutoSnapshotPolicyOutcome CbsClient::DescribeDiskAssociatedAutoSnapshotPolicy(const DescribeDiskAssociatedAutoSnapshotPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDiskAssociatedAutoSnapshotPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDiskAssociatedAutoSnapshotPolicyResponse rsp = DescribeDiskAssociatedAutoSnapshotPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDiskAssociatedAutoSnapshotPolicyOutcome(rsp);
        else
            return DescribeDiskAssociatedAutoSnapshotPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeDiskAssociatedAutoSnapshotPolicyOutcome(outcome.GetError());
    }
}

void CbsClient::DescribeDiskAssociatedAutoSnapshotPolicyAsync(const DescribeDiskAssociatedAutoSnapshotPolicyRequest& request, const DescribeDiskAssociatedAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDiskAssociatedAutoSnapshotPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DescribeDiskAssociatedAutoSnapshotPolicyOutcomeCallable CbsClient::DescribeDiskAssociatedAutoSnapshotPolicyCallable(const DescribeDiskAssociatedAutoSnapshotPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDiskAssociatedAutoSnapshotPolicyOutcome()>>(
        [this, request]()
        {
            return this->DescribeDiskAssociatedAutoSnapshotPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::DescribeDiskConfigQuotaOutcome CbsClient::DescribeDiskConfigQuota(const DescribeDiskConfigQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDiskConfigQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDiskConfigQuotaResponse rsp = DescribeDiskConfigQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDiskConfigQuotaOutcome(rsp);
        else
            return DescribeDiskConfigQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeDiskConfigQuotaOutcome(outcome.GetError());
    }
}

void CbsClient::DescribeDiskConfigQuotaAsync(const DescribeDiskConfigQuotaRequest& request, const DescribeDiskConfigQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDiskConfigQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DescribeDiskConfigQuotaOutcomeCallable CbsClient::DescribeDiskConfigQuotaCallable(const DescribeDiskConfigQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDiskConfigQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribeDiskConfigQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::DescribeDiskOperationLogsOutcome CbsClient::DescribeDiskOperationLogs(const DescribeDiskOperationLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDiskOperationLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDiskOperationLogsResponse rsp = DescribeDiskOperationLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDiskOperationLogsOutcome(rsp);
        else
            return DescribeDiskOperationLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeDiskOperationLogsOutcome(outcome.GetError());
    }
}

void CbsClient::DescribeDiskOperationLogsAsync(const DescribeDiskOperationLogsRequest& request, const DescribeDiskOperationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDiskOperationLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DescribeDiskOperationLogsOutcomeCallable CbsClient::DescribeDiskOperationLogsCallable(const DescribeDiskOperationLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDiskOperationLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDiskOperationLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::DescribeDisksOutcome CbsClient::DescribeDisks(const DescribeDisksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDisksResponse rsp = DescribeDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDisksOutcome(rsp);
        else
            return DescribeDisksOutcome(o.GetError());
    }
    else
    {
        return DescribeDisksOutcome(outcome.GetError());
    }
}

void CbsClient::DescribeDisksAsync(const DescribeDisksRequest& request, const DescribeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DescribeDisksOutcomeCallable CbsClient::DescribeDisksCallable(const DescribeDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDisksOutcome()>>(
        [this, request]()
        {
            return this->DescribeDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::DescribeInstancesDiskNumOutcome CbsClient::DescribeInstancesDiskNum(const DescribeInstancesDiskNumRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesDiskNum");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesDiskNumResponse rsp = DescribeInstancesDiskNumResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesDiskNumOutcome(rsp);
        else
            return DescribeInstancesDiskNumOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesDiskNumOutcome(outcome.GetError());
    }
}

void CbsClient::DescribeInstancesDiskNumAsync(const DescribeInstancesDiskNumRequest& request, const DescribeInstancesDiskNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancesDiskNum(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DescribeInstancesDiskNumOutcomeCallable CbsClient::DescribeInstancesDiskNumCallable(const DescribeInstancesDiskNumRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesDiskNumOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancesDiskNum(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::DescribeSnapshotOperationLogsOutcome CbsClient::DescribeSnapshotOperationLogs(const DescribeSnapshotOperationLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotOperationLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotOperationLogsResponse rsp = DescribeSnapshotOperationLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotOperationLogsOutcome(rsp);
        else
            return DescribeSnapshotOperationLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotOperationLogsOutcome(outcome.GetError());
    }
}

void CbsClient::DescribeSnapshotOperationLogsAsync(const DescribeSnapshotOperationLogsRequest& request, const DescribeSnapshotOperationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSnapshotOperationLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DescribeSnapshotOperationLogsOutcomeCallable CbsClient::DescribeSnapshotOperationLogsCallable(const DescribeSnapshotOperationLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSnapshotOperationLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSnapshotOperationLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::DescribeSnapshotsOutcome CbsClient::DescribeSnapshots(const DescribeSnapshotsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshots");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotsResponse rsp = DescribeSnapshotsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotsOutcome(rsp);
        else
            return DescribeSnapshotsOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotsOutcome(outcome.GetError());
    }
}

void CbsClient::DescribeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSnapshots(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DescribeSnapshotsOutcomeCallable CbsClient::DescribeSnapshotsCallable(const DescribeSnapshotsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSnapshotsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSnapshots(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::DetachDisksOutcome CbsClient::DetachDisks(const DetachDisksRequest &request)
{
    auto outcome = MakeRequest(request, "DetachDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachDisksResponse rsp = DetachDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachDisksOutcome(rsp);
        else
            return DetachDisksOutcome(o.GetError());
    }
    else
    {
        return DetachDisksOutcome(outcome.GetError());
    }
}

void CbsClient::DetachDisksAsync(const DetachDisksRequest& request, const DetachDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetachDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::DetachDisksOutcomeCallable CbsClient::DetachDisksCallable(const DetachDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetachDisksOutcome()>>(
        [this, request]()
        {
            return this->DetachDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::InquiryPriceCreateDisksOutcome CbsClient::InquiryPriceCreateDisks(const InquiryPriceCreateDisksRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceCreateDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceCreateDisksResponse rsp = InquiryPriceCreateDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceCreateDisksOutcome(rsp);
        else
            return InquiryPriceCreateDisksOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceCreateDisksOutcome(outcome.GetError());
    }
}

void CbsClient::InquiryPriceCreateDisksAsync(const InquiryPriceCreateDisksRequest& request, const InquiryPriceCreateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceCreateDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::InquiryPriceCreateDisksOutcomeCallable CbsClient::InquiryPriceCreateDisksCallable(const InquiryPriceCreateDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceCreateDisksOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceCreateDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::InquiryPriceRenewDisksOutcome CbsClient::InquiryPriceRenewDisks(const InquiryPriceRenewDisksRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceRenewDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceRenewDisksResponse rsp = InquiryPriceRenewDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceRenewDisksOutcome(rsp);
        else
            return InquiryPriceRenewDisksOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceRenewDisksOutcome(outcome.GetError());
    }
}

void CbsClient::InquiryPriceRenewDisksAsync(const InquiryPriceRenewDisksRequest& request, const InquiryPriceRenewDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceRenewDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::InquiryPriceRenewDisksOutcomeCallable CbsClient::InquiryPriceRenewDisksCallable(const InquiryPriceRenewDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceRenewDisksOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceRenewDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::InquiryPriceResizeDiskOutcome CbsClient::InquiryPriceResizeDisk(const InquiryPriceResizeDiskRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceResizeDisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceResizeDiskResponse rsp = InquiryPriceResizeDiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceResizeDiskOutcome(rsp);
        else
            return InquiryPriceResizeDiskOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceResizeDiskOutcome(outcome.GetError());
    }
}

void CbsClient::InquiryPriceResizeDiskAsync(const InquiryPriceResizeDiskRequest& request, const InquiryPriceResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceResizeDisk(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::InquiryPriceResizeDiskOutcomeCallable CbsClient::InquiryPriceResizeDiskCallable(const InquiryPriceResizeDiskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceResizeDiskOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceResizeDisk(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::ModifyAutoSnapshotPolicyAttributeOutcome CbsClient::ModifyAutoSnapshotPolicyAttribute(const ModifyAutoSnapshotPolicyAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAutoSnapshotPolicyAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAutoSnapshotPolicyAttributeResponse rsp = ModifyAutoSnapshotPolicyAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAutoSnapshotPolicyAttributeOutcome(rsp);
        else
            return ModifyAutoSnapshotPolicyAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyAutoSnapshotPolicyAttributeOutcome(outcome.GetError());
    }
}

void CbsClient::ModifyAutoSnapshotPolicyAttributeAsync(const ModifyAutoSnapshotPolicyAttributeRequest& request, const ModifyAutoSnapshotPolicyAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAutoSnapshotPolicyAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::ModifyAutoSnapshotPolicyAttributeOutcomeCallable CbsClient::ModifyAutoSnapshotPolicyAttributeCallable(const ModifyAutoSnapshotPolicyAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAutoSnapshotPolicyAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyAutoSnapshotPolicyAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::ModifyDiskAttributesOutcome CbsClient::ModifyDiskAttributes(const ModifyDiskAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDiskAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDiskAttributesResponse rsp = ModifyDiskAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDiskAttributesOutcome(rsp);
        else
            return ModifyDiskAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyDiskAttributesOutcome(outcome.GetError());
    }
}

void CbsClient::ModifyDiskAttributesAsync(const ModifyDiskAttributesRequest& request, const ModifyDiskAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDiskAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::ModifyDiskAttributesOutcomeCallable CbsClient::ModifyDiskAttributesCallable(const ModifyDiskAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDiskAttributesOutcome()>>(
        [this, request]()
        {
            return this->ModifyDiskAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::ModifyDisksRenewFlagOutcome CbsClient::ModifyDisksRenewFlag(const ModifyDisksRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDisksRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDisksRenewFlagResponse rsp = ModifyDisksRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDisksRenewFlagOutcome(rsp);
        else
            return ModifyDisksRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyDisksRenewFlagOutcome(outcome.GetError());
    }
}

void CbsClient::ModifyDisksRenewFlagAsync(const ModifyDisksRenewFlagRequest& request, const ModifyDisksRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDisksRenewFlag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::ModifyDisksRenewFlagOutcomeCallable CbsClient::ModifyDisksRenewFlagCallable(const ModifyDisksRenewFlagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDisksRenewFlagOutcome()>>(
        [this, request]()
        {
            return this->ModifyDisksRenewFlag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::ModifySnapshotAttributeOutcome CbsClient::ModifySnapshotAttribute(const ModifySnapshotAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySnapshotAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySnapshotAttributeResponse rsp = ModifySnapshotAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySnapshotAttributeOutcome(rsp);
        else
            return ModifySnapshotAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifySnapshotAttributeOutcome(outcome.GetError());
    }
}

void CbsClient::ModifySnapshotAttributeAsync(const ModifySnapshotAttributeRequest& request, const ModifySnapshotAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySnapshotAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::ModifySnapshotAttributeOutcomeCallable CbsClient::ModifySnapshotAttributeCallable(const ModifySnapshotAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySnapshotAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifySnapshotAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::RenewDiskOutcome CbsClient::RenewDisk(const RenewDiskRequest &request)
{
    auto outcome = MakeRequest(request, "RenewDisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewDiskResponse rsp = RenewDiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewDiskOutcome(rsp);
        else
            return RenewDiskOutcome(o.GetError());
    }
    else
    {
        return RenewDiskOutcome(outcome.GetError());
    }
}

void CbsClient::RenewDiskAsync(const RenewDiskRequest& request, const RenewDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewDisk(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::RenewDiskOutcomeCallable CbsClient::RenewDiskCallable(const RenewDiskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewDiskOutcome()>>(
        [this, request]()
        {
            return this->RenewDisk(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::ResizeDiskOutcome CbsClient::ResizeDisk(const ResizeDiskRequest &request)
{
    auto outcome = MakeRequest(request, "ResizeDisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResizeDiskResponse rsp = ResizeDiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResizeDiskOutcome(rsp);
        else
            return ResizeDiskOutcome(o.GetError());
    }
    else
    {
        return ResizeDiskOutcome(outcome.GetError());
    }
}

void CbsClient::ResizeDiskAsync(const ResizeDiskRequest& request, const ResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResizeDisk(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::ResizeDiskOutcomeCallable CbsClient::ResizeDiskCallable(const ResizeDiskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResizeDiskOutcome()>>(
        [this, request]()
        {
            return this->ResizeDisk(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::TerminateDisksOutcome CbsClient::TerminateDisks(const TerminateDisksRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateDisksResponse rsp = TerminateDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateDisksOutcome(rsp);
        else
            return TerminateDisksOutcome(o.GetError());
    }
    else
    {
        return TerminateDisksOutcome(outcome.GetError());
    }
}

void CbsClient::TerminateDisksAsync(const TerminateDisksRequest& request, const TerminateDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::TerminateDisksOutcomeCallable CbsClient::TerminateDisksCallable(const TerminateDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateDisksOutcome()>>(
        [this, request]()
        {
            return this->TerminateDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CbsClient::UnbindAutoSnapshotPolicyOutcome CbsClient::UnbindAutoSnapshotPolicy(const UnbindAutoSnapshotPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindAutoSnapshotPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindAutoSnapshotPolicyResponse rsp = UnbindAutoSnapshotPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindAutoSnapshotPolicyOutcome(rsp);
        else
            return UnbindAutoSnapshotPolicyOutcome(o.GetError());
    }
    else
    {
        return UnbindAutoSnapshotPolicyOutcome(outcome.GetError());
    }
}

void CbsClient::UnbindAutoSnapshotPolicyAsync(const UnbindAutoSnapshotPolicyRequest& request, const UnbindAutoSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindAutoSnapshotPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CbsClient::UnbindAutoSnapshotPolicyOutcomeCallable CbsClient::UnbindAutoSnapshotPolicyCallable(const UnbindAutoSnapshotPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindAutoSnapshotPolicyOutcome()>>(
        [this, request]()
        {
            return this->UnbindAutoSnapshotPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

